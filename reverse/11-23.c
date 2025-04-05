#include<stdio.h>
#include<string.h>

void func(char arr[],int i,int j)
{
	char tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
	if (i < j - 1)
		func(arr, i+1, j-1);
}

int main()
{
	char arr[] = "asf";
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 2;
	func(arr,left,right);
	printf("%s\n", arr);
	return 0;
}