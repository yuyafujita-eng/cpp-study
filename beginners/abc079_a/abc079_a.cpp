#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    string str = to_string(n);

    if (str[0] == str[1] && str[1] == str[2] ||
        str[1] == str[3] && str[2] == str[3]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}