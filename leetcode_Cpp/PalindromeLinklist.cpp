class Solution {
public:
  bool isPalindrome(ListNode* head) {//O(n)
        if(!head) return true;
        else if(head && !head->next ) return true;
        ListNode *fast = head, *slow = head;
        stack<int> s;
        s.push(head->val);
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            s.push(slow->val);
        }
        if(!fast->next) s.pop();//odd
        ListNode *temp = slow->next;
        while(temp){            
            if(s.top() == temp->val) {
                s.pop();
                temp = temp->next;
            }
            else return false;
        }
        return true;
    }
};
