#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//// 025
//int main() {
//	int age = 18;
//	if (age >= 18)
//		printf("成年了\n");
//	else {
//		printf("未成年\n");
//		printf("不能饮酒\n");
//	}
//
//	return 0;
//}


//int main() {
//	int age = 0;
//	scanf("%d", &age);
//
//	if (age < 18)
//		printf("青少年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age < 100)
//		printf("壮年\n");
//	else
//		printf("老寿星\n");
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
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
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
//	printf("请输入密码:> ");
//	scanf("%s", password);  // 数组本身就是地址，不用再取地址
//	// 清理缓冲区
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码（Y/N）:> ");
//	int ret = getchar();
//	if ('Y' == ret)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//}
