#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n=7;
	int i, j;
	//scanf("%d", &n);
	for (i = 1; i < n; i++) {
		for (j = 1; j <= n - i; j++) {
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			putchar('*');
		}
		putchar('\n');
	}
	for (i = n; i >= 1; i--) {
		for (j = 1; j <= n - i; j++) {
			putchar(' ');
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			putchar('*');
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}
