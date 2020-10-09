#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int a, b, c;
    cout << "Введите 2 числа: ";
    cin >> a >> b;
    while (b)
    {
        c = a % b;
        a = b;
        b = c;
    }
    cout << "Наибольший общий делитель введённых чисел: " << a;
    return 0;
}
