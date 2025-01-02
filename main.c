#include <stdio.h>

int main() {
	
	// This creates my data type var and stores memory to it
	int myFavoriteNumber = 0;
	
	printf("Please enter your favorite number\n");
	scanf("%d", &myFavoriteNumber);
	printf("You entered number: %d\n",myFavoriteNumber);
	return 0;
}