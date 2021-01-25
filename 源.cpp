#include<stdio.h>
int main()
{
	int arr[10];
	int i = 0;
	int max = 0;
	printf("请输入十个整数：\n");
	for (i; i < 10; i++) 
	{
		scanf_s("%d", &arr[i]);

	}
	max = arr[0];//将数组第一个元素设定为max
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("最大的数为：%d\n", max);
	return 0;

}