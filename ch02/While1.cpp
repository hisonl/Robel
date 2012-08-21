#include <iostream>
using namespace std;

int main() {
    int a = 0;

    while(a < 10) {
        cout << a << ' ' << flush;
        a += 2;
    }
    cout << endl;
}
