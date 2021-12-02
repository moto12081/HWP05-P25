#include <iostream>
using namespace std;
#include <stdio.h>
#include<stdlib.h>

int main()
{
	int i, n;
	float arr[100];

	cout << "叫块稱ゑ耕碭计 ";
	cin >> n;
	cout << endl;

	for (i = 0; i < n; ++i)
	{
		cout << "块计 " << i + 1 << " : ";
		cin >> arr[i];
	}

	for (i = 1; i < n; ++i)
	{
		if (arr[0] < arr[i])
			arr[0] = arr[i];
	}
	cout << "程计琌 = " << arr[0];

	return 0;
}
