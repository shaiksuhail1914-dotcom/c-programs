#include<stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5,};
	int x=5;
	int count=0;
	for(int i=0;i<=4;i++){
		if(x>arr[i]){
		count=count+1;
		printf("%d ",arr[i]);
	}
	}
	printf("%d\n",count);
	return 0;
}
