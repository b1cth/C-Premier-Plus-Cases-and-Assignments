#include "data.h";
void ass1()
{
    char FirstName[20];
    char LastName[20];
    char grade;
    unsigned int age;
    cout << "what is your first name? ";
    cin.getline(FirstName, 20);
    
    cout << endl;
    cout << "What is your last name? ";
    cin.getline(LastName, 20);
    
    cout << endl;

    cout << "What letter grade do you deserve? ";
    cin >> grade;
    grade = toupper(grade);
    cout << endl;

    cout << "What is your age? ";
    cin >> age;
    cout << endl;

    cout << "Name: " << LastName << ", " << FirstName << endl;
    cout << "Grade: " << char(grade + 1) << endl;
    cout << "Age: " << age;

}

