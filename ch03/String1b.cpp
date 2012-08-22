#include <iostream>
using namespace std;

int main() {
    char hello[] = "Hello!";

    hello[4] = '\0';
    cout << "「" << hello << "」を文字コードに変えると" << endl;

    for(int i=0; hello[i] != '\0'; ++i) {
        cout << (int)(unsigned char)hello[i] << ", ";
    }

    cout << 0 << endl
         << "になります" << endl;
}
