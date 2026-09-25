#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 5 == 0 && n % 3 == 0)
        cout << "Divisible by both 5 and 3";
    else
        cout << "Not divisible by both";

    return 0;
}
