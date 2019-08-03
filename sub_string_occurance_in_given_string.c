#include<stdio.h>

int main(){


char string[100];
char given[25];

printf("\n INPUT MAIN STRING:");
scanf("%[^\n]s",string);
printf("GOT >> %s",string);


printf("\n WHAT YO NEED TO FIND ?:");
scanf(" %[^\n]s",given);
printf("GOT >> %s\n\n\n\n",given);




char* check = NULL;
char* hold = NULL;
char* org = string;
int count = 0;

check = given;

while((*org) != '\0'){

	hold = org;
	
	while((*hold) == (*check)){

		//printf("\n WHILE LOOP\n *hold = %c and *check = %c and count = %d \n",*hold,*check,count);
		hold++;
		check++;
	};

	if(*check == '\0'){

		//printf("\n CHECK = NULL | *hold = %c   *check = %c  count = %d\n",*hold,*check,count);
		count++;
		//printf("\n FOUND \n");
		//break;

	}else{

		check = given;

	}
org++;
check = given;
}
printf("\n OCCURED %d times\n", count);

}
