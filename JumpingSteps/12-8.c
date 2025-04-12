#include<stdio.h>

int calculate(int i)
{
	if (0 == i)
	{
		return 1;
	}
	else if (1 == i)
	{
		return 1;
	}
	else
	{
		return calculate(i - 1) + calculate(i - 2);
	}
}

int main()
{
	int i = 5;//ÌøÌ¨½×
	printf("\n%d", calculate(i));
	return 0;
}