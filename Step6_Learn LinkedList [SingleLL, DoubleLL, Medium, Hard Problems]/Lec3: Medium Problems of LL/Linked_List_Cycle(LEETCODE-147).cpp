/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*,int> mapp;
        ListNode*temp=head;
        while(temp!=nullptr){
            if(mapp.find(temp)!=mapp.end()){
                return true;
            }
            mapp[temp]=1;
            temp=temp->next;
        }
        return false;

    }
};
