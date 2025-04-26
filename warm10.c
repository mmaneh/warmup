#include <stdio.h>
int fibo (int n){
	if (n == 0 || n == 1){
		return n;
	}
	return fibo(n - 1) + fibo(n - 2);
}
int main () {
	int n = 0;
	printf("n: ");
	scanf("%d", &n);
	int res = fibo(n);
	printf("%d", res);
}

