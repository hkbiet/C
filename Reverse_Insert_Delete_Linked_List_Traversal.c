#include<stdio.h>
#include<malloc.h>


struct Node{

	int value;
	struct Node *next;
};



struct Node* delete(struct Node* head, int value){

	struct Node *current, *previous, *temp;
	current = head;
	previous = NULL;
	
	while(current != NULL){

		if(current->value == value){

			if(current == head){
			
				temp = current;
				head = current->next;
				current = head;
				free(temp);
				continue;


			}

			if(current->next == NULL){
				
				temp = current;
				previous->next = current->next;
				current = current->next;
				free(temp);
				continue;			


			}
	
			temp = current;
			previous->next = current->next;
			current = current->next;
			free(temp);	


		}

		previous = current;
		current = current->next;
	}

		
	return head;


}


struct Node* reverse(struct Node *head){

	struct Node *current, *previous, *next;
	
	current = head;
	previous = NULL;
	
	while(current != NULL){
	
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	
	head = previous;
	return head;

}



struct Node* insert(struct Node* head, int value){

	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
	temp->value = value;
	temp->next = head;
	head = temp;
	return head;

}



void Print(struct Node* head){

	struct Node *temp = head;

	while(temp != NULL){

		printf(" - %d ",temp->value);
		temp = temp->next;

}


}



int main(){


struct Node *head = NULL;

int value ;

printf("\n DO YOU WANT A NODE ?\n");
char response ;
scanf("%c", &response);

while(response == 'y'){

	printf("\nENTER VALUE TO BE ENTERED IN NODE :\n");
	scanf("%d", &value);
	
	head = insert(head, value);


	printf("\n DO YOU WANT A NODE ?\n");
	scanf(" %c", &response);
}

printf("\nLINKED LIST ORIGINAL :\n");
Print(head);


printf("\n LINKED LIST IN REVERSE: \n");
head = reverse(head);
Print(head);


printf("\nDELETE VALUE OF NODE TO BE DELETED ?\n");
scanf("%d", &value);

head = delete(head, value);


Print(head);


}
