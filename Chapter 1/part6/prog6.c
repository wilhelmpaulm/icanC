#include <stdio.h>
int main(){
	float i,v,r1,r2,r3;
	printf("Compute for total current \n");
	printf("Please input voltage source in volts: ");
	scanf("%f", &v);
	printf("Please input first resistor (in ohms): ");
	scanf("%f", &r1);
	printf("Please input second resistor (in ohms): ");
	scanf("%f", &r2);
	printf("Please input third resistor (in ohms): ");
	scanf("%f", &r3);
	i = v/(r1+r2+r3);
	printf("Power total current is: %f amps\n", i);
	return 0;
}