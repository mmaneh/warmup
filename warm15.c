#include <stdio.h>
int  power (int n, int exp){
	int res = 1;
	for (int i = 1; i <= exp; ++i){
		res*=n;
	}
	return res;
}
int main () {
	int n = 0;
	printf("n: ");
	scanf("%d", &n);

	int exp = 0;
	printf("exp :");
	scanf("%d", &exp);

	int res = power(n, exp);
	printf("%d", res);
}
