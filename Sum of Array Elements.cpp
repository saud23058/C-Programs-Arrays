#include<stdio.h>
int sumArrayElements(int array[], int n){
	int sum=0;
	for(int i=0; i<n ; i++){
		scanf("%d",&array[i]);
		sum=sum+n;
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
	printf("Sum Of Array is %d",sum);
}