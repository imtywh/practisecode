#include<stdio.h>
int removeMore(int A[],int n){
int i,j,tmp;
tmp=n;
for(i=0;i<n;i++)
  for(j=i+1;j<n;j++)
  if(A[i]==A[j]) {tmp--; i=j;}
return tmp;
}
int main(){
int n,i,tmp;
scanf("%d",&n);
int A[200]={'\0'};
for(i=0;i<n;i++)
scanf("%d",&A[i]);
printf("%d",removeMore(A,n));
return 0;
}
