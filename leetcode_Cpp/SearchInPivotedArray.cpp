class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if(nums.empty()) return false;
        int head = 0,end = nums.size()-1,mid;
        while(head<=end){
            mid = (head + end)/2;
            if(nums.at(mid)==target) return true;
            else if(nums.at(mid)<nums.at(end)){//mid-end ascend
                if(nums.at(mid)<target && nums.at(end)>=target) {
                    head =  mid+1;
                }
                else end = mid-1;
            }
            else if(nums.at(mid)>nums.at(end)){//head-mid ascend
                if(nums.at(head)<=target && nums.at(mid)>target){
                    end = mid-1;
                }
                else head = mid+1;
            }
            else end=end-1;
        }
        return false;
    }
};