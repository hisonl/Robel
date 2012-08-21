#include <iostream>
using namespace std;

int main() {
    for(int i=0; i<5; ++i) {
        int a, b, op, result;

        cout << "第1項 > " << flush;
        cin >> a;
        cout << "第2項 > " << flush;
        cin >> b;
        cout << "1: 加算, 2: 除算, 3: 乗算, 4: 除算 > " << flush;
        cin >> op;

        if(op == 1) {
            result = a + b;
        } else if(op == 2) {
            result = a - b;
        } else if(op == 3) {
            result = a * b;
        } else if(op == 4) {
            result = a / b;
        } else {
            cout << "真面目にせんかい！" << endl;
            continue;
        }

        cout << "答えは " << result << "です。" << endl;
    }
}
