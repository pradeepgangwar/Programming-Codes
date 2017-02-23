//this is problem 7 of lab2

#include <stdio.h>
int main() {
	int i, j, k, n=5;
	for (i=1; i<=5; ++i) {
		for (j=1; j<=5; ++j) {
			for (k=1; k<=5; ++k) {
				printf("%d%d%d ", i, j, k);
			}
		}
	printf("\n");
	}
	return 0;
}
