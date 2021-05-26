 #include<stdio.h>
 #include<stdlib.h>

 
 /*  Structure that holds a single element of the stack. */

	typedef struct stack
	{
		int value;
		struct stack *next;
	} stack ;


/********************Declaration of functions*************/

 /*  Creates a stack form keyboard */

        stack* createStack();


 /*  prints the elements of the stack */

        void View(stack *);
        

 /*  Removes and returns the first element of the stack */

        int pop(stack **); 

 /*  Insert an element at the head of stack */

        void push(stack **, int);




/******************** Main Function *************/
	int main(int argc, char **argv){
		printf("\n Working on stack using chained stacks\n");
		
		
		//test createstack
		int n;
		
		stack* astack= createStack();
		
		//test v*View stack
		View(astack);

		//test remove first Element
		pop(&astack);
		View(astack);
		
		
		//test add element in stack
		int elt;
		printf("\nEnter the value to add: ");
		scanf("%d",&elt); 
		push(&astack,elt);
		View(astack);
		
		return 0;
	}




/********************Definition of functions*************/

/*  Creates a stack form keyboard */
	stack* createStack(){
		printf("\nWe are going to create a stack. \n");
		
		stack *head =malloc(sizeof(* head));
		head->next =NULL;
		
		stack *tail ; 

		int val;
		int n=0;
		int end=0;
		char resp=' ';
		
		while(resp != 'e' && resp!= 'E'){
		
			printf("\nenter A to add and element or E to exit: ");
			
			scanf("%c", &resp);
			
			if(resp == 'A' || resp == 'a'){
				printf("\n\tEnter an integer: ");
				scanf("%d",&val);
				
				if(n!=0){
					tail = head;
					head = malloc(sizeof(* head));
					head->next = tail;
				}
				
				head->value = val;
				n++;
			
			}

		}
		if(n==0)
			head=NULL;
		printf("stack create: completed\n");
		return head;
	}

 /*  prints the elements of the stack */

	void View(stack * astack){
		printf("\nPrinting elements of the stack\n");
		stack *head = astack;
		
		while(head != NULL){
			if(head->next!=NULL)
				printf(" %d -> ", head->value);
			else
				printf(" %d ", head->value);
			head=head->next;
			
		}
		
		printf("print completed\n");
	}
        



 /*  Remove the first element of the stack */

        int pop(stack ** astack){
        	printf("\n*****removing first Element of stack\n...");
        	
        	int val=-1;
        	if(*astack !=NULL){
			val = (*astack)->value;
	        	*astack = (*astack)->next;
	        	printf("pop completed\n");
        	}else
        		printf("the stack is empty! returning default value -1");
        	
        	return val;
        }




 /*  insert an element at the head of the stack */

        void push(stack ** astack, int elt){
        	printf("\n*****adding  an element at the top  of stack\n...");
        	
        	stack* head = malloc(sizeof(*head));
        	
        	head->value = elt;
        	
        	head->next =  *astack;
        	
        	*astack = head;
        	
        	printf("push completed\n");
        }



