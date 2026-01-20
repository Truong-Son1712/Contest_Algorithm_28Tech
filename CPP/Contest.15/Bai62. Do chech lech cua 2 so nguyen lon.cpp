#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to find the absolute difference between two large integers
string findDiff(string str1, string str2) {
    if (str1.length() < str2.length())
        swap(str1, str2);

    int n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;
    string result = "";

    for (int i = 0; i < n2; ++i) {
        int diff = (str1[i] - '0') - (str2[i] - '0') - carry;
        if (diff < 0) {
            diff += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        result.push_back(diff + '0');
    }

    for (int i = n2; i < n1; ++i) {
        int diff = (str1[i] - '0') - carry;
        if (diff < 0) {
            diff += 10;
            carry = 1;
        } else {
            carry = 0;
        }
        result.push_back(diff + '0');
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string N, M;
        cin >> N >> M;
        cout << findDiff(N, M) << endl;
    }

    return 0;
}
