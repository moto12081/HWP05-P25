#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int binarySearch(int *list, int left, int right, int n);

int main(void)
{
	int list[10] = { 6,7,10,15,50,51,52,60,65,70 };
	int left = 0, right = SIZE - 1;
	int key, ans;

	printf("請輸入所搜尋的數字：");
	scanf_s("%d", &key);
	ans = binarySearch(list, left, right, key);

	if (ans < 0)
	{
		printf("輸入的資料不存在\n");
	}
	else
	{
		printf("在第%d筆資料找到\n", ans + 1);
	}
	system("pause");
	return 0;
}

int binarySearch(int *list, int left, int right, int n)
{
	int middle = (left + right) / 2;
	if (left <= right)
	{
		if (list[middle] == n)
		{
			return middle;
		}
		else if (list[middle] < n)
		{
			left = middle + 1;
			return binarySearch(list, left, right, n);
		}
		else
		{
			right = middle - 1;
			return binarySearch(list, left, right, n);
		}
	}
	return -1;
	
}