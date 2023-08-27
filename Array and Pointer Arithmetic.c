#include<stdio.h>

int main(){
	int arr[]={23,53,62,45,78};
	
	printf("Value at position 3 of the array is %d \n", arr[3]);
	printf("The address of first element of the array is %d \n", &arr[0]);
	printf("The address of first element of the array is %d \n", arr + 2);
	printf("The address of first element of the array is %d \n", &arr);
	printf("The address of first element of the array is %d \n", &arr[1]);

	getch();
}
