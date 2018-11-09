/**
 * Author : Hemant Kumar
 * Repo : hkbiet/C
 * Testing
 *
 */



#include<stdio.h>
#include<stdlib.h>

//Creating the node for items which'll be connected to each other as a list

typedef struct node{

	int value;
	struct node* next;


}node_t;

//Creating structure for the Queue

typedef struct q{

	int count;
	node_t *front;
	node_t *end;


}queue;

//Function to initialise the Queue
int initialise(queue* q){


	q->count = 0 ;
	q->front = q->end = NULL;
}


//Function to check if a queue is empty
int isempty(queue* q){

	if(q->end = q->front == NULL){
		return 1;}else{
			return 0;
		}

}

//Function to add an item/node to the queue.   -----------------------------------      ISSUE     ------------------------------------------------------------------------------
int enqueue(queue* q){

	int user_value;
	char answer;

	printf("\n Would you like to add an item into the queue \n");
	scanf("%c",&answer);
	//answer = getchar();

	while(answer == 'y'){

		fflush(stdin);
		printf("\nType in a value to add to the queue: \n");
		scanf("%d",&user_value);
		fflush(stdin);

		node_t * new_node = NULL;
		new_node = malloc(sizeof(node_t));
		new_node->value = user_value;

		if(isempty(q)){

			//printf("\n Queue was empty !\n");
			q->front = new_node;
			q->end = new_node;
			new_node->next = NULL;

		}else{

			q->end->next = new_node;
			q->end = new_node;
			new_node->next = NULL;

		}

		printf("\n Would you like to add an item into the queue \n");
		//scanf("%[^\n]*c",&answer);
		//gets(answer);
		//answer = getchar();
		scanf(" %c",&answer);
		printf("\nUSER TYYPED IN %c\n",answer);
		fflush(stdin);
	}
}


//Function to remove/pop an item from the queue.
int dequeue(){}


//Function to display the items of the quueue.
int display(queue* q){

	node_t * current_node = q->front;
	while(current_node!=NULL){

		printf(">>%d",current_node->value);
		current_node = current_node->next;
	}

	printf("\n End of the Queue Reached !\n");
}

// The Main

int main(){
	queue* q = NULL;
	q = malloc((sizeof(queue)));

	// Initialise the Queue
	initialise(q);
	//printf("%d",isempty(q));

	enqueue(q);
	display(q);
}




