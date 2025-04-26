#include <stdio.h>
int main() {
	const int n = 5;
	int arr[n];
	
	float avg = 0;

	printf("Enter arr elements: ");
	
	for (int i = 0; i < n; ++i){
		scanf("%d", &arr[i]);
	}
	
	for (int i = 0; i < n; ++i){
		avg += arr[i];
	}
	
	avg = avg / n;
	printf("The average is: %f", avg);
	
}
