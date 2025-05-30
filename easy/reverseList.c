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

    struct ListNode *p, *q, *ini;
    int temp = 0, count = 0;

    ini = (struct ListNode *) malloc (sizeof(struct ListNode));
    ini->next = NULL;

  //  ind = (int*) malloc (sizeof(int) * 1);

    p = head;
    q = p->next;

    while (q != NULL){
        p = q;
        q = q->next;
        count++;
       // ind = (int *) realloc (ind, sizeof(int) * count + 2);
       // count--;
       // ind[count++] = q->val;
    }

    int ind[count];
    count--;

    while(count >= 0){
        struct ListNode *a, *new;

        a = ini;

        new = (struct ListNode *) malloc (sizeof(struct ListNode));
        new->val = ind[count];
        count--;

        new->next = a->next;
        a->next = new;
        
    }

    return ini;

}