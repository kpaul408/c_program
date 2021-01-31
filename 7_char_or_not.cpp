/* Alphabet or not */
#include<stdio.h>
int main(){  
	int a,b,c;
	char z;
	printf("Enter something: ");
	scanf("%c",&z);
	if((z>=65 && z<=90) || (z>=97 && z<=122)){
		printf("you type chracter: ");	
	}
	else{
		printf("This not a chracter: ");
	}
	return 0;
}
