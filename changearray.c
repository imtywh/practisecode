#include<stdio.h>
#include<stdlib.h>
#define M 3
#define N 3


int main(){

int array[M][N]={0},mode=0,i,j;
for(i=0;i<M;i++){
  for(j=0;j<N;j++){
      scanf("%d",&array[i][j]);
  }
}
printf("please input mode (0) right to left (1)  up to down\n");

scanf("%d",&mode);
getchar();
if(mode==0){

for(i=0;i<M;i++){
  for(j=0;j<N;j++){
      printf("%d ",array[i][N-j-1]);
  }
  printf("\n");
}
}else {
for(i=0;i<M;i++){
  for(j=0;j<N;j++){
      printf("%d ",array[M-i-1][j]);
  }
  printf("\n");
}
}
return 0;
}
