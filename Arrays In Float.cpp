#include<stdio.h>
void input(float a[] , float n){
	for(int  i=0; i<n ; i++){
		scanf("%f",&a[i]);
	}
}
void output(float a[], float n){
	for(int i=0 ; i<n ; i++){
		printf("%.2f\t",a[i]);
	}
}
int main()
{

float a[5];
printf("Enter Elements:");
input(a,5);
output(a,5);
}