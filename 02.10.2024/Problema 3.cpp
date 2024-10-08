#include <iostream>
using namespace std;
int main()
{
    int x, a;
    a = 1;
    cout << "Numarul de linii este "; cin >> x;
    for (int i = x; i > 0; i--) {
        for (int n = i; n >= 0; n--) {
            cout << " ";
        }
        for (int m = 1; m <= a; m++) {
            cout << "*";
        }
        cout << endl;
        a += 2;
    }
    system("pause");
    return 0;
}