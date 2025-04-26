#include <stdio.h>
int main() {
	const int n = 5;
	int arr1[n];
	int arr2[n];
	int flag = 1;

	printf("elements: ");

	for (int i = 0; i < n; ++i){
			scanf("%d", &arr1[i]);
	}

	printf("elements: ");
	for (int i = 0; i < n; ++i){
			scanf("%d", &arr2[i]);
	}

	for (int i = 0; i < n; ++i){
			if (arr1[i] != arr2[i]){
				flag = 0;
				printf("not the same");
				break;
			}
	}

	if(flag) printf("same");
}
	


