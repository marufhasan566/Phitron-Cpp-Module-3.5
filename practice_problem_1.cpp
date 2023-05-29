#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[20];
    int cls;
    char section;
    int roll;
    int math_marks;
    Student(char *n, int c, char s, int r, int mm)
    {
        strcpy(name, n);
        cls = c;
        section = s;
        roll = r;
        math_marks = mm;
    }
};
int main()
{
    Student maruf("Maruf Hasan", 8, 'A', 2263, 80);
    Student kona("Nishat Jahan Kona", 7, 'B', 1169, 90);
    Student nazif("Nazif Hasan", 1, 'C', 3041, 95);

    int maximum_number = max(maruf.math_marks, max(kona.math_marks, nazif.math_marks));
    if (maximum_number == maruf.math_marks)
    {
        cout << maruf.name << endl;
    }
    else if (maximum_number == maruf.math_marks)
    {
        cout << kona.name << endl;
    }
    else
    {
        cout << nazif.name << endl;
    }
    return 0;
}