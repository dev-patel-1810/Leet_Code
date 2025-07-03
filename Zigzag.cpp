#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        int n = numRows;
        if (n == 1 || s.length() <= n) {
            return s;
        } 

        vector<string> r(n);
        int row = 0;
        bool down = false;

        for (char c : s) {
            r[row] += c;

            // Change direction at top or bottom row
            if (row == 0 || row == n - 1) {
                down = !down;
            }

            row += down ? 1 : -1;
        }

        string res;
        for (string p : r) {
            res += p;
        }

        return res;
    }
};

int main() {
    string input;
    int numRows;

    // Example input
    cout << "Enter the string: ";
    cin >> input;

    cout << "Enter number of rows: ";
    cin >> numRows;

    Solution sol;
    string result = sol.convert(input, numRows);

    cout << "Zigzag conversion: " << result << endl;

    return 0;
}
