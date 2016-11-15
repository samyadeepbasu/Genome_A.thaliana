#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
#include<cmath>
#include<utility>
#include<sstream>
#include<cstdlib>
#include<fstream>
#include<cstring>
using namespace std;
vector<string> seq;

float findsim(string a,string b){
float score[a.size()+1][b.size()+1];
    for(int i=0;i<=a.size();i++)
        score[i][0]=(-1*i);
    for(int j=0;j<=b.size();j++)
        score[0][j]=(-1*j);
    for(int i=1;i<=a.size();i++){
    for(int j=1;j<=b.size();j++){
    if(a[i-1]==b[j-1])
    score[i][j]=score[i-1][j-1]+2;
    else
    score[i][j]=score[i-1][j-1]-2;
    score[i][j]=max(score[i][j],max(score[i-1][j]-1,score[i][j-1]-1));
    }
    }
    return score[a.size()][b.size()];
}

int main(){
FILE * inp,* out;
//cout<<findsim("TG","CTG");
int s;
//cin>>s;
inp=fopen("osmotic-upreg_tgac-tgac.txt","r");
while(!feof(inp)){
    int temp;char str[40];
    fscanf(inp,"%s",str);
    fscanf(inp,"%s",str);
    fscanf(inp,"%d",&temp);
    seq.push_back(string (str));
}
fclose(inp);
out=fopen("osmotic-upreg_tgac-tgac_sim.txt","w");
for(int i=0;i<seq.size();i++){
    for(int j=i+1;j<seq.size();j++){
        if(findsim(seq[i],seq[j])/(seq[i].length()+seq[j].length())>0.7){
        fprintf(out,"%s %s ",seq[i].c_str(),seq[j].c_str());
        fprintf(out,"%f\n",findsim(seq[i],seq[j])/(seq[i].length()+seq[j].length()));}
    }
}
fclose(out);
}
