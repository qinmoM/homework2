//дһ��strlen�ĵݹ麯���������ں����д�����ʱ������
#include<stdio.h>

int function(char* arr)
{
	if ('\0' != *arr)
	{
		return 1 + function(arr + 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	char arr1[] = "sy7d";
	int len = function(arr1);
	printf("%d",len);
	return 0;
}