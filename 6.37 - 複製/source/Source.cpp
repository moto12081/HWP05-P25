#include <iostream>
using namespace std;
#include <stdio.h>
#include<stdlib.h>

int main()
{
	int i, n;
	float arr[100];

	cout << "請輸入你想比較幾個數字 ";
	cin >> n;
	cout << endl;

	for (i = 0; i < n; ++i)
	{
		cout << "輸入數字 " << i + 1 << " : ";
		cin >> arr[i];
	}

	for (i = 1; i < n; ++i)
	{
		if (arr[0] < arr[i])
			arr[0] = arr[i];
	}
	cout << "最大的數值是 = " << arr[0];

	return 0;
}
