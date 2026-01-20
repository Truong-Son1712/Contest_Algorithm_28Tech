#include <iostream>
#include <map>
using namespace std;

int romanToDecimal(string& str) {
    map<char, int> roman;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;

    int res = 0;
    for (int i = 0; i < str.length(); ++i) {
        int s1 = roman[str[i]];
        if (i + 1 < str.length()) {
            int s2 = roman[str[i + 1]];
            if (s1 >= s2) {
                res += s1;
            } else {
                res += s2 - s1;
                ++i;
            }
        } else {
            res += s1;
        }
    }
    return res;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str; 
        cout << romanToDecimal(str) << endl;
    }
    return 0;
}
