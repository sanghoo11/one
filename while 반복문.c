#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main(void)
//{

	//1번 방법 1
	/*int total = 0;
	int num = 1;
	while (num != 0)
	{
		num = 0;
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total += num;
	}
	printf("합계: %d \n", total);*/
	//1번 방법 2
	/*int total = 0;
	int num;
	printf("처음 정수 입력: ");
	scanf("%d", &num);
	while (num != 0)
	{
		num = 0;
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total += num;
	}
	printf("합계: %d \n", total);
	return 0;
	//3번
	/*int cur = 2;
	int is = 0;
	do
	{
		is = 1;
		do
		{
			printf("%d x %d = %d \n", cur, is, cur * is);
			is++;
		} while (is < 10);
		cur++;
	} while (cur < 10);*/
	/*2번
	int num1,total;
	num1 = 0;
	total = 0;
	do
	{
		total = total + num1;
		num1=num1 +2;
	} while (num1 <= 100);
	printf("합계:%d \n", total);*/

	/*int total = 0, num = 0;
	do
	{
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total += num;
	} while (num != 0);
	printf("합계: %d \n", total);*/
	/*
	int number1, number2;
	number1 = 0;
	while (number1 < 5)
	{
		number2 = 0;
		while (number2 <number1)
		{
			printf("o");
			number2++;
		}
		printf("* \n");
		number1++;
	}
	int number, num1, num2;
	number = 0;
	num2 = 0;
	while (number < 5)
	{
		printf("정수 입력:");
		scanf("%d", &num1);
		num2 = num2 + num1;
		number++;
	}
	printf("%d \n", num2);
	int cur = 2;
	int is = 0;
	while (cur < 10)
	{
		is = 1;
		while (is < 10)
		{
			printf("%d x %d=%d \n", cur, is, cur * is);
			is++;
		}
		cur++;
	}
	int number, sum, limit, new;
	double average;
	sum = 0;
	number = 1;
	limit = 0;
	new = 0;
	printf("정수 개수 입력:");
	scanf("%d", &number);
	while (number > limit)
	{
		printf("입력받은 정수: ");
		scanf("%d", &new);
		sum = sum + new;
		limit++;
	}
	average = sum / number;
	printf("%f \n", average);*/
	/*int num, dan;
	num = 9;
	printf("숫자 입력: ");
	scanf("%d", &dan);
	while (num != 0)
	{
		printf("%d x %d = %d \n", dan, num,dan*num);
		num--;
	}*/

	/*int num1 = 1, num2;
	num2 = 0;
	while (num1 != 0) {
		printf("정수 입력: ");
		scanf("%d", &num1);
		num2 = num2 + num1;
		printf("%d \n", num2);
	}
	/*int num1, num2, num3;
	num2 = 0;
	num3 = 3;
	printf("양의 정수 입력: ");
	scanf("%d", &num1);
	while (num1 > num2)
	{
		printf("%d \n", num3);
		num2++;
		num3+= 3;
	int num, or ;
	or = 0;
	printf("양의 정수 입력: ");
	scanf("%d", &num);
	while (num > or)
	{
		printf("HELLOWORLD ");
		or ++;
	int dan = 0, num = 1;
	printf("몇 단? ");
	scanf("%d", &dan);
	while (num < 10)
	{
		printf("%d x %d=%d \n", dan, num, dan * num);
		num++;
	}*/
// }