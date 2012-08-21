#include <iostream>
using namespace std;

int main() {
    int a = 0;

    // 変数への値の足し込み
    a += 2;
    cout << "a += 2        -> a = " << a << endl;

    // インクリメント
    ++a;
    cout << "++a           -> a = " << a << endl;

    // 複雑な計算式
    a = a * 5 + 2;
    cout << "a = a * 5 + 2 -> a = " << a << endl;
}
