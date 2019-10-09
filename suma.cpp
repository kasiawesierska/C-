#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Podaj pierwsza liczbe" << endl;
    cin >> a;
    cout << "Podaj druga liczbe" << endl;
    cin >> b;
    if ((a>0) && (b>0))
    cout << a+b << endl;
    else
        cout <<"Podales zle liczby" << endl;
    return 0;
}
