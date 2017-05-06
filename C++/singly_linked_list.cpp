#include <iostream>

using namespace std;

struct node
{
	int key;
	int data;
	node *next;
};

void push (node **head, int data)
{
	node *new_node;
	new_node = new node;

	new_node->data = data;
	new_node->next = *head;
	*head = new_node;

	cout<<"Pushing: " << data <<"\n";
}

void print_list(node *head)
{
	node *current = head;

	while (current != NULL){
		cout<< current->data << "\n";
		current = current->next;
	}

}

int main()
{
	node *a = new node;
	push(&a, 1);
	push(&a, 2);

	cout<<"Final list: \n";
	print_list(a);
	return 0;
}
