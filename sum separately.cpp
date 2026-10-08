#include<stdio.h>
int main()
{
	int a;
	printf("enter base :");
	scanf("%d",&a);
	int b;
	printf("enter power :");
	scanf("%d",b);
	int power;
	for(int i=1;i<=b;i++){
		power=power*a;	
	}
	printf("the power of the number is :%d\n",power);
	return 0;
}
