#include <iostream>
using namespace std;
#include <stdio.h>
#include<stdlib.h>

int main()
{
	int i, n;
	float arr[100];

	cout << "�п�J�A�Q����X�ӼƦr ";
	cin >> n;
	cout << endl;

	for (i = 0; i < n; ++i)
	{
		cout << "��J�Ʀr " << i + 1 << " : ";
		cin >> arr[i];
	}

	for (i = 1; i < n; ++i)
	{
		if (arr[0] < arr[i])
			arr[0] = arr[i];
	}
	cout << "�̤j���ƭȬO = " << arr[0];

	return 0;
}
