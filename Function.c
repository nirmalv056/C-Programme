//Argument with return value
#include<stdio.h>

int sum(int a, int b);

int main(){
	int a,b,c;
	a=7;
	b=3;
	c=sum(a,b);
	
	printf("The sum is: %d \n",c);
	return 0;
}
int sum(int a, int b){
	return a+b;
}
