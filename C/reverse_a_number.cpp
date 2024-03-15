#include<stdio.h>
int main(){
	int n,str,rev=0;
	scanf("%d",&n);
	while(n>0){
	
	str=n%10;
	rev=rev*10+str;
	n=n/10;
}
printf("reverse is:%d",rev);
}
