class Solution {
public:
    //solution 1: reverse the number with no overflow
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(x == 0) return true;
        vector<int> result;
        int temp = x;
        for(int i = 0; temp != 0; i++){
           result.push_back(temp%10);
           temp=(temp - temp%10) / 10;
        }
        int res=0;
        for(auto val:result){
            res= res*10 + val;
        }
        
        if(res == x) return true;
        else return false;
    }

    //solution 2: reverse half of the bits with no overflow
    bool isPalindrome_2(int x){
        if(x < 0) return false;
        if(x == 0) return true;
        int temp = x;
        //get the bits of x
        int count = 0;
        for(;temp>=1;count++)
            temp/=10;
        vector<int> halfBits;
        temp = x;
        for(int i = 0; i < (count+1)/2; i++)
        {
            halfBits.push_back(temp%10);
            temp/=10;
        }
        int res = 0;
        for(auto val:halfBits){
            res =  res*10 + val;
        } 
        int x1 = x/pow(10,count/2);
        if(res == x1) return true;
        else return false;
    }
};
