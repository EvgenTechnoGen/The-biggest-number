#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cout << "Enter five numbers:" << endl;
    cin >> a >> b >> c >> d >> e;

    if (a > b && a > c && a > d && a > e) {
        cout << "The biggest number is - " << a << endl;
    }

    else if (b > a && b > c && b > d && b > e) {
        cout << "The biggest number is - " << b << endl;
    }

    else if (c > a && c > b && c > d && c > e) {
        cout << "The biggest number is - " << c << endl;
    }

    else if (d > a && d > b && d > c && d > e) {
        cout << "The biggest number is - " << d << endl;
    }

    else if (e > a && e > b && e > d && e > c) {
        cout << "The biggest number is - " << e << endl;
    }

    return 0;
}
