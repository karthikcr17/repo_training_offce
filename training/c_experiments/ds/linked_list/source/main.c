
/* this program on linked list operations */

#include "header.h"

int main()
{

	head = NULL; /* head is initilaize to NULL */
	ST *new = NULL;
	int op; /* op buffer is declared as character */
	char ch;      /* data is given as character type */

	printf("creating nodes \n");
//	do {
		/* creating nodes how many you want */

		creat_node(&head);
//		printf("you want another node \n");
//		fgets(&ch, MAX, stdin);
//		}while(ch == 'y' || ch == 'Y');
	
	while(1) {

		OPTIONS;
		printf("1.insertion\n");
		printf("2.deletion\n");
		printf("3.display\n");
		printf("4.exit\n");
	
		op = valid();

		switch(op) {
				
			case 1:
					if((new = (ST *)malloc(sizeof(ST))) == NULL){ /* allocating memory to
																	new node */

					   printf("malloc is failed to allocate memory\n");
					   exit(1);
				   }

				   printf("enter the data \n");         


				   new -> data = valid();            
				   head = inser_begin(head, new); /* insertion function calling */
				   break;
			case 2:
				   deletion(&head); /* deletion function calling */
				   break;
			case 3: 
				   display(&head); /* display function calling */
				   break;
			case 4: 
				   exit(1);

			default: INCORRECT;
		}
	}
	return 0;
}


