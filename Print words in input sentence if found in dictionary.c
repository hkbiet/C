#include<stdio.h>
#include<malloc.h>

int main(){


char *string;


string = (char*)malloc(sizeof(char)*10);

printf("\nENTER STRING WITHOUT SPACES  \n");
scanf("%s",string);

printf("\n GOT = %s\n", string);



char* array[5];

int i = 0;

while(i<5){

	array[i] = (char*)malloc(sizeof(char)*10);

i++;
}

i = 0;

while(i<5){

printf("\nENTER STRING %d\n",i);
scanf("%s",array[i]);

i++;
}


printf("\nGOT FOLLOWING WORDS\n");

i = 0;
while(i<5){

printf("\n %d ---  %s\n",i,array[i]);


i++;
}


i = 0;
int j = 0 ;
int k = 0 ;
int m = 0 ;

while(string[i] != '\0'){

//printf("\n GOT '%c' FROM INPUT \n", string[i]);

k = 0;
int count = 0 ;
for( j = 0; j < 5; j++){

	m = i;
	
	while(array[j][k] != '\0'){

//		printf("\n looping word until its end:  array[%d][%d] = '%c' is != NULL \n",j,k,array[j][k]);
//		printf("\n CHECKING: string[%d] '%c' <--> array[%d][%d] '%c'\n", m, string[m], j, k,array[j][k] );


		
		if(string[m] != array[j][k]){
		
//			printf("\n NOT EUQAL : string[%d] '%c' != array[%d][%d] '%c'  LOOP BREAK\t\t ASCII = %c = %d | %c = %d \n", m, string[m], j, k,array[j][k], string[m], string[m], array[j][k], array[j][k] );			
			break;
				}else{
				
					count++;	
//					printf("\n EQUAL: string[%d] '%c' == array[%d][%d] '%c' | COUNT = %d \n", m, string[m], j, k,array[j][k] , count);


			}	

		
	
		k++;
		m++;

		}


	if(array[j][k] == '\0'){
		
//		printf("\n ##################################################################################################### \n");
		printf("\n %s \n", array[j]);
		break;

		}


			}	

i++;
			}

}
