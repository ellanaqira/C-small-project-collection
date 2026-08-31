#include <stdio.h>
#include <stdlib.h>

// define the node structure
struct Node {
	int data;
	struct Node *next;
};


// MAIN
int main(int argc, char *argv) {

	// create nodes
	struct Node *head = NULL;
	struct Node *second = NULL;
	struct Node *third = NULL;
	struct Node *forth = NULL;
	struct Node *tail = NULL;

	// allocate space to each node
	head = malloc(sizeof(struct Node));
	second = malloc(sizeof(struct Node));
	third = malloc(sizeof(struct Node));
	forth = malloc(sizeof(struct Node));
	tail = malloc(sizeof(struct Node));

	// assign data and link nodes
	head->data = 10;
	head->next = second;

	second->data = 20;
	second->next = third;

	third->data = 30;
	third->next = forth;

	forth->data = 40;
	forth->next = tail;

	tail->data = 50;
	tail->next = NULL;

	struct Node *temp = head;

	
	// print out linked list
	while(temp != NULL) {
		printf("%d -> ", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");


	// free memory
	temp = head;
	while(temp != NULL) {
		struct Node *next_nodes = temp->next;
		free(temp);
		temp = next_nodes;
	}


	return 0;
}
