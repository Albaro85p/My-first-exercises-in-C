#include<unistd.h>

int main (void){

	char nombre [20] = {0}; 
	write (1, "What is your name? :  ", 21 );
	read (0, nombre, 20);

	write (1, "Welcome, " , 9);
	write (1, nombre, 20);
	return(0);
}	
