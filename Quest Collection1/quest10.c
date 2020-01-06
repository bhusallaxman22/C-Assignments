#include <stdio.h>
int main(){
	float mark1, mark2, mark3, mark4, mark5, agg, perct;
	printf("enter marks secured in five subjects respectively");
	scanf("%f %f %f %f %f", &mark1,&mark2,&mark3,&mark4,&mark5);
	agg = (mark1+mark2+mark3+mark4 + mark5)/5;
	perct = (agg*5/500)*100;
	printf("The aggregate mark is %f \n", agg);
	printf("The percentage is %f \n", perct);
}
