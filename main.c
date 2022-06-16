#include <stdio.h>
#include <stdlib.h>

#include "math_utils.h"
#include "math_utils.c"

int main(){ 
	
	int x, y;
	
	printf("podaj pierwsza liczbe: ");
	scanf("%d", &x);
	printf("podaj druga liczbe: ");
	scanf("%d", &y);
	
	printf("NWD wynosi = %d \n", gcd(x, y));
	printf("NWW wynosi = %d", lcm(x, y));

return 0;	
}