#include <iostream>
using namespace std;

int main() 
{
	int i, k = 0;
	char ch[25];
	printf("請輸入字串：");
	cin >> ch;
	for ( i = 0; ch[i] != '\0' ; i++)
	{
		k++;
	}
	printf("反轉的字串=");
	for ( i = k-1; i >= 0; i--)
	{
		cout << ch[i];
	}
}