#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Leader elements: ";

    for (int i = 0; i < n; i++) {
        bool leader = true;

        for (int j = i + 1; j < n; j++) {
            if (a[i] <= a[j]) {
                leader = false;
                break;
            }
        }

        if (leader)
            cout << a[i] << " ";
    }

    return 0;
}
