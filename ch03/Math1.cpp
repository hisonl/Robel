#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;

    cout << "直角を挟む2辺の長さを入力してください > " << flush;
    cin >> a >> b;

    cout << "斜辺の長さは " << sqrt(a*a + b*b) << " です。" << endl;
}
