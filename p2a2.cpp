

/************************************************/
/* Programm: P2A2.cpp                           */
/*                                              */
/* einfaches Programm zur Benutzung des Debugger*/ 
/*						                        */
/* Autor: 	G. Neugebauer			            */
/*						                        */
/* erstellt:	25.12.2000			            */	
/*						                        */
/* Version:	1				                    */
/*						                        */
/* Bemerkung:   geschachtelte Schleife		    */
/*						                        */
/************************************************/


#include<stdio.h>



int main(void)

{
int index_x,index_y, ergebnis;
float wert = 0;		//Wert 0 zuweisen

for(index_y=0;index_y<5;index_y++)

   {
   for(index_x=0;index_x<5;index_x++)
	{
        ergebnis=index_x + index_y;
        printf("\nErste Schleife: %i, Zweite Schleife:  %i",index_y,index_x);
        printf("\nErgebnis: %i,  Wert: %f\n",ergebnis,wert);
        }
   }

   getchar();
   return(1);
}



/* Ende Beispielprogramm */
