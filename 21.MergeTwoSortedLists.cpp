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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL and l2==NULL)
            return NULL;
        if(l1== NULL){
            return l2;
        }else if (l2== NULL){
            return l1;
        }
        ListNode *final = new ListNode(0);
        ListNode *l3 = final;

        
        while(l1!=NULL and l2!=NULL){
            if(l1->val < l2->val){
                l3->next = new ListNode(l1->val);
                l1 = l1->next;
            }else{
                l3->next = new ListNode(l2->val);
                l2 = l2->next;
            } l3 = l3->next;

            if(l1==NULL)
                l3->next=l2;
            else if(l2==NULL){
                l3->next =l1;
            }        
        }
    return final->next;
    }
};