#include <iostream>
using namespace std;
int result;



struct student
{
    string name;
    int groupNumber;
    int averageGrade;

};

student Student [] = 
{ 
    {"Misha", 7, 4}, 
    {"Vasy", 12, 4}, 
    {"Nikita", 2, 5}, 
    {"Andrey", 3, 4}, 
    {"ivan", 1, 3} 
};

void printnStudetSet1(Student *s)
{
    for(int i = 0; i < 5; ++i)
    {
        cout << s[i].name << endl;
        cout << s[i].groupNumber << endl;
        cout << s[i].averageGrade << endl;
    }
}

void printnStudentsSet2(Student *s)
{   
    for (int i = 0; i < 3; ++i)
    {
        cout << s[i].name << endl;
        cout << s[i].groupNumber << endl;
        cout << s[i].averageGrade << endl;
    }

    double arr[3] = {};
    for (int j = 0; j < 3; j++)
    {
        arr[j] = s[j].averageGrade;
    }

    double buffer{};
    for (int k = 0; k < 3; k++)
    {
        for (int kk = 0; kk < 3; kk++)
        {
            if (arr[kk] < arr[kk + 1])
            {
                buffer = arr[kk];
                arr[kk] = arr[kk + 1];
                arr[kk + 1] = buffer;
            }
        }
    }

    for (int l = 0; l < 3; l++)
    {
        cout << arr[l] << " ";
    }
}



void total_score()
{
    for (int j = 0; j < 5; j++)
    {
        result = result + Student[j].averageGrade;

    }

    cout << result/5 << endl;
}

int main()
{
    printnStudetnSet2(Student);
    total_score();
    return 0;
}
