#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 13

int main(void)
{
	int face,face1, face2;
	int roll;
	int fre[size] = { 0 };
	srand(time(NULL));
	for (roll  = 0;  roll<=36000; roll++)
	{
		face1 = 1 + rand() % 6;
		face2 = 1 + rand() % 6;
		face = face1 + face2;
		++fre[face];
	}
	for (face =1; face < size; face++)
	{
		printf("%4d%17d\n", face, fre[face]);
	}
	return 0;
}