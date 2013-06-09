#include <stdio.h>
int main(){
	float input, answer;
	printf("How fast are you going in miles per hour? ");
	scanf("%f", &input);
	printf("You were going %f feet per second\n", input*1.466666);
	return 0;
}