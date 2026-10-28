
#include <iostream>
using namespace std;

int main() {
    double mark1, mark2, mark3, average;

    cout << "Enter the first mark: ";
    cin >> mark1;

    cout << "Enter the second mark: ";
    cin >> mark2;

    cout << "Enter the third mark: ";
    cin >> mark3;

    average = (mark1 + mark2 + mark3) / 3;

    cout << "Average = " << average << endl;

    return 0;
}
