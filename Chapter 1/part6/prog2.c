#include <stdio.h>
int main(){
	int input, answer;
	printf("Please input the number of years: ");
	scanf("%d", &input);
	answer = input * 365 * 24;
	printf("The the number of hours in %d years is: %d\n", input, answer);
	return 0;
}