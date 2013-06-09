#include <stdio.h>
int main(){
	int numDays, surgCost, medCost, MiscCost, dailyCost, insDeductable, totalCost;
    printf("Hospital Bill Calculator\n");
    printf("please input number of days stayed in the hospital: ");
    scanf("%d", &numDays);
    printf("please input cost of surgery: ");
    scanf("%d", &surgCost);
    printf("please input cost of medication: ");
    scanf("%d", &medCost);
    printf("please input miscellaneous fees: ");
    scanf("%d", &MiscCost);
    printf("please input daily rate of stay in the hospital: ");
    scanf("%d", &dailyCost);
    printf("please input cost deductable from insurance: ");
    scanf("%d", &insDeductable);
    totalCost = (numDays * dailyCost) + surgCost + medCost + MiscCost;
    printf("Total cost less insurance: %d\n", totalCost - insDeductable);
    printf("Total cost less insurance and midication: %d\n", (totalCost - insDeductable) - medCost);
    return 0;
}