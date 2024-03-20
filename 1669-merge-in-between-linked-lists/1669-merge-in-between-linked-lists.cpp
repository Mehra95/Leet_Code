class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1 = list1;
        int count = 0;
        while (count < a - 1) {
            temp1 = temp1->next;
            count++;
        }
        ListNode* temp2 = temp1->next;
        while (count < b) {
            temp2 = temp2->next;
            count++;
        }
        temp1->next = list2;
        while (list2->next != NULL) {
            list2 = list2->next;
        }
        list2->next = temp2;

        return list1;
    }
};
