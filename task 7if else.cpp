#include <iostream>
using namespace std;

int main() {
    int marks, attendance;
    cin >> marks >> attendance;

    if (marks >= 80 && attendance >= 75)
        cout << "Scholarship Eligible";
    else
        cout << "Not Eligible";

    return 0;
}
