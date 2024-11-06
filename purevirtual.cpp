#include <iostream>
using namespace std;
class person
{
public:
    int sal;
    string name, add;
    virtual void accept() = 0;
    virtual void display() = 0;
};
class doctor : public person
{
public:
    void accept();
    void display();
} d;
void doctor::accept()
{
    cout << "enter the name of doctor";
    cin >> name;
    cout << "enter the address of doctor ";
    cin >> add;
    cout << "enter the salary of the doctor";
    cin >> sal;
}
void doctor::display()
{
    cout << "\n"
         << name << "\t" << add << "\t" << sal << "\n";
}
class staff : public person
{
    int sal;

public:
    void accept();
    void display();
} s;
void staff::accept()
{
    cout << "enter the name of staff";
    cin >> name;
    cout << "enter the address of staff";
    cin >> add;
    cout << "enter the salary of the  staff";
    cin >> sal;
}
void staff::display()
{
    cout << "\n"
         << name << "\t" << add << "\t" << sal << "\n";
}
class nurse : public person
{
public:
    void accept();
    void display();
} n;
void nurse::accept()
{
    cout << "enter the name of nurse";
    cin >> name;
    cout << "enter the address of nurse";
    cin >> add;
    cout << "enter the salary of the nurse";
    cin >> sal;
}
void nurse::display()
{
    cout << "\n"
         << name << "\t" << add << "\t" << sal << "\n";
}
int main()
{
    int ch;
    do
    {
        cout << "1.accept\n2.display";
        cin >> ch;
        switch (ch)
        {
        case 1:
        
            d.accept();
            n.accept();
            s.accept();
            break;
        case 2:
            d.display();
            n.display();
            s.display();
            break;
        }
    }
while(ch!=0);
    return 0;
}