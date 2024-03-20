//// 002
//#include <stdio.h>
//
//int main()
//{
//    printf("Hello, World!\n");
//
//    return 0;
//}



//// 003
//#include <stdio.h>
//
//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int age = 20;
//	float price = 66.6;
//	
//	return 0;
//}



//// 005
//int main()
//{
//	short age = 20;
//	int high = 180;
//	float weight = 88.5;
//
//	return 0;
//}


//#include <stdio.h>
//
//int global = 2019;  // 全局变量
//int main()
//{
//    int local = 2018;
//    printf("global = %d\n", global);
//    int global = 2020;
//    printf("global = %d\n", global);
//    printf("local = %d\n", local);
//
//    return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int num1 = 0;  // 初始化，没有初始化回存随机值，好习惯
//	int num2 = 0;
//
//	// 输入两个整数
//	// scanf 是一个输入函数
//	scanf("%d %d", &num1, &num2);  // &表示取地址
//
//	// 求和
//	int sum = num1 + num2;
//
//	//输出
//	printf("sum = %d", sum);
//
//	return 0;
//}



//// 006
//#include <stdio.h>
//
//int a = 100;
//
//void test()
//{
//	printf("test --> %d\n", a);
//}
//
//int main()
//{
//	test();
//	{
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	// printf("a = %d", a);  // 如果没有全局a，报错
//
//	return 0;
//}
