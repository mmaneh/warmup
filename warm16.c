#include <stdio.h>
#include <string.h>
void reverse (char* str){
	int start = 0;
	int end = strlen(str) - 1;
	while(start < end){
		int tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		++start;
		--end;
	}
printf("%s", str);
}
int main() {
	
	char str[] = "hello";
	reverse(str);
	
}
