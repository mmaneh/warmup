#include <stdio.h>
int foo(int n){
	
	int rev = 0;
	while(n){
 	
	rev = rev * 10 + n % 10;
	n /= 10;
	}


return rev;
}

int palyndrome (int n){
	if (foo(n) == n){
		return 0;
	}
return 1;
}

int main() {
	int n = 0;
	printf("n: ");
	scanf("%d", &n);
	int count = 0;

	if (!palyndrome(n)){
		printf ("0");
		return 0;
	}
	while (palyndrome(n)){
	n += foo(n);
	count++;
	}
	
	printf("%d %d", count, n);

}
