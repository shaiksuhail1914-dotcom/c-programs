#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int x=5;
	for(int i=0;i<5;i++){
		if(arr[i]=x){
		int	position=i;
			printf("%d the number is present\n and the position is %d",x,i);
			break;
		}
	}
	return 0;
	
}
