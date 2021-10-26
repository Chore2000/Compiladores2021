#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
string ER;

int main()
{
    cout << "Ingresa una Expresion Regular: ";
    cin >> ER;

    for(int i=0; i<ER.length(); i++)
    {
        switch(ER[i])
        {
            case 40:
            case 41:
                cout << "Parentesis" << endl;
                break;
            
            case 42:
                cout << "Cerradura de Kleene" << endl;
                break;

            case 69:
                cout << "Epsilon" << endl;
                break;

            case 124:
                cout << "Union" << endl;
                break;

            default:
                if(ER[i]>96 && ER[i]<123)
                {
                    cout << "Alfabeto" << endl;
                } else cout << "No valido" << endl;
        }
    }

    system("pause");
    return 0;
}
