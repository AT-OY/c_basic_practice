#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//// 044
//int add(int x, int y) {
//	return x + y;
//}
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", & a, &b);
//	int sum = add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}



//// 046
//void print(unsigned int n) {
//	if (n != 0) {
//		print(n / 10);
//		printf("%u ", n % 10);
//	}
//}
//
//int main() {
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}


//int my_strlen(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main() {
//
//	int len = my_strlen("abcdef");
//	printf("%d", len);
//	return 0;
//}


//int my_strlen(char* str) {
//	if (*str != '\0') {
//		return 1 + my_strlen(str + 1);
//	}
//	else {
//		return 0;
//	}
//}
//
//int main() {
//	int len = my_strlen("abcdef");
//	printf("%d", len);
//	
//	return 0;
//}



//// 048
//int fac(int n) {
//	if (n <= 1) {
//		return 1;
//	}
//	else { 
//		return n * fac(n - 1);
//	}
//}
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


//int fib(int n) {  // 大量重复计算
//	if (n <= 2) {
//		return 1;
//	}
//	else {
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//unsigned int fib(int n) {
//	unsigned int a = 1;
//	unsigned int b = 1;
//	unsigned int c = 0;
//	int i = 0;
//	if (n <= 2) {
//		return 1;
//	}
//	else {
//		for (i = 3; i <= n; i++) {
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("feb = %u\n", ret);
//
//	return 0;
//}
