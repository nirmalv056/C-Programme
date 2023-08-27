#include<stdio.h>

int main(){
	int i, num;
	
	printf("Enter the number you want to multiplication table of: \n");
	scanf("%d", &num);
	
	printf("Multiplication table of %d is as follows: \n", num);
	
	for(i=1;i<=10;i++){
		printf("%d*%d=%d \n",num,i,num*i);
	}
	return 0;
}
