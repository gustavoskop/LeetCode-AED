/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    int valor = 0, count, menor = 0, maior = 0;
    struct ListNode *p, *q, *new;

    p = head;
    q = p->next;

    while (q != NULL) {
        new = (struct ListNode*)malloc(sizeof(struct ListNode));

        if (p->val > q->val) {
            menor = q->val;
            maior = p->val;
        } else {
            menor = p->val;
            maior = q->val;
        }

        if (maior % menor == 0)
            new->val = menor;
        else

            for (count = 1; count < menor; count++)
                if ((maior % count) == 0 && (menor % count) == 0)
                    new->val = count;

        new->next = q;
        p->next = new;

        p = q;
        q = q->next;
    }
    return head;
}