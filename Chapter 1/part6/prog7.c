#include <stdio.h>
int main(){
	int a, b,c;
    printf("please input a number between 1 - 10: ");
    scanf("%d", &a);
    a = a * 9;
    a = (a % 10) + (a / 10);
    a = a + 4;
    printf("%d", a);
    return 0;
}