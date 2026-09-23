// Prefix sum of a list X[N] is defined as the sequence s of n elements, with sk = x1 + …+xk. For x = [1, 4, 3, 5, 6, 7, 0, 1
#include <stdio.h> 
void prefix_sum(int x[], int s[], int n) { 
	s[0] = x[0]; 
	for (int k = 1; k < n; k++) 
		s[k] = s[k-1] + x[k]; 
	} 
int main() { 
	int x[] = {1, 4, 3, 5, 6, 7, 0, 1}; 
	int n = sizeof(x) / sizeof(x[0]); 
	int s[n]; prefix_sum(x, s, n); 
	printf("Prefixsumarray: "); 
	for (int k = 0; k < n; k++) 
		printf("%d ", s[k]); printf("\n"); //Output:1581319262627 
		return 0; 
	}
