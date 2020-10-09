#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum = sum + i;
    }
    cout << "Сумма 10 натуральных чисел = " << sum << endl;
    return 0;
}
