/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode*temp = head;
        while(temp!= NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        ListNode* head_ = new ListNode(st.top());
        st.pop();
        ListNode* curr = head_;
        while(!st.empty()){
            int x = st.top();
            st.pop();
            ListNode* temp = new ListNode(x);
            curr->next = temp;
            curr = temp;
        }
        ListNode* temp1 = head;
        ListNode* temp2 = head_;
        while(temp1!=NULL){
            if(temp1->val != temp2->val){
                return false;
            }
            temp1= temp1->next;
            temp2= temp2->next;

        }
        return true;
            
    }
};