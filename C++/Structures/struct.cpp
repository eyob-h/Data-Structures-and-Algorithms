#include <iostream>
using namespace std;

struct Student
{
    string fullName;
    int age;
    int ID;
};

struct Car
{
    int wheels;
    string model;
};

int main()
{

    struct Student Samuel;
    Samuel.fullName = "Samuel Johnson";
    Samuel.age = 24;
    Samuel.ID = 123456;

    struct Student Nahom = {"Nahom Reta", 24, 88100};

    cout << Samuel.fullName << endl;

    struct Car Mercedes = {4, "benz"};
    Mercedes.wheels = 5;

    cout << Mercedes.model << endl;
    cout << Mercedes.wheels << endl;
    return 0;
}
