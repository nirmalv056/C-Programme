#include<stdio.h>

int main(){
	int marks[2][4]={{45,23,36,62},{12,32,26,24}};
	
	for(int i=0;i<2;i++){
		
		for(int j=0;j<4;j++){
			printf("%d",marks[i][j]);
		}
		printf("\n");
	}
}
