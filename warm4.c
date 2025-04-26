#include <stdio.h>
int main() {
	const int n = 5;
	char arr[n];
	printf("elements");
	for (int i = 0; i < n; ++i){
		scanf(" %c", &arr[i]);
	}
	
	for(int i = 0; i < n; ++i){
		if (arr[i] >= '0' && arr[i] <= '9'){
			printf ("%c", arr[i]);
		}
	}
}
