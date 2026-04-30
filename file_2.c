#include<unistd.h>

int number1;
int number2;

int main(void){

	write (1, "Hello what is number one?  ", 26);
	read (0, &number1, 4);

	write (1, "Now, give me the number two? ", 29);
	read (0, &number2, 4);

	if ( number1 > number2){
        write(1, "Number one is greater than number two  \n", 40);
	}

	else if ( number1 < number2){
	
	write (1,"The number two is greater than one  \n", 37);		
	}	

	else if ( number1 == number2){
	
	write(1, "The numbers are equal \n", 24 );
	
	}

};
