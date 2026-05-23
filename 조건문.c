#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	//3번
	int korean, english, math;
	double average;
	printf("국어 점수 입력: ");
	scanf("%d", &korean);
	printf("영어 점수 입력: ");
	scanf("%d", &english);
	printf("수학 점수 입력: ");
	scanf("%d", &math);
	average = (korean + english + math) / 3;
	if (average >= 90)
		printf("A");
	else if (average >= 80)
		printf("B");
	else if (average >= 70)
		printf("C");
	else if (average >= 50)
		printf("D");
	else
		printf("F");
	//1번
	/*for (int num = 1; num < 100; num++)
	{
		if (num % 7 == 0 || num % 9 == 0)
		printf("%d \n", num);
	}*/
	return 0;
}