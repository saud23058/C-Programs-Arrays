#include<stdio.h>
void input(int array[], int n){
	for(int i=0; i<n ; i++){
		scanf("%d", &array[i]);
	}
}

void revers_array(int array[], int n){
	
	for(int i=0; i<n/2 ;i++){
		int firstarray=array[i];
		int secondarray=array[n-i-1];
		array[i]=secondarray;
		array[n-i-1]=firstarray;
	}
	
	
}
int main(){
	int n;
	printf("Enter The Size Of Array:");
	scanf("%d",&n);
	int array[n];
	input(array,n);
	 revers_array(array,n);
	printf("Reversed Array:");
    for (int i=0; i<n; i++){
    	printf("\n%d\n",array[i]);
	}
}