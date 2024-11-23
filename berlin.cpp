#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string ans = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-' && s[i+1] == '.') {
            ans += '1';
            i++;  // Skip the next character since it's part of "-."
        }
        else if (s[i] == '-' && s[i+1] == '-') {
            ans += '2';
            i++;  // Skip the next character since it's part of "--"
        }
        else if (s[i] == '.') {
            ans += '0';
        }
    }

    cout << ans << endl;
    return 0;
}
