#include <iostream>
using namespace std;
template <class T>
void selsort(T a[], int n) {
    T temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int n, ch;

    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];
    float b[n];
    char c[n];
    do{
    cout << "Choose sorting type:\n";
    cout << "1. Integer sorting\n2. Float sorting\n3. Character sorting\n";
    cin >> ch;


    switch(ch) {
        case 1:cout << "Enter the array elements of integer type: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
            selsort(a, n);
            break;
        case 2: cout << "Enter the array elements of float type: ";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
            selsort(b, n);
            break;
        case 3:  cout << "Enter the array elements of character type: ";
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
            selsort(c, n);
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
}while (ch!=0);
    return 0;
}
