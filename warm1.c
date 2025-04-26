#include <stdio.h>
int main() {
const int n = 5;
int arr1[n];
int arr2[n];
printf("Enter tyhe elements for arr1");
for(int i = 0; i < n; ++i){
	scanf("%d", &arr1[i]);
}

printf("Enter elements for arr2");
for (int i = 0; i < n; ++i){
	scanf("%d", &arr2[i]);
}

for(int i = 0; i < n; ++i){
	int product = 1;
	printf("product for %dth elements is:\n ", i +1);
	product = arr1[i] * arr2[i];
	printf("%d", product);
}
return 0;
}
