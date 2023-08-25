#include<stdio.h>
#include<conio.h>

int main(){
	int age;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
//	printf("You have entered %d as your age\n", age);
	
	if(age>=18){
		printf("You can vote!");
	}
	else if(age>=10){
		printf("You can vote for kids");
	}
	else if(age>=3){
		printf("You are a baby");
	}
	else{
		printf("You can't vote!");
	}
}
