#include<stdio.h>
int main()
{
	int arr[10];
	int i = 0;
	int max = 0;
	printf("������ʮ��������\n");
	for (i; i < 10; i++) 
	{
		scanf_s("%d", &arr[i]);

	}
	max = arr[0];//�������һ��Ԫ���趨Ϊmax
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("������Ϊ��%d\n", max);
	return 0;

}