// C++ program for reversal of first k elements 
// of given linked list 
#include <bits/stdc++.h> 
using namespace std; 

/* Link list node */
struct Node { 
	int data; 
	struct Node* next; 
}; 


/* Function to push a node */
void push(struct Node** head_ref, int new_data) 
{ 
	struct Node* new_node = new Node(); 
	new_node->data = new_data; 
	new_node->next = (*head_ref); 
	(*head_ref) = new_node; 
} 

/* Function to print linked list */
void printList(struct Node* head) 
{ 
	struct Node* temp = head; 
	while (temp != NULL) { 
		printf("%d ", temp->data); 
		temp = temp->next; 
	} 
} 

/* Driver program to test above function*/
int main() 
{ 
	// Create a linked list 1->2->3->4->5 
	struct Node* head = NULL; 
	push(&head, 5); 
	push(&head, 4); 
	push(&head, 3); 
	push(&head, 2); 
	push(&head, 1); 



	cout << "\nGiven list\n"; 
	printList(head); 


	return 0; 
} 
