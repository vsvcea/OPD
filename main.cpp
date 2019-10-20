 #include <Windows.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int a, b = 0;
	for (;;)
	{
		b++;
		a = _getch();
		//cout <<w_char (a);
		if (!(b % 2))
		{
