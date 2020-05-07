#include <stdio.h>
int main()
{
int N,M,i,j,k;
scanf("%d%d",&N,&M);
int f[M][26];
for(j=0;j<M;j++)
{
for(k=0;k<26;k++)f[j][k]=0;
 
}
for(i=0;i<N;i++)
{
char str[M+1];
scanf("%s",str);
for(j=0;j<M;j++)
f[j][str[j]-'a']++;
}
for(i=0;i<M;i++)
{
int m=0;int pos;
for(j=0;j<26;j++)
{
if(f[i][j]>m)
{
m=f[i][j];
pos=j;
}
}
printf("%c",pos+'a');
}
printf("\n");
return 0;
}


https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/hamming-3/