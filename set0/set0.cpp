/*
Set 1C
student - Vitya Kurgaev
15112024
*/
#include <iostream>
using namespace std;
int a[5] ={4, 22, 1, 3, 10,}; int cnt;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
        cnt += 1;
        cout << a[i] << endl;
        }

    }
    cout << "finale: " << cnt << endl;

    return 0;
}