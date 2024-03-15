#include<stdio.h>

int main(){
	int value,i,fact1=1;
	printf(" enter value" );
	scanf("%d",&value);
	for(i=value;i>=1;i--){
		fact1=fact1*i;
		
	}
	printf("%d",fact1);
}
