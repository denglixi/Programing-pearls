#define _CRT_SECURE_NO_WARNINGS
#include <algorithm> 

int __cdecl intcomp(const void *x, const void *y) {
	return *(int *)x - *(int *)y;
}
int a[1000000];
int main_1() {
	int i, n = 0;
	while (scanf("%d", &a[n]) != EOF) {
		n++;
	}
	qsort(a, n, sizeof(int), intcomp);
	for (i = 0; i < n; ++i) {
		printf("%d ", a[i]);
	}
	return 0;
}