


#include <stdio.h>

void main(){

	int a=10,b=3;
	a*=(b-1);
	b=(a>15)?(a+1):(a-1);
	printf("a=%d b=%d\n", a, b);

}
