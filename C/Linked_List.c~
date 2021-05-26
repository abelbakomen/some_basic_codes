 #include<stdio.h>
 #include<stdlib.h>
 
 
 /*  Structure that holds a single element of the list. */

	typedef struct slist
	{
		int value;
		struct slist *next;
	} slist ;


/********************Declaration of functions*************/

 /*  Creates a list form keyboard */

        slist* createList(int );//it takes  the number of elements


 /*  prints the elements of the list */

        void View(slist *);
        

 /*  Remove the first element of the list */

        void removeFirst(slist **); 

 /*  Deletes and element in the list */

        void removeElement(slist **, int);




/******************** Main Function *************/
	int main(int argc, char **argv){
		printf("\n Working on Linked Lists\n");
		
		
		//test createList
		int n;
		printf("\nEnter the number of elements: ");
		scanf("%d",&n);
		slist* aList= createList(n);
		
		//test v*View List
		View(aList);
		
		//test remove first Element
		puts("press Enter to continue");
		getchar();
		removeFirst(&aList);
		View(aList);
		
		
		//test remove an Element
		puts("press Enter to continue");
		getchar();
		int elt;
		printf("\nEnter the element to remove: ");
		scanf("%d",&elt); 
		removeElement(&aList,elt);
		View(aList);
		
		return 0;
	}




/********************Definition of functions*************/

/*  Creates a list form keyboard */
	slist* createList(int n){
		printf("\nWe are going to create a list of %d elements \n", n);
		
		slist *aList =malloc(sizeof(slist));
		slist *anItem = aList; 

		int val;
		int i=0;
		
		for (i=0; i<n; i++){
			printf("\n\tEnter the Value at position %d : ", i);
			scanf("%d",&val);
			
			anItem->value = val;
			if(i+1<n){
				anItem->next = malloc(sizeof(slist));
				anItem = anItem->next;
			}

		}
		anItem->next=NULL;
		printf("completed\n");
		return aList;
	}

 /*  prints the elements of the list */

	void View(slist * aList){
		printf("\nPrinting elements of the list\n");
		slist *anItem = aList;
		
		while(anItem != NULL){
			printf(" %d -> ", anItem->value);
			anItem=anItem->next;
			
		}
		
		printf("completed\n");
	}
        



 /*  Remove the first element of the list */

        void removeFirst(slist ** aList){
        	printf("\n*****removing first Element\n...");
        	
        	if(*aList!=NULL){
			
	        	*aList = (*aList)->next;
        	
        	}
        	printf("completed\n");
        }




 /*  Deletes and element in the list */

        void removeElement(slist ** aList, int elt){
        	slist* anItem = *aList;
        	slist* prev = NULL;
        	
  			
        	printf("\n searching element %d\n...", elt);
  		int found=0;
  		
  		while(anItem!=NULL && found==0){
  			if(anItem->value == elt){
  				found = 1;
  			}else{
  				prev=anItem;
  				anItem = anItem->next;
  			}
  		}      	
        	
        	if(found == 0){
			printf("\nsory the element you want to delete is not inside the list\n");
		}else{
			printf("\n Element found! removing it...\n");
			if(prev==NULL)
				removeFirst(aList);
			else
				prev->next = anItem->next;
			
		}
  	
        	printf("completed\n");
        }


