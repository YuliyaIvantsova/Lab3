#include <iostream>
using namespace std;

int main()
{
	int a = 1;
	int b = 0;
	for (int i = 0; i <= 50; i++)
	{
		i = a + b;
		a = b;
		b = i;
		cout << i << endl;
	}
}
