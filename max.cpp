#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two Number");
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("%d is the max number",a);
	}
	else{
		printf("%d is the max number",b);
	}
}
