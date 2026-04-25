class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0);

        // Step 1: Count frequency of each character
        for(char c : s){
            freq[c - 'a']++;
        }

        // Step 2: Find first character with frequency 1
        for(int i = 0; i < s.length(); i++){
            if(freq[s[i] - 'a'] == 1){
                return i;
            }
        }

        // Step 3: If none found
        return -1;
    }
};
