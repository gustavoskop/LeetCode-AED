/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    int i, count;
    struct ListNode *p, *q, *new;

    p = head;
    q = p->next;

 
    while(q != NULL){
        if (p->val % q->val == 0){
            new = (struct ListNode *) malloc (sizeof(struct ListNode));

            new->val = q->val;
            
            new->next = q;
            p->next = new;

            p = q;
            q = q->next;
        }





        return head;
}


    
    return head;

}