#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *ptr=NULL;
	ptr=fopen("babu.txt","r+");
	char str[4];
	fgetc=fprintf(str,3,ptr);
	printf("%s",str);
}
