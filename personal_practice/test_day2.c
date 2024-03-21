#define _CRT_SECURE_NO_WARNINGS
//// 007
//#include <stdio.h>
//
//int main() {
//
//	//// 1. 字面常量
//	//30;
//	//3.14;
//	//'w';  // 字符
//	//"abc";  // 字符串
//
//	//// 2. const修饰的常变量
//	//const int a = 10;  // const 修饰的 a 本质是变量，但不能被修改
//	//// a = 20;  // 不能再修改，编译器会报错
//	//printf("%d\n", a);
//
//	//const int n = 10;
//	//int arr[n] = { 0 };  // 依然不能使用
//
//	return 0;
//}


//// 3. #define定义的常量标识符
//#define MAX 100
//#define STR "abcdef"
//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	
//	return 0;
//}


//// 4. 枚举常量
//#include <stdio.h>
//
//enum Color
//{
//	// 枚举常量
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	// RGB
//	enum Color c = RED;
//	enum Color d = GREEN;
//	enum Color e = BLUE;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char ch = 'w';
//	char arr1[] = "abcdef";
//	char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//	char arr3[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
//
//	printf("arr1: %s\n", arr1);
//	printf("arr2: %s\n", arr2);
//	printf("arr3: %s\n", arr3);
//	printf("Len of arr1: %zd\n", strlen(arr1));  // 长度不包含 \0，看 \0 之前出现多少个字符
//	printf("Len of arr2: %zd\n", strlen(arr2));
//
//	return 0;
//}


//// 转义字符
//#include <stdio.h>
//
//int main()
//{
//	// 三字母词，早期设备 ??) --> ]
//	printf("%s\n", "(Are you ok\?\?)");
//	printf("%c\n", '\'');
//	printf("abc\"def\n");
//	printf("abc\\0def\n");
//	printf("abc\adef\n");
//	printf("abc\tdef\n");
//	printf("a: \130 \n");
//	printf("a: \628 \n");
//	printf("c: \x7a \n");
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	/*
//	int a = 10;
//	int b = 20;
//	*/
//
//	// 创建指针变量p，并赋值为NULL
//	int* p = NULL;
//
//	return 0;
//}