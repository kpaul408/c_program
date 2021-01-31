#include<stdio.h>
int main(){
	int y;
	printf("Enter a year: ");
	scanf("%d",&y);
	if(y%400==0){
		printf("This year is leap year. ");
	}
	else if(y%100==0){
		printf("This year is not leap year. ");
	}
	else if(y%4==0){
		printf("This year is leap year. ");
	}
	else{
		printf("This year is not leap year. ");
	}
	return 0;
}
