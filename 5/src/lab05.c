#include <stdio.h>
int main(void)
{
	//10*n! (1*2*3*4*5) - factorial 5
	const int n = 5;
	const int a = 1*2*3*4*5;
	//10*n! (1*2*3*4*5)
	long long int sum = 1;
	for ( int i = 1; i <= n; i++){
	sum = sum*i;
	}
	
	
	
	 	
	return 0;
}
