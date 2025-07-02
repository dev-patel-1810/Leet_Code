#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        string l = "";
        for (int c = 0; c < n; c++) {
            int left = c;
            int right = c;
            // Odd-length palindrome
            while (left >= 0 && right < n && s[left] == s[right]) {
                int len = right - left + 1;
                if (len > l.length()) {
                    l = s.substr(left, len);
                }
                left--;
                right++;
            }

            // Even-length palindrome
            left = c;
            right = c + 1;
            while (left >= 0 && right < n && s[left] == s[right]) {
                int len = right - left + 1;
                if (len > l.length()) {
                    l = s.substr(left, len);
                }
                left--;
                right++;
            }
        }
        return l;
    }
};

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    Solution sol;
    string result = sol.longestPalindrome(input);
    cout << "Longest palindromic substring: " << result << endl;

    return 0;
}
