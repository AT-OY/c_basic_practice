#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

//// 040
//void swap(int* px, int* py) {
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//
//int add(int x, int y) {
//	return x + y;
//}
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("before exchange: a = %d, b = %d\n", a, b);
//	swap(&a, &b);
//	printf("after exchange: a = %d, b = %d\n", a, b);
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//int isPrime(int a) {
//	int remain = 0;
//	int i = 0;
//	for (i = 2; i <= sqrt(a); i++) {
//		remain = a % i;
//		if (remain == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	if (isPrime(a)) {
//		printf("%d is a primenumber\n", a);
//	}
//	else {
//		printf("%d is not a primenumber\n", a);
//	}
//
//	return 0;
//}



//// 042
//int is_leap_year(int year) {
//	if ((year % 4 == 0) && (year % 100 != 0)) {
//		return 1;
//	}
//	if(year % 400 == 0) {
//		return 1;
//	}
//	return 0;
//}


//int binary_search(int arr[], int k, int sz) {  // arr实际上是指针变量
//	int left = 0;
//	int right = sz - 1;
//	int mid = left + (right - left) / 2;
//	
//	while (left <= right) {
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}



//// 043
//int main() {
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	printf("%d", strlen("abcdef"));
//
//	return 0;
//}
