#define _CRT_SECURE_NO_WARNINGS
//// 007
//#include <stdio.h>
//
//int main() {
//
//	//// 1. ���泣��
//	//30;
//	//3.14;
//	//'w';  // �ַ�
//	//"abc";  // �ַ���
//
//	//// 2. const���εĳ�����
//	//const int a = 10;  // const ���ε� a �����Ǳ����������ܱ��޸�
//	//// a = 20;  // �������޸ģ��������ᱨ��
//	//printf("%d\n", a);
//
//	//const int n = 10;
//	//int arr[n] = { 0 };  // ��Ȼ����ʹ��
//
//	return 0;
//}


//// 3. #define����ĳ�����ʶ��
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


//// 4. ö�ٳ���
//#include <stdio.h>
//
//enum Color
//{
//	// ö�ٳ���
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
//	printf("Len of arr1: %zd\n", strlen(arr1));  // ���Ȳ����� \0���� \0 ֮ǰ���ֶ��ٸ��ַ�
//	printf("Len of arr2: %zd\n", strlen(arr2));
//
//	return 0;
//}


//// ת���ַ�
//#include <stdio.h>
//
//int main()
//{
//	// ����ĸ�ʣ������豸 ??) --> ]
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
//	// ����ָ�����p������ֵΪNULL
//	int* p = NULL;
//
//	return 0;
//}