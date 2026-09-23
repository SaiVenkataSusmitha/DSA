#include <stdio.h> 
int binary_search(int arr[], int n, int target) { 
	int low = 0, high = n-1, mid; 
	while (low <= high) { 
		mid = (low + high) / 2; 
		if (arr[mid] == target) 
			return mid; 
		else if (arr[mid] < target) 
		low = mid + 1; 
		else high = mid-1;
	} 
	return-1; 
} 

int main() { 
	int roll_numbers[] = {101, 105, 110, 115, 120, 125, 130, 135, 140, 145}; 
	int n = sizeof(roll_numbers) / sizeof(roll_numbers[0]); 
	int index = binary_search(roll_numbers, n, 130); 
	printf("Rollnumber130foundat index: %d\n", index); //index 6 
	return 0; 
}
