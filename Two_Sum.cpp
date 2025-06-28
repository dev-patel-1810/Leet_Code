#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i == j){ 
                    continue;
                } 
                if (nums[i] + nums[j] == target) {
                    return {i, j}; 
                }
            }
        }
        return {}; 
    }
};

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution sol;
    std::vector<int> result = sol.twoSum(nums, target);
    printf("Indices of the two numbers that add up to %d are: [%d, %d]\n", target, result[0], result[1]);
    return 0;
}
