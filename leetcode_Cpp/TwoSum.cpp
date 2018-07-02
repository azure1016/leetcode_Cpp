class Solution {
public:
  //solution 1
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            int second = target - nums[i];
            for(int j = i+1; j < nums.size();j++){
                if(second == nums[j]){
                    vector<int> results(2);
                    results[0] = i;
                    results[1] = j;
                    return results;
                }
            }
        }
    }

    //solution 2:using maps, considering that one input has 
    //only one solution
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> key;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if(key.find(complement)!=key.end()&&key[complement]!=i){                  
                result.push_back(key[complement]);
                result.push_back(i);
            }          
            else key.insert(pair<int,int>(nums[i], i));
        }
        return result;
    }
};
