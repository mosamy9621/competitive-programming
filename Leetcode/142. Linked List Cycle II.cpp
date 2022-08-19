// solving it using  set data structure.
// there were a chellenge to solve it using o(1) memory complexity.
// it can be solved using floyd's cycle detection algorithm. 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        set<ListNode*> myset;
        while(head){
            if(myset.find(head) !=myset.end()) {
                return head;
            }
            myset.insert(head);
            head=head->next;

        }
        return nullptr;
    }
};