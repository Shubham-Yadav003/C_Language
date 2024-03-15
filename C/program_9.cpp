#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr1,*ptr2;
*ptr1=10;
*ptr2=free(ptr1);
printf("%d",*ptr2);
return 0;
}

