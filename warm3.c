#include <stdio.h>
int main() {
	const int n = 5;
	int arr[n];

	int val = 0;
	printf("val: ");
	scanf("%d", &val);

	printf("elements: ");

	for (int i = 0; i < n; ++i){
			scanf("%d", &arr[i]);
	}
	int flag = 0;
	for (int i = 0; i < n; ++i){
		if (arr[i] == val){
			flag = 1;
		}
	}
	if(flag){
		printf("yes");
	}else{
		printf("no");
	}
}



