class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.empty()) return 0;
        int head = 0, end = nums.size()-1, mid =  mid = (head+end)/2;
        while(head != end){
            if(nums.at(mid) > nums.at(end)){
                head =  mid + 1;
                 mid = (head+end)/2;
            }
            else if(nums.at(mid)<nums.at(end)){
                end = mid;
                 mid = (head+end)/2;
            }
            else{
                end=end-1;
                mid = (head+end)/2;
            }
        }
        return nums.at(mid);
    }
};