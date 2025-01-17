#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string fullName;
    int groupNamber;
    string faculty;
};

Student allStudentMGY[]
{
    {"Golovina", 103, "it security"},
    {"Ryabkov", 103, "it security"},
    {"Astaykin", 103, "it security"},
    {"Kurgaev", 101, "hogwarts"},
    {"Emelin", 110, "hogwarts"}

};

void studentSearch(Student& stLocal, int s)
{
    while(1)
    {
        bool state;
        string textUser;

        cin >> textUser;

        for (Student st : stLocal.)
        {
           if (cout << st.fullName.compare(textUser) == 0)
           {
                state = true;
                cout << st.fullName << " " << st.groupNamber << " " << st.faculty << endl; break;
           }
           else state = false;
        }
        if (state == false) cout << "Please re-enter data!" << endl;
    }
}

int main()
{
    studentSearch(allStudentMGY);
    return 0;
}