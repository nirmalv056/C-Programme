#include<stdio.h>

int main(){
	int age,marks;
	printf("Enter your age: ");
	scanf("%d", &age);
	
	printf("Enter your marks: ");
	scanf("%d", &marks);
	
	switch(age){
		case 1:
			printf("Age is 12");
			switch(marks){
				case 50:
					printf("Your marks are 50");
					break;
					
					default:
						printf("your marks are not 50");
						break;

			}
						
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
