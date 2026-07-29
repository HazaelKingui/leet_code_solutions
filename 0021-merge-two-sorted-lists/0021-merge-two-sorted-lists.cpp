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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        if (!list1) return list2;
        if (!list2) return list1;

        ListNode* head = list1; 
        ListNode* res = list1;
        while (res->next != nullptr) {
            res = res->next;
        }
        res->next = list2; 

        std::vector<int> values;
        ListNode* atual = head; 
        while (atual != nullptr) { 
            values.push_back(atual->val);
            atual = atual->next;
        }
        std::sort(values.begin(), values.end());
        atual = head;
        for (int v : values)
        {
            atual->val = v;
            atual = atual->next;
        }
        return head; 
    }
};