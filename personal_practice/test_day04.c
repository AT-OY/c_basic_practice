#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//// 020
//typedef unsigned int uint;
//
//typedef struct Node {
//	int data;
//	struct Node* next;
//}Node;
//
//int main() {
//	unsigned int num0 = 0;
//	uint num2 = 1;
//	struct Node n;
//	Node n2;
//
//	return 0;
//}


//void test() {
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main() {
//	int i = 0;
//	while (i < 10) {
//		test();
//		printf("%d\n", i++);
//	}
//	return 0;
//}



//// 021
//#define NUM 100
//int main() {
//	printf("%d\n", NUM);
//	int n = NUM;
//	int arr[NUM] = { 0 };
//
//	return 0;
//}


//#define ADD(x, y) ((x) + (y))
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}



//// 023
//int main() {
//	int a = 10;  // ���ڴ�����4���ֽڣ��洢10
//	printf("%p\n", &a);  // ȡ��ַ������
//	int* p = &a;  // p����ָ�����
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%p\n", pc);
//
//	return 0;
//}


//int main() {
//	int a = 10;
//	int* p = &a;
//	*p = 20;  // �����ò�����
//	printf("Address: 0x%p	Value: %d\n", p, a);
//
//	return 0;
//}


//int main() {
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(int*));
//
//	return 0;
//}



//// 024
//// ѧ��
//struct Stu {
//	// ��Ա
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* ps) {
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main() {
//	struct Stu s = { "ZhangSan", 20, "Male", "1112223333" };  // ��ʼ��
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//
//	return 0;
//}
