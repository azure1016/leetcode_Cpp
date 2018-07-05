class Solution {
public:
  int findPeakElement(vector<int>& nums) {
        int mid = (nums.size()-1)/2;
        int end = nums.size()-1;
        int head = 0;
        //for()
        while(head!=end && mid!=nums.size()-1){
        if(nums.at(mid)<nums.at(mid+1)){
            head = mid+1;
            mid = (head + end)/2;
        }
        else if(nums.at(mid)>nums.at(mid+1)){
            end = mid;
            mid = (head + end)/2;
        }
        }
        //if(nums.at(head)>nums.at(mid)) return head;
        //else if()
        return mid;
    }
};
