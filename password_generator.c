#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
	srand(time(NULL));
	char c[255] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'q', 'w', 'e', 'r', 't', 'y', 'u', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'i', 'z', 'x', 'c', 'v', 'b', 'n', 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'Z', 'X', 'C', 'V', 'B', 'N', 'M'};
	int a;
	printf("Please enter the password length: ");
	scanf("%i", &a);
	int i;
	for(i=0; i<a; i++) {
		int j = rand() % 61;
		printf("%c", c[j]);
	}
	printf("\n");
	return 0;
}
