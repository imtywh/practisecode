#include<stdio.h>

int searchInsert(int A[],int n,int target){
int i;
for(i=0;i<n;i++){
if(target<A[i])  return i;
if(i==(n-1)) return n;
}
}

int main(){
int n,i,tmp,target;
scanf("%d",&n);
int A[200]={0};
for(i=0;i<n;i++)
scanf("%d",&A[i]);
scanf("%d",&target);
printf("%d",searchInsert(A,n,target));
return 0;
}
