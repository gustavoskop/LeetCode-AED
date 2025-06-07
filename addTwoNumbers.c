/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *p1 = NULL, *p2 = NULL, *p3 = NULL, *new = NULL, *head = NULL;
    int i, over = 0;
    p1 = l1;

    p2 = l2;
 

    head = (struct ListNode *) malloc (sizeof(struct ListNode));
    head->next = NULL;

    p3 = head;
  

    while (p1 != NULL && p2 != NULL){
        new = (struct ListNode *) malloc (sizeof(struct ListNode));
        new->val = p1->val + p2->val + over;
        over = 0;
        if(new->val > 9){
            new->val = new->val % 10;
            over++;
        }
            
        new->next = p3->next;
        p3->next = new;

        p1=p1->next;

        p2=p2->next;

        p3=p3->next;

    

    }
    while (p1 == NULL && p2 != NULL){
        new = (struct ListNode *) malloc (sizeof(struct ListNode));
        new->val = p2->val + over;

        over = 0;

        if(new->val > 9){
        new->val = new->val % 10;
        over++;
        }

        new->next = p3->next;
        p3->next = new;

        p2=p2->next;

        p3=p3->next;
 

    }
    while (p1 != NULL && p2 == NULL) {
        new = (struct ListNode *) malloc (sizeof(struct ListNode));
        new->val = p1->val + over;

        over = 0;

        if(new->val > 9){
        new->val = new->val % 10;
        over++;
        }
        new->next = p3->next;
        p3->next = new;

        p1=p1->next;

        p3=p3->next;
     
    }

    if (over != 0){
        new = (struct ListNode *) malloc (sizeof(struct ListNode));
        new->val = over;

        new->next = p3->next;
        p3->next = new;

    }


    return head->next;

}