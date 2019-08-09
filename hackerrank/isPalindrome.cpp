#include<bits/stdc++.h>
using namespace std;
struct Node { 
   int data; 
   struct Node *next; 
}; 


bool isPalindrome(Node *head)
{
    stack<int> s;
    Node* node = head;
    while(node!=NULL){
        s.push(node->data);
        cout << "pushed" << node->data << "\n";
        node = node->next;
    }
    node = head;
    while(node!=NULL){
        int x = s.top();
        cout << "compare" << x << " "<< node->data << "\n";
        if(x==node->data){
            s.pop();
            node = node->next;
        }else{
            return false;
        }
    }
    return true;
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
   insert(3);
   insert(1);
   insert(7);
   insert(1);
   insert(3);
   display();
   cout << "\n";
   cout << isPalindrome(head);
   cout << "\n"; 
   return 0; 
} 