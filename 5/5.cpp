#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int a;
    int k = 0;
    cout << "Введите число: ";
    cin >> a;
    while (a)
    {
        a /= 10;
        k++;
    } 
    cout << "Количество цифр в числе: " << k << endl;
    return 0;
}
