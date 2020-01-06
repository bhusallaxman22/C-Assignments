#include <stdio.h>
int main(){
	int mm, cm, km, m;
	printf("enter lenght in mm");
	scanf("%d", &mm);
	cm=mm/10;
	m=cm/100;
	km=cm/1000;
	printf("the mm in mm is %d \n", mm);
	printf("the mm in cm is %d \n", cm);
	printf("the mm in m is %d \n", m);
	printf("the mm in km is %d \n", km);

}
