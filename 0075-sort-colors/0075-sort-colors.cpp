class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            int min_index = i;
            for(int j=i+1;j<n;j++){
                if(nums.at(j)<nums.at(min_index)) 
                min_index = j;
            }
            swap(nums[i],nums[min_index]);
        }
    }
};