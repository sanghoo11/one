#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	/*char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;
	printf("%c %d \n", ch1, ch1);
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);
	*/
	int x, y;
	int a, b;
	int s;
	printf("ÁÂ »ó´ÜÀÇ X, Y ÁÂÇ¥:  ");
	scanf("%d %d", &x,&y);
	printf("¿ì »ó´ÜÀÇ X, Y ÁÂÇ¥:  ");
	scanf("%d %d", &a, &b);
	s = (x - a) * (y - b);
	printf("%d", s);
	return 0;
}