class Solution {
public:
    void reorderList(ListNode* head) {

        vector<ListNode*> a;

        ListNode* temp = head;

        while (temp != NULL) {
            a.push_back(temp);
            temp = temp->next;
        }

        int i = 0;
        int j = a.size() - 1;

        while (i < j) {

            a[i]->next = a[j];
            i++;

            if (i == j)
                break;

            a[j]->next = a[i];
            j--;
        }

        a[i]->next = NULL;
    }
};