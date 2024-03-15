#include<stdio.h>
int largest(int arr[],int size){
	int max=0;
	for(int i=0;i<size;i++){
		
		if(arr[i]>max)
		max=arr[i];
	}
	return max;
}
int main(){
	int arr[]={1,5,2,3,4,7,8,9};
	int size=8;
	int max=largest(arr,size);
	printf("largest is:%d  ",max);
}
