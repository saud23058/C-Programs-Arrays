#include<stdio.h>
void Array(int size , int array[]){
	for(int i=0; i<size ; i++){
		scanf("%d",&array[i]);
	}
}
int findgreatestnumber(int array[], int size){
	int greatest= array[0];
	
	for(int i=1; i < size; i++){
	    if(array[i] > greatest){
	    greatest = array[i] ;
		}	
	}
	return greatest;
}

int findgreatestindex(int array[], int size) {
    int greatest = array[0];
    int index = 0;
    
    for (int i = 1; i < size; i++) {
        if (array[i] > greatest) {
            greatest = array[i];
            index = i;
        }
    }
    
    return index;
}

int main()
{
	int elements;
		printf("Enter  Numbers of Elements.....");
		scanf("%d",&elements);
	int array[elements];
    Array(elements, array);
    int greatest=findgreatestnumber(array,elements);
    printf("Greatest Number is : %d",greatest);
    int index=findgreatestindex(array, elements);
    printf("\nGreatest Index is : %d",index);
}