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


// 4. ö�ٳ���
#include <stdio.h>

enum Color
{
	// ö�ٳ���
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