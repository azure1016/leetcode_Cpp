class Solution {
public:
   int findMin(vector<int>& nums) {
        int head = 0, end = nums.size()-1, mid = (head + end)/2;
        while(end != head && mid!= nums.size()-1){
            // 4 5 6 0 1 2 3 
            //312
            if(nums.at(mid)>nums.at(mid + 1) || nums.at(mid)>nums.at(end)){
                head = mid + 1;
                mid = (head + end)/2;
            }
            else{
                end = mid;
                mid = (end + head)/2;
            }
        }
        return nums.at(mid);
    }
};
