// largest using pointer
#include<stdio.h>
int main(){
	int arr[100],size,i,*p;
	printf("enter size");
	scanf("%d",&size);
	p=&arr;
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	largest(p,size);
	
	
}
int largest(p,size){
	int max=0,i;
	for(i=0;i<size;i++){
		if(*(arr+i)>max){
			max=*arr[i];
		}
	}
}
