#include <iostream>
using namespace std;

int main()
{
    cout << "Namaste Duniya :-)" << endl;

    int a = 12;              // 4 bytes
    bool b = false;          // 1 byte
    char c = 'a';            // 1 byte
    double d = 3.1415926535; // 8 bytes
    float f = 323.34;        // 4 bytes
    string s = "Luv";

    cout << sizeof(a) << " " << sizeof(b) << " " << sizeof(c) << " " << sizeof(d) << " " << sizeof(f) << " " << sizeof(s) << endl;

    int e = 23;

    cout << a / e << " " << (float)a / e << endl;
    cout << 2 / a << " " << 2.0 / a << endl;

    int n = 1;
    cout << n++ << endl;
    cout << ++n << endl;

    cout << (n > a) << endl;

    return 0;
}