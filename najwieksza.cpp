#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Podaj trzy liczby" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if ((a>b) && (a>c))
    {
        cout << a << endl;
    }
    if ((b>a) && (b>c))
    {
        cout<< b << endl;
    }
    if ((c>a) && (c>b))
    {
        cout << c << endl;
    }
    return 0;
}
