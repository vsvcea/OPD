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
		if (!(b % 2))
	        { 
			if (a >= int('A') && a < int('Z'))
			{
				a = a + int('a') - int('A');
			}
			else (a >= int('a') && a <= int('z'));
			{
			a = a + int('A') - int('a');
			}
		}

        	cout << char(a);
	}
	return 0;
}
