#include <stdio.h>
void factorial (int n){
	int res = 1;
	for (int i = 1; i <= n; ++i){
		res = res * i;
	}
	printf("%d", res);
}
int main () {
	int n = 0;
	printf("n: ");
	scanf("%d", &n);
	factorial(n);
}
