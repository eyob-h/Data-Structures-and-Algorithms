#include <iostream>
using namespace std;

struct Student
{
    string fullName;
    int age;
    int ID;
};

int main()
{

    struct Student Samuel;
    Samuel.fullName = "Samuel Johnson";
    Samuel.age = 24;
    Samuel.ID = 123456;

    struct Student Nahom = {"Nahom Reta", 24, 88100};

    cout << Samuel.fullName << endl;
    return 0;
}