#include<stdio.h>

int main(){
	int age;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
//	printf("You have entered %d as your age\n", age);
	
	if(age>=18){
		printf("You can vote!");
	}
	else{
		printf("You can't vote!");
	}
}
