#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string addLargeNumbers(string num1, string num2) {
    if (num1.length() > num2.length())
        swap(num1, num2);

    string result = "";
    int n1 = num1.length(), n2 = num2.length();
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    int carry = 0;
    for (int i = 0; i < n1; i++) {
        int sum = ((num1[i] - '0') + (num2[i] - '0') + carry);
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    for (int i = n1; i < n2; i++) {
        int sum = ((num2[i] - '0') + carry);
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    if (carry)
        result.push_back(carry + '0');

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string N, M;
        cin >> N >> M;
        cout << addLargeNumbers(N, M) << endl;
    }
    return 0;
}
