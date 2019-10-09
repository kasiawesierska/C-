#include <iostream>
#define _USE_MATH_DEFINES // for C++
#include <cmath>

using namespace std;

int main()
{
    cout << "Przeliczam kat w stopniach na radiany" << endl;
    cout << "Podaj kat w stopniach" << endl;
    int deg = 0;
    cin >> deg;
    cout <<(deg*((M_PI)/180))<< endl;
    return 0;
}
