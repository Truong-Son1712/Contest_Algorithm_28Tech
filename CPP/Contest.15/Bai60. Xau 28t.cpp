#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int len = S.length();
    
    // Prefix sums for counts of '2', '8', and 't'
    int count2 = 0, count8 = 0, countt = 0;
    
    // HashMap to store the balance counts
    unordered_map<string, int> balanceCount;
    
    // Initial balance state (0, 0) with count 1 (empty prefix)
    balanceCount["0#0"] = 1;
    
    int result = 0;
    
    for (int i = 0; i < len; ++i) {
        if (S[i] == '2') count2++;
        else if (S[i] == '8') count8++;
        else if (S[i] == 't') countt++;
        
        // Current balance state
        int balance28 = count2 - count8;
        int balance2t = count2 - countt;
        
        // Create a unique key for the current balance state
        string balanceKey = to_string(balance28) + "#" + to_string(balance2t);
        
        // If this balance state has been seen before, it means there are
        // substrings ending at the current index which are valid
        if (balanceCount.find(balanceKey) != balanceCount.end()) {
            result += balanceCount[balanceKey];
        }
        
        // Increment the count for this balance state
        balanceCount[balanceKey]++;
    }
    
    cout << result << endl;
    
    return 0;
}
