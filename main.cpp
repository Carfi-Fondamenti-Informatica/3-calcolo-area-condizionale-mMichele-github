#include <iostream>
using namespace std;
int main()
{
    float a=0, b=0;
    int opzione=0;
    cout << "Inserire due valori reali positivi a piacere:" << endl;
    cin >>a>>b;
    if (a>0 && b>0)
    {
        cout << "Scegliere un'opzione tra 0, 1, 2 :" << endl;
        cin >>opzione;
        switch(opzione)
        {
            case 0:
                cout << (a * b) / 2 << endl;
                break;
            case 1:
                cout << a * a << endl;
                break;
            case 2:
                cout << a * b << endl;
                break;
            default:
                cout << "Opzione non valida" << endl;
                break;
        }
    }
    else
    {
        cout << "I valori inseriti non sono validi" << endl;
    }
    return 0;
}
