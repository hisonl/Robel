#include <iostream>
using namespace std;

void ShowCode(char ch) {
    cout << "「" << ch << "」にふられた番号は " << (int)(unsigned char)ch << " です。" << endl;
}

int main() {
    char a;

    cout << "調べる文字コードを入力してください: " << flush;
    cin >> a;
    ShowCode(a);
}
