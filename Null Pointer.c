#include<stdio.h>

int main(){
	int a=75;
	int *ptra=&a;
	int *ptr2=NULL;
	printf("The address of pointer to a is %d \n", &ptra);
	printf("The address of a is %d \n", &a);
	printf("The address of a is %d \n", ptra);
	printf("The value of a is %d \n", *ptr2);
	printf("The value of a is %d \n", a);
	getch();
}
