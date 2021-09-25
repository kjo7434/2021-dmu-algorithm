#include<stdio.h>
#include<stdlib.h>
int intcmp(const void *a, const void *b) {
	return *(int *)a > *(int *)b ? 1 : (*(int *)a < *(int *)b ? -1 : 0);
}
void main() {
	int i, min = 0, n, p[1001] = { 0 }; scanf("%d", &n);
	for (i = 1; i <= n; i++) scanf("%d", &p[i]);
	qsort(p, n + 1, sizeof(int), intcmp);

	for (i = 1; i <= n; i++) {
		p[i] = p[i - 1] + p[i];
		min += p[i];
	}
	printf("%d", min);
}