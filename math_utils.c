#include "math_utils.h"

int gcd(int x, int y) {
	
	int t;
	
	while(x!=0){
		t = x;
		x = y%x;
		y = t;
	}
       
    return y;
}


int lcm(int x, int y){
	
	return (x*y)/gcd(x, y);
}