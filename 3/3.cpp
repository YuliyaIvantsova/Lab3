#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int sum = 0;
    for (int i = 0; i <= 1000; i++)
    {
        sum = sum + i;
    }
    cout << "Сумма от 1 до 1000 = " << sum << endl;
    return 0;
}
