#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

////037
//int main() {
//	char msg[] = "Hello World!";
//	char display[] = "############";
//	int left = -1;
//	int right = strlen(display);
//	do
//	{
//		left++;
//		right--;
//		system("cls");  // system是一个库函数，执行cmd命令
//		printf("%s\n", display);
//		Sleep(1000);
//		display[left] = msg[left];
//		display[right] = msg[right];
//	} while (left <= right);
//
//	return 0;
//}



//// 039
//// 电脑产生一个随机数（0-100），猜数字，每猜一次返回是否正确
//void menu()
//{
//	printf("*********************\n");
//	printf("*****  1. Play  *****\n");
//	printf("*****  0. Exit  *****\n");
//	printf("*********************\n");
//}
//
//void game()
//{
//	int guess = 0;
//	int target = rand() % 101;
//	while (1)
//	{
//		printf("Guess:>> ");
//		scanf("%d", &guess);
//		if (guess < target) printf("Try Bigger!\n");
//		else if (guess > target) printf("Try Smaller!\n");
//		else
//		{
//			printf("YOU GET IT, it's %d\n", target);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));  // 强制类型转换
//	int input = 1;
//
//	menu();
//	while (input != 0)
//	{
//		printf("Input:>> ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("Game Finish, Try Again?\n");
//			menu();
//			break;
//		case 0:
//			printf("Exit Game!!!\n");
//			break;
//		default:
//			printf("Unvalid Input\n");
//			break;
//		}
//	}
//	return 0;
//}


//int main()
//{
//again:
//	printf("HeHe\n");
//	printf("HeHe\n");
//	goto again;
//
//	return 0;
//}


//void swap(int* px, int* py)
//{
//	int c = *px;
//	*px = *py;
//	*py = c;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("Before Exchange: a = %d, b = %d\n", a, b);
//	swap(&a, &b);
//	printf("After Exchange: a = %d, b = %d\n", a, b);
//
//	return 0;
//}