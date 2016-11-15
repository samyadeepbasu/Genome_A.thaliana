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
long long n;
char * x,* p,* m;
char fin1[50];
map<string,int> fin;

int main()
{
FILE * fp;
FILE * fp1=fopen("promoter_output.txt","w");
x=(char*)malloc(125000000);
 fp=fopen("promoterseq.txt","r");
 for(p=x;(p<=x+125000000) && (!feof(fp));p=p+1){ fscanf(fp,"%c",p);if(*p=='\t') p=p-1; } m=p-1;
for(int val=0;val<=10;val++){
fin.clear();
int ans1=0;
int ans=0;
map<string,int>::iterator iii;
for(p=x;(p+val+7)<=m;p=p+1){
    if(*p=='t' && *(p+1)=='g' && *(p+2)=='c' && *(p+3)=='a' && *(p+4+val)=='t' && *(p+5+val)=='g' && *(p+6+val)=='c' && *(p+val+7)=='a'){
        char aaa[2];
        strcpy(fin1,"");
        int bol=0;
    for(int i=0;i<=7+val;i++){
        if(*(p+i)-'0'>=0&&*(p+i)-'0'<=9) bol=1;
        aaa[0]=*(p+i);aaa[1]='\0';
        strcat(fin1,aaa);
    }
    if(bol) continue;
    string temp(fin1);

      if((iii=fin.find(temp))!=fin.end())
        iii->second++;
       else
        fin[temp]=1;
       ans++;
}}

ans1+=ans;int cnnt=0;


fprintf(fp1,"%d : %d \n",val,ans);

for(iii=fin.begin();iii!=fin.end();iii++){
    fprintf(fp1,"%s %d\n",iii->first.c_str(),iii->second);
}
ans=0;


}
fclose(fp);
fclose(fp1);
free(x);
}

