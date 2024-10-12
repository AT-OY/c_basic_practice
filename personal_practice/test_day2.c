#define _CRT_SECURE_NO_WARNINGS
//// 007
//#include <stdio.h>
//
//int main()
//{
//	//// 1. 字面常量
//	//30;
//	//3.14;
//	//'w';  // 字符
//	//"abc";  // 字符串
//
//	//// 2. const修饰的常变量
//	//const int a = 10;  // const 修饰的 a 本质是变量，但不能直接修改
//	//// a = 20;  // 不能再修改，编译器会报错
//	//printf("%d\n", a);
//
//	//const int n = 10;
//	//int arr[n] = {0};  // 依然不能使用，指定数组大小只能用常量
//
//	return 0;
//}


//// 3. #define 定义的常量标识符
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
//enum color
//{
//	// 枚举常量
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	// rgb
//	enum color c = RED;
//	enum color d = GREEN;
//	enum color e = BLUE;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//
//	return 0;
//}



//// 008
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char ch = 'w';
//	char arr1[] = "你好 世界";
//	char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//	char arr3[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
//
//	printf("arr1: %s\n", arr1);  // %s 打印字符串
//	printf("arr2: %s\n", arr2);
//	printf("arr3: %s\n", arr3);
//	printf("Len of arr1: %zd\n", strlen(arr1));  // 长度不包含 \0，看 \0 之前出现多少个字符
//	printf("Len of arr2: %zd\n", strlen(arr2));
//	printf("Len of arr3: %zd\n", strlen(arr3));
//
// 	return 0;
//}



//// 009
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
//	printf("你好\n");
//
//	return 0;
//}



//// 010
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



//// 012
//#include <stdio.h>
//
//int main()
//{
//	int input = 0;
//	printf("要好好学习吗？\n");
//	scanf("%d", &input);
//	if (input == 1) {
//		printf("好好学习！\n");
//	}
//	else {
//		printf("卖红薯！\n");
//	}
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int line = 0;
//	while (line < 10) {
//		printf("写代码，已经积累了 %d 行代码\n", line);
//		line++;
//	}
//	
//	return 0;
//}



//// 013
//// 求2个任意整数的和
//#include <stdio.h>
//
//int add(int x, int y) {
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	
//	scanf("%d %d", &n1, &n2);
//	int sum = add(n1, n2);
//	printf("%d", sum);
//	return 0;
//}



//// 014
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
//	int i = 0;
//	while (i < 10) {
//		printf("Index %d: %d\n", i, arr[i]);
//		i++;
//	}
//	
//	return 0;
//}
