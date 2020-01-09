#include<stdio.h>
#define False 0
#define True 1

int* input_array(int array[]){

	for(int i = 0; i<10; i++){

		printf("\n type in value %d\n",i);
		scanf("%d",&array[i]);
}

return array;
}




void print_array(int array[]){

	for(int i = 0; i<10; i++){
	
		printf("\t %d ",array[i]);


	}


}


int binary_search(int array[], int search, int left , int right){

	int mid = left + (right-left)/2;
	printf("\n left = %d and right = %d hence mid = %d \n", left, right, mid);
	
	if(left > right){

		printf("\nleft > right;  left = %d , right = %d\n", left, right);	
		return False;

	}

	if(array[mid] == search){
		printf("\nFOUND array[%d] = %d  which is == search item %d\n", mid, array[mid], search );
		return True;
	}else{

		if(search < array[mid]){
			printf("\n item < mid ; itemh = %d and array[%d] = %d \n", search, mid, array[mid]);		
			right = mid-1;

	}else{

		printf("\n item > mid ; itemh = %d and array[%d] = %d \n", search, mid, array[mid]);
		left = mid+1;

	}
		printf("\n RECURSIVE CALL WITH left = %d and right = %d and item = %d\n", left, right, search);
		return binary_search(array, search, left, right);		
}



}

int main(){

int *array = (int*)malloc(sizeof(int)*10);

array = input_array(array);
print_array(array);

// Apply binary search to search an element;

printf("\nTYPE IN AN ELEMENT TO SEARCH\n");
int search;
scanf("%d",&search);

int left, right;

if(binary_search(array, search, left = 0, right = 9)){

	printf("\nELEMENT FOUND\n");

}else{

	printf("\nNOT FOUND\n");

}








}
