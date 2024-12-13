#include <iostream>
using namespace std;
int result;

struct student
{
    string name;
    int groupNumber;
    int averageGrade;

};

student newStudent [] = 
{ 
    {"Misha", 7, 4}, 
    {"Vasy", 12, 4}, 
    {"Nikita", 2, 5}, 
    {"Andrey", 3, 4}, 
    {"ivan", 1, 3} 
};

int arr[5] = {4, 4, 5, 4, 3};



for (int i = 0; i < 5; i++)
{
    if arr[i] > arr[i + 1]
}


void total_score()
{
    for (int j = 0; j < 5; j++)
    {
        result = result + newStudent[j].averageGrade;

    }

    cout << result/5 << endl;
}

int main()
{
    total_score();
    return 0;
}
