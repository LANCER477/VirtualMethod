#include "Student.h"
#include "Programmer.h"
#include <iostream>
using namespace std;

int main()
{
    Human* humanArr[2];

    humanArr[0] = new Student("Max", 21, 700.5, "ITSTEP");
    humanArr[1] = new Student("Bob", 18, 1200.0, "Oxford");
    for (int i = 0; i < 2; ++i)
    {
        humanArr[i]->Output();
        humanArr[i]->Salary();
    }
    for (int i = 0; i < 2; ++i)
    {
        delete humanArr[i];
    }
}