#include<stdio.h>

int main(){
	char a='3';
	char* ptra=&a;
	printf("%d \n", ptra);
	ptra--;
	printf("%d \n", ptra);
	printf("%d", ptra-2);
	
	getch();
}
