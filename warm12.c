#include <stdio.h>
void print (int n){
	if (n > 10) {
		return;
	}
	for (int i = 1; i < 10; ++i){
		printf("%d * %d = %d\n",i, n, i*n);
	}
	print(++n);
}
int main () {
	int n = 1;
	print(n);
}

