#include <iostream>
using namespace std;

struct worker
{
    string name;
    string phone_number;
    string age;
    string education;
    string email;
};

worker Misha = {"Misha", " +7952749772", " 22"," nuclear physicist", " skibidi.tyalem@gmail.com"};

void printworker(worker*p)
{
    cout << p->name << p->phone_number << p->age << p->education << p->email  << endl;
}
int main()
{
    printworker(&Misha);
    return 0;
}