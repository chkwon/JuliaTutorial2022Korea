#include <stdio.h>

int fib(int n) {
	return n < 2 ? n : fib(n-1) + fib(n-2);
}

int main() {
	printf("Hello, C Fib\n");
    return 0;
}
