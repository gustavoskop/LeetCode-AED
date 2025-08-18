/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */ 

struct ListNode* merge(struct ListNode *listaEsq, struct ListNode *listaDir){
    struct ListNode lista;
    struct ListNode* temp = &lista;
    lista.next = NULL;

    while (listaEsq && listaDir) {
        if (listaEsq->val < listaDir->val) {
            temp->next = listaEsq;
            listaEsq = listaEsq->next;
        } else {
            temp->next = listaDir;
            listaDir = listaDir->next;
        }
        temp = temp->next;
    }

    if (listaEsq) temp->next = listaEsq;
    else temp->next = listaDir;

    return lista.next;
}

struct ListNode* sortList(struct ListNode* head) {
    if (head == NULL||head->next == NULL)
        return head;

    struct ListNode *slow, *fast;
    slow = head;
    fast = head->next;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    struct ListNode* meio = slow->next;
    slow->next = NULL;

    struct ListNode *esquerda = sortList(head);
    struct ListNode *direita = sortList(meio);
    
    return merge(esquerda, direita);
}