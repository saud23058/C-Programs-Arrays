#include<stdio.h>
int sumArrayElements(int array[], int n){
	int sum=0;
	for(int i=0; i<n ; i++){
		scanf("%d",&array[i]);
		if(array[i]%2==1)
		sum=sum+array[i];
	}
	return sum;
}
int main()
{
	int n;
	printf("Enter Number Of Elements:");
	scanf("%d",&n);
	int array[n];
	int sum=sumArrayElements(array,n);
	printf("Sum Of odd Numbers in Array is %d",sum);
}