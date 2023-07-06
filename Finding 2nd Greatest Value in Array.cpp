#include<stdio.h>
void inputArray(int a[], int size){
	for(int i=0 ; i<size ; i++){
		scanf("%d",&a[i]);
	}
}

int Secondgreatest(int a[] , int size){
	int greatest = a[0];
	int secondgrt = a[0];
	for(int i=1 ; i<size ; i++){
		if(a[i]>greatest){
			secondgrt=greatest;
			greatest=a[i];
		}
		else if (a[i]<greatest && a[i]>secondgrt )
			secondgrt=a[i];
	
		}
		
		return secondgrt; 
}

int main(){
	int size;
	int a[size];
	printf("Enter Array Elements.......");
	scanf("%d",&size);
	inputArray(a,size);
	int SecondGreatest = Secondgreatest(a,size);
	printf("Second Greatest Number : %d",SecondGreatest);
	
}