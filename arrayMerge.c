#include <stdio.h>
int a[1000000];
int b[1000000];
int c[1000000];

void main() {
	int sizeOfarr1, sizeOfarr2;

	scanf_s("%d %d", &sizeOfarr1, &sizeOfarr2);

	//Suppose that array sorted. 
	for (int i = 0; i < sizeOfarr1; i++) scanf_s("%d", &a[i]);
	for (int i = 0; i < sizeOfarr2; i++) scanf_s("%d", &b[i]);

	int i = 0;
	int j = 0;
	int k = 0;

	while (i < sizeOfarr1 && j < sizeOfarr2) {
		if (a[i] <= b[j]) {
			c[k] = a[i];
			k++; i++;
		}
		else {
			c[k] = b[j];
			k++; j++;
		}
	}

	while (i < sizeOfarr1) {
		c[k] = a[i];
		k++; i++;
	}

	while (j < sizeOfarr2) {
		c[k] = b[j];
		k++; j++;
	}

	for (int i = 0; i < k; i++) {
		printf("%d", c[i]);
	}

	printf("\n");
}