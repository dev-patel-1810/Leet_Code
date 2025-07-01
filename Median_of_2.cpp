#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> c = nums1;
        c.insert(c.end(), nums2.begin(), nums2.end());

        sort(c.begin(), c.end());
        int n = c.size();

        if (n % 2 == 1) {
            return c[n / 2];
        } else {
            // Proper float division for average of middle elements
            return (c[n / 2 - 1] + c[n / 2]) / 2.0;
        }
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    double result = sol.findMedianSortedArrays(nums1, nums2);
    cout << "Median is: " << result << endl;

    return 0;
}
