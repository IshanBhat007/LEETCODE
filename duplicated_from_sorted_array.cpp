class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    int j = 1;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] != nums[i - 1]) {
        nums[j] = nums[i];
        j++;
      }
    }
    return j;
  }
};

// METHOD 2 --> WHEN ARRAY IS SORTED USE THIS ONLY THEN

// set<int> s1(nums.begin( , nums.end());
// nums = vector<int>(s1.begin(),s1.end());
// return s1.size();
