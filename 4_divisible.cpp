#include<stdio.h>
main(){
	int a,b,c;
	printf("Enter the number: ");
	scanf("%d",&a);
	b=a%5;
	c=a%11;
	if(b==0 && c==0){
		printf("The number is Divisible by 5 and 11");
	}else{
		printf("This number is not Divisible");
	}
		
}
