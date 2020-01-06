#include <stdio.h>
int main(){
	float temp, fer;
	printf("enter temperature in centigrade");
	scanf("%f", &temp);
	fer = 9/5*temp+32;
	printf("The temperature in Farenheit is: %f \n",fer );
}
