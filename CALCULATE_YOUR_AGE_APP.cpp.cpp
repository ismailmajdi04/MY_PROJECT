//CALCULATE YOUR AGE APPLICATION
#include <iostream>
using namespace std;
int main()
{
    cout<<"====================================\n";
    cout<<"== CALCULATE YOUR AGE APPLICATION ==\n";
    cout<<"====================================\n";
    cout<< "Enter Your Age: \n";
    int age=0;
    cin>> age;
    int age_in_days =age *365;
    int age_in_hours =age_in_days * 24;
    cout << "your age in days is : \n"<<age_in_days<<" Days\n";
    cout << "Your age in hours is : \n"<<age_in_hours<<" Hours";


    return 0;
}    