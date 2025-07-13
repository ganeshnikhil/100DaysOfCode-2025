#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};

 
struct ListNode* createNode(int val)
{
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

 

struct ListNode* removeDuplicates(struct ListNode* head)
{
    if (head == NULL)
    {  
        return head;
    }

    struct ListNode* current = head;
    while (current->next != NULL)
    {
        if (current->val == current->next->val)
        {

            struct ListNode* duplicate = current->next;
            current->next = current->next->next;
            free(duplicate);
        }
        else
        {
            current = current->next;  
        }

    }
    return head;
}

 

void printList(struct ListNode* head)
{
    struct ListNode* current = head;
    while (current != NULL)
    {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    struct ListNode* head = createNode(1);
    head->next = createNode(1);
    head->next->next = createNode(2);
    head->next->next->next = createNode(3);
    head->next->next->next->next = createNode(3);
 
    printf("Original list: ");
    printList(head);
     
    head = removeDuplicates(head);

    printf("After removing duplicates: ");
    printList(head);
    return 0;
} 


// Tasks:

/* 1. What is the bug in the condition if (head = NULL)?
        = is an assignment operater so it assigns head to null but
        we need to compare so we should use ==        

2. Why is current = current->next; placed only inside the else block?
        because if the duplicate is removed the list automatically traverses forward
        and if no duplicate we need to move formard by that statement

3. Debug the code for the correct output.
    The output will be
     1 2 3
     */