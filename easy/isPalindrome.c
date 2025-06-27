/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {

    if (head->next == NULL)
        return true;
    struct ListNode *slow;
    struct ListNode *fast;

    int *stack, top = -1;
    stack = (int *) malloc (sizeof(int) * 500000);

    slow = fast = head;

    while(fast != NULL && fast->next != NULL){
        stack[++top] = slow->val;
        slow = slow->next;
        fast = fast->next->next;
    }
        if(fast != NULL)
            slow = slow->next;
    while(slow != NULL){
        if(stack[top--] != slow->val)
            return false;
        slow = slow->next;
    }
    
    return true;
}