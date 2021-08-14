//Title:- Cycle detection
//coder:- Pavan Chavan
//Email:- pavan.21920161@viit.ac.in
//date:- 10/8/2021

//A linked list is said to contain a cycle if any node is visited 
/*more than once while traversing the list. Given a pointer to the head 
of a linked list, determine if it contains a cycle. If it does, return1 .
 Otherwise, return 0.*/

bool has_cycle(SinglyLinkedListNode* head) {

    if (head == NULL){
        return 0;
    }

    struct SinglyLinkedListNode *slow= head;
    struct SinglyLinkedListNode *fast = head;

    while (fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast){
            return 1;
        }
    }

    return 0;

}