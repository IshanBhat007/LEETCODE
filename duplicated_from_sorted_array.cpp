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


// METHOD 3---> BINARY SEARCH


// vector<int>v2;
// for(auto i = nums.begin(); i <nums.end(); i++) {
//     if(binary_search(i+1 ,nums.end(), *i) == false)
//     v2.push.back(*i);
// }
// nums = v2;
// return nums.size();
// }};
