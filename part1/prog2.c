#include <stdio.h>
int main(){
	int nValue1, nValue2=10;
	printf("Enter a value: ");
	scanf("%d", &nValue1); //4
	printf("Value1 read is: %d\n", nValue1);
	scanf("%d", &nValue1); //5
	printf("Value1 now:%d\n",nValue1);
	printf("Value2 now:%d\n",nValue1+nValue2);
	printf("Value1 now:%d\n",nValue1);
	printf("Value2 now:%d\n",nValue2);
	return 0;
}