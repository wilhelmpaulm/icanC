#include <stdio.h>
int main(){
	float ER, r1, r2;
	printf("Compute for equivalent resistance of ressitors \n");
	printf("Please input R1: ");
	scanf("%f", &r1);
	printf("Please input R2: ");
	scanf("%f", &r2);
	ER = ((r1*r2)/(r1+r2));
	printf("The equivalent resistance is: %f\n", ER);
	return 0;
}