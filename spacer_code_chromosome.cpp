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
char fin1[70];
map<string,int> fin;

int main()
{
FILE * fp;
FILE * fp1=fopen("spacer_output.txt","w");
x=(char*)malloc(125000000);
for(int val=0;val<=30;val++){
fin.clear();
int ans1=0;
int ans=0;
map<string,int>::iterator iii;
 fp=fopen("Chromosome1.txt","r");
 for(p=x;(p<=x+125000000) && (!feof(fp));p=p+1){ fscanf(fp,"%c",p);if(*p=='\n') p=p-1; } m=p-1;

for(p=x;(p+val+7)<=m;p=p+1){
    if(*p=='T' && *(p+1)=='G' && *(p+2)=='A' && *(p+3)=='C' && *(p+4+val)=='T' && *(p+5+val)=='G' && *(p+val+6)=='A'
       && *(p+val+7)=='C'){
        char aaa[2];
        strcpy(fin1,"");
    for(int i=0;i<=7+val;i++){
        aaa[0]=*(p+i);aaa[1]='\0';
        strcat(fin1,aaa);

    }
    string temp(fin1);
      if((iii=fin.find(temp))!=fin.end())
        iii->second++;
       else
        fin[temp]=1;
       ans++;
}}

ans1+=ans;int cnnt=0;


ans=0;
fclose(fp);
 fp=fopen("Chromosome2.txt","r"); for(p=x;(p<=x+125000000) && (!feof(fp));p=p+1){ fscanf(fp,"%c",p);if(*p=='\n') p=p-1; } m=p-1;
for(p=x;p<=m;p=p+1){
    if(*p=='T' && *(p+1)=='G' && *(p+2)=='A' && *(p+3)=='C' && *(p+4+val)=='T' && *(p+5+val)=='G' && *(p+val+6)=='A'
       && *(p+val+7)=='C'){
        char aaa[2];
        strcpy(fin1,"");
    for(int i=0;i<=7+val;i++){
        aaa[0]=*(p+i);aaa[1]='\0';
        strcat(fin1,aaa);
    }
    string temp(fin1);

      if((iii=fin.find(temp))!=fin.end())
        iii->second++;
       else
        fin[temp]=1;
       ans++;
}}
ans1+=ans;
ans=0;
fclose(fp);
 fp=fopen("Chromosome3.txt","r"); for(p=x;(p<=x+125000000) && (!feof(fp));p=p+1){ fscanf(fp,"%c",p);if(*p=='\n') p=p-1; } m=p-1;
for(p=x;p<=m;p=p+1){
    if(*p=='T' && *(p+1)=='G' && *(p+2)=='A' && *(p+3)=='C' && *(p+4+val)=='T' && *(p+5+val)=='G' && *(p+val+6)=='A'
       && *(p+val+7)=='C'){
        char aaa[2];
        strcpy(fin1,"");
    for(int i=0;i<=7+val;i++){
        aaa[0]=*(p+i);aaa[1]='\0';
        strcat(fin1,aaa);
    }
    string temp(fin1);

      if((iii=fin.find(temp))!=fin.end())
        iii->second++;
       else
        fin[temp]=1;
       ans++;
}}
ans1+=ans;
ans=0;
fclose(fp);
 fp=fopen("Chromosome4.txt","r"); for(p=x;(p<=x+125000000) && (!feof(fp));p=p+1){ fscanf(fp,"%c",p);if(*p=='\n') p=p-1; } m=p-1;
for(p=x;p<=m;p=p+1){
    if(*p=='T' && *(p+1)=='G' && *(p+2)=='A' && *(p+3)=='C' && *(p+4+val)=='T' && *(p+5+val)=='G' && *(p+val+6)=='A'
       && *(p+val+7)=='C'){
        char aaa[2];
        strcpy(fin1,"");
    for(int i=0;i<=7+val;i++){
        aaa[0]=*(p+i);aaa[1]='\0';
        strcat(fin1,aaa);
    }
    string temp(fin1);

      if((iii=fin.find(temp))!=fin.end())
        iii->second++;
       else
        fin[temp]=1;
       ans++;
}}
ans1+=ans;
ans=0;
fclose(fp);
 fp=fopen("Chromosome5.txt","r"); for(p=x;(p<=x+125000000) && (!feof(fp));p=p+1){ fscanf(fp,"%c",p);if(*p=='\n') p=p-1; } m=p-1;
for(p=x;p<=m;p=p+1){
    if(*p=='T' && *(p+1)=='G' && *(p+2)=='A' && *(p+3)=='C' && *(p+4+val)=='T' && *(p+5+val)=='G' && *(p+val+6)=='A'
       && *(p+val+7)=='C'){
        char aaa[2];
        strcpy(fin1,"");
    for(int i=0;i<=7+val;i++){
        aaa[0]=*(p+i);aaa[1]='\0';
        strcat(fin1,aaa);
    }
    string temp(fin1);

      if((iii=fin.find(temp))!=fin.end())
        iii->second++;
       else
        fin[temp]=1;
       ans++;
}}
ans1+=ans;

fprintf(fp1,"%d : %d \n",val,ans1);
for(iii=fin.begin();iii!=fin.end();iii++){
    fprintf(fp1,"%s %d\n",iii->first.c_str(),iii->second);
}
ans=0;
fclose(fp);
}
fclose(fp1);
free(x);
}

