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


// 4. 枚举常量
#include <stdio.h>

enum Color
{
	// 枚举常量
	RED,
	GREEN,
	BLUE
};

int main()
{
	// RGB
	enum Color c = RED;
	enum Color d = GREEN;
	enum Color e = BLUE;
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", e);

	return 0;
}