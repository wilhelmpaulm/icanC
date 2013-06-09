#include <stdio.h>
int main(){
	float p, i, e;
	printf("Compute for power dissipation \n");
	printf("Please input resistor current in amps: ");
	scanf("%f", &i);
	printf("Please input resistor voltage in volts: ");
	scanf("%f", &e);
	p = i*e;
	printf("Power dissipation is: %f watts\n", p);
	return 0;
}