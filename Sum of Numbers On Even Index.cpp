#include<stdio.h>
void input(int array[], int n){
	for(int i=0; i<n ; i++){
		scanf("%d", &array[i]);
	}
}

int sum_evenIndex(int array[], int n){
	int sum=0;
	for (int i=0 ; i<n; i++){
		if(i%2==0){
			sum=sum+array[i];
		}
		
	}
	return sum;
}
int main(){
	int n;
	printf("Enter The Size Of Array:");
	scanf("%d",&n);
	int array[n];
	input(array,n);
	int sum= sum_evenIndex(array,n);
	printf("Sum of Numbers On Even Index: %d",sum);
}