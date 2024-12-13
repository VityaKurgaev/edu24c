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
