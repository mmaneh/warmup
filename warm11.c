#include <stdio.h>
void print (int n){
	for (int i = 1; i < 10; ++i){
		printf("%d * %d = %d\n",i, n, i*n);
	}
	
}
int main () {
	int n = 0;
	printf("n: ");
	scanf("%d", &n);
	print(n);
}

