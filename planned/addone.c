#include <stdio.h>

void addone32(int * x, int n) {
	for (int i=0; i < n; i++) {
		x[i] += 1;
	}
}

void addone64(long * x, long n) {
	for (int i=0; i < n; i++) {
		x[i] += 1;
	}
}


int main() {
	printf("Hello, C addone\n");
    return 0;
}
