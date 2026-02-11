class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long int mod,d;
        while(temp>0){
            mod = temp%10;
            d = d*10 + mod;
            temp/=10;
        }
        if(d==x){
            return true;
        }
        else{
            return false;
        }
    }
};