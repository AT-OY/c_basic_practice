#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//// 025
//int main() {
//	int age = 18;
//	if (age >= 18)
//		printf("������\n");
//	else {
//		printf("δ����\n");
//		printf("��������\n");
//	}
//
//	return 0;
//}


//int main() {
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age < 18)
//		printf("������\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age < 100)
//		printf("׳��\n");
//	else
//		printf("������\n");
//
//	return 0;
//}


//int main() {
//	int n = 0;
//	while (n <= 100) {
//		if (n % 2 == 1)
//			printf("%d is an odd number\n", n);
//		n++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		break;
//	}
//
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("Weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("Weekend\n");
//		break;
//	default:
//		break;
//	}
//}



//// 027
//int main()
//{
//	int n = 0;
//	while (n <= 10)
//	{
//		n++;
//		if (n == 3)
//			continue;
//		if (n == 8)
//			break;
//		printf("%d\n", n);
//	}
// 
//	return 0;
//}



// 029
//int main()
//{
//	int ch = getchar();
//	printf("%c, %d\n", ch, ch);
//	putchar(ch);
//
//	return 0;
//}



//// 030
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:> ");
//	scanf("%s", password);  // ���鱾����ǵ�ַ��������ȡ��ַ
//	// ��������
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�����루Y/N��:> ");
//	int ret = getchar();
//	if ('Y' == ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}
