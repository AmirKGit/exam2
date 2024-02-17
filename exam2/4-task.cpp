// pairs([1,2,5,81,2,5,8,-4,-3,7,6,53,7,6,1,2,5,8,-4,-3,7,6,53
// The pairs are selected as follows [(1,2),(5,81,2,5,8,-4,-3,7,6,53),(7,6),5]
// --the first pair is (1,2) and the numbers in the pair are consecutive; Count = 1
// --the second pair is (5,8) and are not consecutive
// --the third pair is (-4,-3), consecutive. Count = 2
// --the fourth pair is (7,6), also consecutive. Count = 3. 
// --the last digit has no pair, so we ignore.
#include <iostream>
#include <vector>

int countConsecutivePairs(const std::vector<int>& nums) {
    int count = 0;
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] == nums[i+1] - 1 || nums[i] == nums[i+1] + 1) {
            count++;
        }
    }
    return count-1;
}

int main() {
    std::vector<int> nums = {1,2,5,8,-4,-3,7,6,5};
    std::cout << "Count of consecutive pairs: " << countConsecutivePairs(nums) << std::endl;
    return 0;
}

