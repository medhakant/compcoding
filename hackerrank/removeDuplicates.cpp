#include<bits/stdc++.h>
using namespace std;
struct Node { 
   int data; 
   struct Node *next; 
}; 


Node *removeDuplicates(Node *root)
{
 // your code goes here
 Node* node = root;
 while(node!=NULL){
     if(node->next!=NULL && node->data == node->next->data){
         node->next = node->next->next;
     }else{
     	node = node->next;
     }
 }
 return root;
}

struct Node* head = NULL;   
void insert(int new_data) { 
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
   new_node->data = new_data; 
   new_node->next = head; 
   head = new_node; 
} 
void display() { 
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) { 
      cout<< ptr->data <<" "; 
      ptr = ptr->next; 
   } 
} 
int main() { 
   insert(1);
   insert(1);
   insert(1);
   insert(1);
   insert(1);
   display();
   cout << "\n";
   removeDuplicates(head);
   display();
   cout << "\n"; 
   return 0; 
} 