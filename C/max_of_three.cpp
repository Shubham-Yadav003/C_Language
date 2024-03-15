#include<stdio.h>
int main(){ 
 int a,b,c,max;
 printf("enter 3 digits:");
 scanf("%d%d%d",&a,&b,&c);
 max=a;
 if(b>a){
 	max=b;
 }
  if(c>b){
 	max=c;
 }
 printf( "%d",max);
 
}
	
