#include <iostream>
#define _USE_MATH_DEFINES // for C++
#include <cmath>
using namespace std;

int main()
{
    char w;
    do
    {
        cout<<"Wybierz dzialanie"<< endl;
        cout<<"1. Stopnie na radiany"<<endl;
        cout<<"2. Celcjuesze na Farenhity" <<endl;
        cout<<"3. Suma liczb dodatnich"<<endl;
        cout<<"4. Najwieksza liczba"<<endl;
        int x;
        cin>>x;
        switch(x)
            {
            case 1:
                {
                cout << "Przeliczam kat w stopniach na radiany" <<endl;
                cout << "Podaj kat w stopniach" <<endl;
                int degg = 0;
                cin >> degg;
                cout <<(degg*((M_PI)/180))<<" R"<<endl;
                }
            break;

            case 2:
                {
                cout << "Celcjusze na Farenhity" <<endl;
                cout << "Podaj stopnie Celcjusza" <<endl;
                float deg;
                cin >> deg;
                cout << ((deg*1.8) + 32.0) <<" F"<<endl;
                }
            break;

            case 3:
                {
                cout<<"Suma liczb dodatnich"<<endl;
                int z,y;
                cout << "Podaj pierwsza liczbe"<<endl;
                cin >>z;
                cout << "Podaj druga liczbe"<<endl;
                cin >>y;
                if ((z>0) && (y>0))
                    cout <<"Wynik dodawania to: "<<z+y << endl;
                else
                    cout <<"Wrong namber." << endl;
                break;
                }
            case 4:
                {
                cout<<"Najwieksza z trzech liczb"<<endl;
                int a,b,c;
                cout << "Podaj trzy liczby" << endl;
                cin >> a;
                cin >> b;
                cin >> c;
                if ((a>b) && (a>c))
                    {
                    cout << "Najwieksza to: " << a << endl;
                    }
                if ((b>a) && (b>c))
                    {
                    cout << "Najwieksza to: " << b << endl;
                    }
                if ((c>a) && (c>b))
                    {
                    cout << "Najwieksza to: " << c << endl;
                    }
                }
                break;

            default:
                cout<<"Wrong number"<<endl;
            }

            cout<<"Jeszcze raz? Wcisnij dowolny klawisz. Koniec ? Wcisnij n."<<endl;
            cin>>w;
        }
        while (w!='n');

    return 0;

}
