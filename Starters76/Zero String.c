#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c1 = 0, c2 = 0, count = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            int digit = s[i] - '0';
            if (digit == 1) {
                c1++;
            } else {
                c2++;
            }
        }
        if (c1 > c2) {
            count++;
            count += c2;
        } else {
            count += c1;
        }
        cout << count << endl;
    }
    return 0;
}
