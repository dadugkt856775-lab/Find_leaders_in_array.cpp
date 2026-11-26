#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    int a[n - 1];

    cout << "Enter " << n - 1 << " elements: ";
    for (int i = 0; i < n - 1; i++)
        cin >> a[i];

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n - 1; i++)
        actualSum += a[i];

    cout << "Missing number = " << expectedSum - actualSum << endl;

    return 0;
}
