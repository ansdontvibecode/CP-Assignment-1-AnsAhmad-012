#include <iostream>
using namespace std;

int main() {
    int units;
    double bill;

    cin >> units;

    if (units <= 100)
        bill = units * 5;

    if (units > 100 && units <= 200)
        bill = 100 * 5 + (units - 100) * 8;

    if (units > 200)
        bill = 100 * 5 + 100 * 8 + (units - 200) * 10;

    cout << "Bill = " << bill;

    return 0;
}
