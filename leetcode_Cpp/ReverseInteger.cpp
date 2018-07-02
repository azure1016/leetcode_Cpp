class Solution {
public:
    int reverse(int x) {
        vector<int> results;
        for(int i=0;x!=0;i++){
        results.push_back(x % 10);
        x=(x-results[i])/10;
        }
        int res=0,cmp=214748364;
        for(auto val:results){
        //if overflow after operation, then the symbol definitely change           
            if(res>cmp || res<-cmp || (res<0 && res*10+val>=0)||(res>0 && res*10+val<=0))
                return 0;
            else res=res*10+val;
        }        
        return res;
    }
};