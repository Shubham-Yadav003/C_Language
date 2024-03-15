/*#include<stdio.h>

isprime(int n){
	for(int i=2;i*i<n;i++){
	   if (n%i==0)
		return 0;
	}
	return 1;
}

int main(){
	int n1,n2,i;
	printf("enter n1, n2:");
	scanf("%d%d",&n1,&n2);
	for(i=n1+1;i<n2;i++)
	if( isprime(i)){
		printf("%d", i );
	}
	
}*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	bool flag=0;
	for(int i =2;i<n;i++){
		if(n%i==0){
			cout<<"non-prime"<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"prime"<<endl;
	}
}
