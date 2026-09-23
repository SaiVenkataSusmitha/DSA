#include <stdio.h> 
int fibonacci(int n) { 
	if (n <= 1) return n; 
		return fibonacci(n- 1) + fibonacci(n- 2); 
	} 
int main() { 
	int n = 10, i; 
	printf("First %d Fibonacci numbers: ", n); 
	for (i = 0; i < n; i++) 
		printf("%d ", fibonacci(i)); 
		printf("\n"); // Output: 0 1 1 2 3 5 8 13 21 34 
		return 0;
	}
