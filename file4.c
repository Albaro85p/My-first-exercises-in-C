#include<unistd.h>

char gato;
int cats;


void cat(void)

{

	write(1, "cat \n", 5);
}

int main(void){

	write(1, "Hello Welcome \n",14 );
	write(1, "How much you want to imprime cat? \n" ,34);
        read(0, &gato, 1);
        cats = gato - '0';

	if (cats > 0 && cats < 9){

	for (int i = 0; i < cats; i++)
	 
		cat();
	}

	else{
	write(1, "Please select a digit correct. \n", 32);
	};

return(0);

}


 
