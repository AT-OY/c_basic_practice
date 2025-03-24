#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//// 031
//int main()
//{
//	int asc_arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	int i = 0;
//	int sz = sizeof(asc_arr) / sizeof(asc_arr[0]);
//	while (i < sz)
//	{
//		printf("%c", asc_arr[i]);
//		i++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//
//	return 0;
//}


//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//}


//int main()
//{
//	double r = 0.0f;
//	double v = 0.0f;
//	double pi = 3.1415926;
//	scanf("%lf", &r);
//	v = 4 / 3.0 * pi * r * r * r;
//	printf("%.3lf\n", v);
//
//	return 0;
//}



//// 033
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i += 2)
//	{
//		if (i == 5) continue;
//		printf("%d\n", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	int total = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("I = %d, J = %d\n", i, j);
//			total++;
//		}
//	}
//	printf("Total Loop: %d", total);
//
//	return 0;
//}



//// 034
//int main()
//{
//	int i = 1;
//	do
//	{	
//		i++;
//		if (i == 5) continue;
//		printf("%d ", i);
//	}
//	while (i <= 10);
//
//	return 0;
//}



//// 036
//int main()
//{
//	int n = 1;
//	int temp = 0;
//	int result = 0;
//	int i = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		temp = 1;
//		for (i = n; i > 0; i--)
//		{
//			temp *= i;
//		}
//		result += temp;
//	}
//	printf("%d", result);
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,12,13,14,15 };
//	int k = 11;
//
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//
//	while (left <= right)
//	{
//		mid = (right + left) / 2;
//		if (arr[mid] == k)
//		{
//			printf("Exist,Index = %d\n", mid);
//			break;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//	if (left > right) printf("%d dosen't exist.\n", k);
//}
