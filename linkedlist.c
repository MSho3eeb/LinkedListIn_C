#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next; 
}node;

node * linkedList_Create(int * arr, unsigned char arrLen);

int main(void){

    int arr[] = {2,3,4,2,4,2,1,4,2};
    node* list = linkedList_Create(arr, 9);

    while(list != NULL){
        printf("    %d  ", list->data);
        list = list->next;
    }
    
}


node * linkedList_Create(int * arr, unsigned char arrLen){
    static node* head, *last, *temp;
    head = (node*) malloc(sizeof(node));
    head->data = arr[0];
    head->next = NULL;
    last = head;

    for(int i = 1; i<arrLen ; i++){
        temp = (node*) malloc(sizeof(node));
        temp->data = arr[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }

    return head;
}
