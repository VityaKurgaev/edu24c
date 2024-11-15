#include <iostream>
using namespace std;

int main()
{
    const int n = 4;
    int numbers[n] = {11, 12, 13, 14};
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << endl;
    }

    return 0;
}