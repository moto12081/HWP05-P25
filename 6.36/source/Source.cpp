#include <iostream>
using namespace std;

int main() 
{
	int i, k = 0;
	char ch[25];
	printf("�п�J�r��G");
	cin >> ch;
	for ( i = 0; ch[i] != '\0' ; i++)
	{
		k++;
	}
	printf("���઺�r��=");
	for ( i = k-1; i >= 0; i--)
	{
		cout << ch[i];
	}
}