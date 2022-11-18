#include<stdio.h>

//Unidade 6 - Programa 16

int main () {
	int i, n = 5, result = 1, a = 2;
	
	for (i = 1 ; i <= n ; i++) {
		result = result * 1;
		
		a = a + i;
	}
	
	printf("result = %d", result);
	printf("\na = %d", a);
	
	return 0;
}
