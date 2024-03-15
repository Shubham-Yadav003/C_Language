#include<stdio.h>

int main(){
	int n,rem,arm=0,c;
	printf("enter any number:");
	scanf("%d",&n);
	c=n;
	while (n>0){ 
    rem=n%10;
	arm=arm+(rem*rem*rem);
	n=n/10;
	printf("%d",rem);
}
	if(arm==c)
	printf("it is a armstrong no");
	else
	printf("not");
}
