#include<stdio.h>
#include<string.h>

int main(){
char a[100]={'\0'};
int i,j=0;
gets(a);
for(i=0;i<strlen(a);i++){
   if(a[i]==' ') j=0; else j++;
}
printf("%d",j);
return 0;
}
