#include <iostream>
using namespace std;

int c{};
int t{};
int f{};
int summa{};

int main()
{
    cout << "How many numders?" << endl;
    cin >> c;

    if (c > 100)
    {
        cout << "No, re-enter numbers" << endl;
        return 0;
    }
    else
    {
        int a[c] = {};
        
        for(int ii = 0; ii < c; ii++) //ввод
        {
            cin >> t;
            if (t > 300)
            {
                cout << "No, re-enter data" << endl;
                ii--;
            }
            else a[ii] = t;  
        }


        for (int j = 0; j < c; j++) //проверка данных
        {
            if (a[j] % 5 == 0)
            {
                summa = summa + a[j];
            }
        }

        cout << summa << endl;
    }

    return 0;
}