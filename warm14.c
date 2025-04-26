#include <stdio.h>
int sum (int n){
	int res = 0;
	while(n){
		 res += n % 10;
		n /= 10;
	}
return res;
}
int main () {
	int n = 0;
	printf("n: ");
	scanf("%d", &n);
	int res = sum(n);
	printf("%d", res);
}
