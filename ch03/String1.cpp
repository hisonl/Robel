#include <iostream>
using namespace std;

int main() {
    char hello[] = "Hello!";

    cout << "「" << hello << "」を文字コードに変えると" << endl;

    for(int i=0; i<(int)sizeof hello; ++i) {
        cout << (int)(unsigned char)hello[i] << ", ";
    }

    cout << endl
         << "になります。" << endl;
    cout << sizeof "hello" << endl;
}
