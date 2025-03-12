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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*temp=headA;
        ListNode*temp2=headB;
        unordered_set<ListNode*> map;
        while(temp!=nullptr){
            map.insert(temp);
            temp=temp->next;
        }
        while(temp2!=nullptr){
            if(map.find(temp2)!=map.end()){
                return temp2;
            }
            temp2=temp2->next;
        }
        return NULL;
    }
};
