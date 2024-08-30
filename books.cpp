#include <iostream>
#include <string.h>
using namespace std;
int n;
class books
{
public:
    char *tt, *aut, *pub;
    int cost, sp;

public:
    void accept();
    void display();
    void search();
    books()
    {
        tt = new char();
        aut = new char();
        pub = new char();
        strcpy(tt, "oops");
        strcpy(aut, "william");
        strcpy(pub, "tata");
        cost = 0;
        sp = 0;
    }
    ~books()
    {
        delete tt;
        delete aut;
        delete pub;
        cout << "record deleted\n";
    }
} b[10];
void books::accept()
{
    cout << "\nenter the tittle";
    cin >> tt;
    cout << "enter the author";
    cin >> aut;
    cout << "enter the publisher";
    cin >> pub;
    cout << "enter the cost";
    cin >> cost;
    cout << "enter the stock point";
    cin >> sp;
}
void books::display()
{
    cout << "\n"
         << tt << "\t" << aut << "\t" << pub << "\t" << cost << "\t" << sp;
}
void books::search()
{
    char book[10], auth[10];
    int f = 0, cost = 0;
    int copy, available = 0;
    cout << "enter the book tittle";
    cin >> book;
    cout << "enter the book author";
    cin >> auth;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(book, b[i].tt) == 0 && strcmp(b[i].aut, auth) == 0)
        {
            f = 1;
            cout << "enter the copies you want";
            cin >> copy;
            if (copy <= b[i].sp)
            {
                available = 1;
                cout << "copies are available";
                cost = b[i].cost * copy;
                b[i].sp -= copy;
                cout << "your total price is \t" << cost;
            }
        }
    }
    if (f == 0)
    {
        cout << "book is not found";
    }
    if (f == 1 && available == 0)
    {
        cout << "aqbook is available but copies are available";
    }
}
int main()
{
    int ch, i;
    cout << "\nenter the no of books";
    cin >> n;
    do
    {
        cout << "\n1.accept\t2.display\nsearch";
        cout << "\nenter your choice";
        cin >> ch;
        switch (ch)
        {
        case 1:
            for (int i = 0; i < n; i++)
            {
                b[i].accept();
            }
            break;

        case 2:
            cout << "\ntittle\tauthor\tpublish\tcost\tstock";
            for (int i = 0; i < n; i++)
            {
                b[i].display();
            }
            break;
        case 3:
            b[i].search();
            break;
        }
    } while (ch != 0);
}