#include <iostream>
using namespace std;

int main()
{
    int a, b;
    for (int i = 1; i <= 3; i++)
    {
        a = (i * 2) - 1;
        b = (21 - a) / 2;
        cout << endl;
        for (int j = 1; j <= 21; j++)
        {

            if ((j <= b) || (j > (21 - b)))
                cout << ' ';
            else
                cout << '*';
        }
    }
    return 0;
}
