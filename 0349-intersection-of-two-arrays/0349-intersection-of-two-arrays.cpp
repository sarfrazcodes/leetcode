class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(int x: nums1){
            for(int y: nums2){
                if(x==y) {
                    int check = 0;
                for(int z: result){
                    if(x==z) check =1;
                }
                if(check==0){
                    result.push_back(x);
                }
                           }
               }
        }
        return result;
    }
};