#include <iostream>
using namespace std;

int DivMod(int x, int y, int& r) {
    r = x % y;
    return x / y;
}

int main() {
    int x = 0, y = 0;
    cout << "第1項を入力してください： " << flush;
    cin >> x;
    cout << "第2項を入力してください： " << flush;
    cin >> y;

    DivMod(x, y);
}
