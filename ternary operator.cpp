#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a%4==0) && (a%100!=0) || (a%400==0){
		printf("leap year");
	}
	else{
		("it is not leap year");
	}
	printf("%d",a);
	return 0;
}
