#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string ar;
        int maxLength = 0;

        for (char ch : s) {
            size_t pos = ar.find(ch);

            if (pos != string::npos) {
                ar = ar.substr(pos + 1);
            }

            ar += ch;
            maxLength = max(maxLength, (int)ar.length());
        }

        return maxLength;
    }
};

int main() {
    Solution sol;

    string test1 = "abcabcbb";
    string test2 = "bbbbb";
    string test3 = "pwwkew";

    cout << "Test 1: " << test1 << " → " << sol.lengthOfLongestSubstring(test1) << endl;
    cout << "Test 2: " << test2 << " → " << sol.lengthOfLongestSubstring(test2) << endl;
    cout << "Test 3: " << test3 << " → " << sol.lengthOfLongestSubstring(test3) << endl;

    return 0;
}
