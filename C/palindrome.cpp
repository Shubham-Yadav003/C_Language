#include<stdio.h>

int main(){
	int n,rem,c,rev=0;
	printf("enter any number:");
	scanf("%d",&n);
	c=n;
	while (n>0){ 
    rem=n%10;
    rev=rev*10+rem;
	n=n/10;


}

if(rev==c)
printf("palindrome");
else
printf("not any");
}
/*#include <stdio.h>

int main() {
    int n, rem, rev = 0, c;
    
    printf("Enter any number: ");
    scanf("%d", &n);
    
    c = n;
    
    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
       
    }
    
    if (rev == c)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    
    return 0;
} */

