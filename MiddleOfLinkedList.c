//
// Created by CHANGCHUNGHUAN on 2020/8/24.
//
/* Given a non-empty, singly linked list with head node head, return a middle node of linked list.
   If there are two middle nodes, return the second middle node. */
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* fast = head;
    struct ListNode* slow = head;

    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
