#include <stdio.h>
void foo (float far){
float cel = 0;
cel = (far - 32) / 1.8;
printf("%f", cel);
}
int main () {
	float far = 0;
	printf("Enter farenheit: ");
	scanf("%f", &far);

	foo(far);
	

}
