#include<stdio.h>

int main(){
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	
	switch(age){
		case 1:
			printf("Age is 12");
			break;
	
		case 2:
			printf("age is 15");
			break;
			
		case 3:
			printf("age is 18");
			break;
			
		default:
			printf("your age is above 20");
			break;
	}
	getch();
}
