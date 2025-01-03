#include <stdio.h>

int main() {
	
	// This creates my data type var and stores memory to it
	int myFavoriteNumber = 0;
	
	printf("Please enter your favorite number\n");
	scanf("%d", &myFavoriteNumber);
	
	// Multiply new number
	int newnum = myFavoriteNumber * 2;
	printf("Your number multipled by 2 is: %d\n",newnum);
	return 0;
	
}