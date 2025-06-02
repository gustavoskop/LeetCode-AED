/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {

   if (head == NULL)
        return head;

    struct ListNode *ini, *a, *new;

    ini = (struct ListNode *) malloc (sizeof(struct ListNode));
    ini->next = NULL;

    while (head->next != NULL){
  
        a = ini;

        new = (struct ListNode *) malloc (sizeof(struct ListNode));
        new->val = head->val;
        head = head->next;

        new->next = a->next;
        a->next = new;
         
    } 

    ini->val = head->val;

    return ini;

}