#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void Insert(int x){
     Node* new_node = (Node *)malloc(sizeof(struct Node));
new_node->data = data;
new_node->next = head;
head = new_node;

}
int main(){

head  = NULL;//empty linked list
printf("How many numbers? \n");
int n,i,x;
scanf("%d",&n);
for(i = 0; i<n ;i++){
    printf("Enter the number \n");
    scanf("%d",&x);
    Insert(x);

}

}
