#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//// 049
//void sort(int* a, int* b) {
//	int tmp = 0;
//	if (*a < *b) {
//		tmp = *a;
//		*a = *b;
//		*b = tmp;
//	}
//}
//
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	sort(&a, &b);
//	sort(&a, &c);
//	sort(&b, &c);
//	printf("%d %d %d", a, b, c);
//	return 0;
//}



//// 051
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//
//	return 0;
//}


//int main() {
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d * %d = %-2d ", i, j, i * j);  // %-2d 2Î»×ó¶ÔÆë
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//// 053
//void test(int arr[]) {
//	arr[0] = 3;
//	arr[1] = 4;
//}
//
//int main() {
//	int arr[2] = { 0 };
//	test(arr);
//
//	return 0;
//}
