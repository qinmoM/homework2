#include<stdio.h>

count = 0;

void act1(char a, char b)
{
	printf("%c->%c\n", a, b);
	count++;
}

void act2(int n, char sta, char tur, char end)
{
	if (n >= 1)
	{
		act2(n - 1, sta, end, tur);
		act1(sta, end);
		act2(n - 1, tur, sta, end);
	}
}

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	act2(n,'A', 'B', 'C');
	printf("ĞèÒª%d´Î", count);
	return 0;
}