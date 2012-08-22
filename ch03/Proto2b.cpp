#include <iostream>
using namespace std;

void Func6() {
    cout << "ご苦労さん" << endl;
}

void Func5() { Func6(); }
void Func4() { Func5(); }
void Func3() { Func4(); }
void Func2() { Func3(); }
void Func1() { Func2(); }

int main() {
    Func1();
}
