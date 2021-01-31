#include<stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter three number");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2 && num1>num2){
		printf("%d number is max",num1);
	}
	else if(num2>num3 && num2>num1){
		printf("%d num is max",num2);
	}
	else{
		printf("%d num is max",num3);
	}
	
}
