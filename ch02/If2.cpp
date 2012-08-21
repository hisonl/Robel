#include <iostream>
using namespace std;

void Divide() {
    int a, b;

    cout << "1番目の値を入力してください > " << flush;
    cin >> a;

    cout << "2番目の値を入力してください > " << flush;
    cin >> b;

    if(b == 0) {
        cout << "0では割れません!" << endl;
    }
    else {
        cout << a << " / " << b << " = " << a / b << " ... " << a % b << endl;
    }
}

int main() {
    Divide();
    Divide();
}
