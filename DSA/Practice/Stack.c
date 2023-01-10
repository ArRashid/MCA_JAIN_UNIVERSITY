#include <stdio.h>
//List of Global Variables
int top = -1; //this is the index of the stack ( will use in verious funstaion ) 
int stack_arry[10]; //This is the main arry which will hold all the value of the stack 



int main() {
   // List of local variale 
   int option = 0 ; //For storing the OPTION AS INT
   int val;         // Will store input from the user and will give to the inseart funsation 
   
   while ( option == 0 || option == 1 || option == 2 || option == 3 ) {	
   	//List of options 
   	printf("1. For insert a value \n");
   	printf("2. For pup \n");
   	printf("3. For Disply \n");
   	printf("4.(Or any key) For Exit  \n \n");
   	printf("Select Option : ");
   	scanf("%d",&option);
   	printf("================================================== \n \n");
   	
   	//checking the options and calling funstion 
   	switch (option) {
	   case 1 :// inseart 
	    printf("For index %d enter a int value :",top+1);
	    scanf("%d",&val);
	    inseart(val);
	   break ;
	   
	   case 2: //PUP or delete
	   	pup();
	   	break;
	   	
		case 3: //Display
		display();
	   	break;
	   	
	   	default : 
	   		printf("CLOSING THE APPLICATION");
	   		option = 4;
	   		break;
	   }
   	
   	
   };
   
   return 0;
}


//This funsation  will add the provided value in the stack and will increase  the TOP or  INDEX value by 1
int inseart(int value) {
	int stack_size = sizeof(stack_arry) / sizeof(stack_arry[0]); // this will calculate the size of the arry (sizeof(stack_arry) will return total memory And  sizeof(stack_arry[0]) return memory per element )
	if (top >= stack_size -1){ 
	printf("Stack Overflow (This STACK  can hold %d element and all index are filled out) \n",top+1);
	}  
	else {
		top = top + 1 ;
		stack_arry[top] = value ;
		printf("\n Provided Value '%d' added in index no %d  !  \n \n",value,top);	
		
	}
	printf("------------------------------------------------------\n \n\n");
	return 0;
}


//This funsation will display the currnt elements in the STACK
int display(){
	int i ;
	printf(" HERE IS THE LIST OF THE VALUE IN  THE STACK \n \n");
	for ( i = 0 ; i <= top; i++){
			
		printf("Index:%d Value : %d \n",i,stack_arry[i]);
	
	}
	printf("-------------------------------------------- \n \n \n");
	return 0;
	}
	
	
//this funsation will alter last entered value with zero and decrease the TOP value with 1
int pup(){
	
	if  (top >= 0){
	printf("index: %d and and value of the index : %d has been remove succssfully from the STACK \n \n",top,stack_arry[top] );
	stack_arry[top] = 0;
	top = top -1 ;
	printf("--------------------------------------------------------\n \n");
	}
	
	else {
	printf("STACK UNDERFLOW (There is no value in the stack to remove) \n");
	printf("--------------------------------------------------------\n \n");
	}
	return 0 ;
}


int contact(){
	printf("My self Abdur Rashid Mondal \n");
	printf("I like to thanks you for checking this program \n");
	printf("My contact : \n   Email : ar.rashid.mondal@gmail.com \n ");
	return 0 ;
}
