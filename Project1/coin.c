#include<stdio.h>

void main() {
	int n, k; // number of coin and total coin.
	int coin[10] = { 0, };
	int result = 0;

	scanf_s("%d %d", &n, &k);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &coin[i]);
	}

	/* greedy algorithm */
	for (int i = n - 1; i >= 0; i--) {
		result += k / coin[i];
		k %= coin[i];
	}

	printf("\n%d", result);


}