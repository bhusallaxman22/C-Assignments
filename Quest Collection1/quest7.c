#include <stdio.h>
int main(){
	int days, month, year;
	printf("enter the number of days");
	scanf("%d", &days);
	month = days/30;
	year = days/365;
	printf("the number of days is %d \n", days);
	printf("the number of months is %d \n", month);
	printf("the number of year is %d \n", year);

}
