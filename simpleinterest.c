#include<stdio.h>
int main()
{
	int p;
	printf("enter value p :\n");
	scanf("%d",&p);
	int t;
	printf("enter value t :\n");
	scanf("%d",&t);
    int r;
	printf("enter value r :\n");
	scanf("%d",&r);
	int si=(p*t*r)/100;
	printf("the value of simple interest is :%d\n",si);
	return 0;
}
