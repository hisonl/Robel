#include <iostream>
using namespace std;

int main() {
    for(int i=0; i<5; ++i) {
        int a, b;

        cout << "1番目の値を入力してください > " << flush;
        cin >> a;

        cout << "2番目の値を入力してください > " << flush;
        cin >> b;

        if(b == 0) {
            cout << "0では割れません!" << endl;
            continue;
        }

        cout << a << " / " << b << " = " << a / b << " ... " << a % b << endl;
    }

    cout << "プログラムは終了しました。" << endl;
}
