#include<stdio.h>

int main(){
	int num, index=1;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	do{
		printf("%d \n", index);
		index=index+1;
	}
	while(index<=num);
	
	getch();
}
