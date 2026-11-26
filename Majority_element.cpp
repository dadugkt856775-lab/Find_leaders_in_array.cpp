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

    int majority = -1;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }

        if (count > n / 2) {
            majority = a[i];
            break;
        }
    }

    if (majority != -1)
        cout << "Majority element = " << majority << endl;
    else
        cout << "No majority element found." << endl;

    return 0;
}
