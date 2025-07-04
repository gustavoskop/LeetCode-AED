/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reorderList(struct ListNode* head) {
    struct ListNode *p, *q;
    int count = 0, tam, i;

    p = head;

    while (p->next != NULL) {
        p = p->next;
        count++;
    }
    

    count++;
    tam = count / 2;

          p = head;

    int* stack = (int*)malloc(sizeof(int) * tam + 2);
    int top = -1;

    if (count % 2 == 0) {
        for (i = 0; i < tam; i++)
            p = p->next;

        q = p;

        for (i = tam; i > 0; i--) {
            stack[++top] = q->val;
            q = q->next;
        }
    } else 
    {
        for (i = 0; i < tam; i++)
            p = p->next;

        q = p;

        for (i = tam; i > 0; i--) {
             q = q->next;
            stack[++top] = q->val;
           
        }
  
    }

    p = head;

    for (i = 0; i < tam; i++) {
        struct ListNode* new;

        new = (struct ListNode*)malloc(sizeof(struct ListNode));

        new->val = stack[top--];

        new->next = p->next;
        p->next = new;

        p = p->next;
        q = p;
        p = p->next;
    }

    if (count % 2 == 1)
        p->next = NULL;
    else
        q->next = NULL;
}