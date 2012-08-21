#include <iostream>
using namespace std;

void BirthMonth() {
    int month;

    cout << "あなたは何月生まれですか？ > " << flush;
    cin >> month;

    if (1 <= month && month <= 12) {
        cout << "へー、" << month << "月なんですか。" << endl;
      } else {
        cout << month << "月やと！？" << endl
             << "んな月あらへんわ！" << endl;
      }
}

int main() {
    BirthMonth();
    BirthMonth();
}
