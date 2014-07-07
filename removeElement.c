#include<stdio.h>
#include<string.h>

int removeElement(int A[],int n,int elem){
int i,tmp=n;
for(i=0;i<n;i++)
if(A[i]==elem) tmp--;

return tmp;
}
int main(){
int n,i,tmp,elem;
scanf("%d",&n);
int A[200]={0};
for(i=0;i<n;i++)
scanf("%d",&A[i]);
scanf("%d",&elem);
printf("%d",removeElement(A,n,elem));

return 0;
}
