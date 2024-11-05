//C function to check if a number is even or not
#include<stdio.h>

// Function to check if a number is even or odd
void checkEvenOdd(int number) {
     if (number%2 == 0){
		 printf("The number is even\n");
    }else{
       printf("The number is odd\n");
    }	 
}
int main() {
	int num;
	
	//Prompt the user for input
	printf("Enter a number:");
	scanf("%d",&num);
	//Call the function to check whether the number is even or odd
	checkEvenOdd(num);
	
	return 0;
}