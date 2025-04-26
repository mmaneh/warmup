#include <stdio.h>
int main() {
	const int n = 5;
	int arr1[n];
	int arr2[n];
	

	printf("elements: ");

	for (int i = 0; i < n; ++i){
			scanf("%d", &arr1[i]);
	}

	printf("elements: ");
	for (int i = 0; i < n; ++i){
		scanf("%d", &arr2[i]);
	}
	const int num = 10;
	int j = 0;
	int k = 0;
	for (int i = 0; i < 10; ++i){
		if (i < n){
		printf("%d", arr1[j]);
		j++;
	}else{
		printf("%d", arr2[k]);
		k++;
	}

}
}	






