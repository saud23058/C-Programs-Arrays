#include<stdio.h>
void input(int array[] , int size){
	for(int i=0 ; i<size; i++){
		scanf("%d",&array[i]);
	}
}


int finduserEnteredNum(int array[] , int size, int n){
	int index=0;
	
	for(int i=1; i<size ; i++){
	   if(n==array[i]){
	   index=i;	
	   printf("%d Is  Found at Index  %d",n,index);
	   break;
	  }
	 else
	 {
	 	printf("%d is Not Found",n);
	 	break;
	 }
    }
    

}



int main()
{
	int array[10];
	int n;
		printf("Enter A Number :");
	scanf("%d",&n);
	printf("Now Enter Random Numbers :");
	input(array, 10);

	int x= finduserEnteredNum(array,10,n);
	
}
//#include<stdio.h>
//
//void input(int array[], int size) {
//    printf("Enter %d numbers:\n", size);
//    for (int i = 0; i < size; i++) {
//        scanf("%d", &array[i]);
//    }
//}
//
//int finduserEnteredNum(int array[], int size, int n) {
//    int index = -1;
//    for (int i = 0; i < size; i++) {
//        if (n == array[i]) {
//            index = i;
//            break; // Exit the loop once the number is found
//        }
//    }
//    return index;
//}
//
//int main() {
//    int array[10];
//    int n;
//    
//    printf("Enter a number: ");
//    scanf("%d", &n);
//    
//    input(array, 10);
//    
//    int index = finduserEnteredNum(array, 10, n);
//    
//    if (index != -1) {
//        printf("%d is found at index %d\n", n, index);
//    } else {
//        printf("%d is not found in the array\n", n);
//    }
//    
//    return 0;
//}
