#include <stdio.h>
#include <math.h>

void digitos(int);
void cambia_nums(int,int);


int main ()
{
	digitos (56789);	//ejemplo utilizando el numero 56789
}


void digitos(int valor)	//esta funcion identifica a cada digito y su respectiva potencia de 10
{
	int digito, potencia=0;	
	while (valor > 0){
		digito = valor % 10;			//identifica el ultimo digito del numero 
		valor /= 10;					//quita el ultimo digito del numero 
		cambia_nums(digito,potencia);	
		potencia++;						//aumenta la potencia en una unidad
	}
}


void cambia_nums(int digito, int potencia)
{
	int num;
	num=digito*pow(10,potencia);		//agrega los respectivos ceros a cada numero
	printf("\n %d", num);
}


/* Estas funciones reciben un numero cualquiera e, identifican cada digito del numero recibido con sus respectivas potencias, ejemplo:
   supongamos el numero 56789, este puede descomponerse en 50000 + 6000 + 700 + 80 + 9; estas funciones devuelven cada uno de esos numeros
   (50000, 6000, 700, 80 y 9).

   Mi idea es que, teniendo una funcion que devuelva 0, una que devuelva 1, una que devuelva 2 ... hasta la funcion que devuelva 9, sustituyamos
   todos los numeros del codigo a ofuscar, por multiplos de 10 de estas funciones y las sumas de las mismas, ejemplo:
   int num=56789;
   num = devuelve5()*pow(10,4)+devuelve6()*pow(10,3)+devuelve7()*pow(10,2)+devuelve8()*pow(10,1)+devuelve9()*pow(10,0);
 
   mi idea es hacer algo parecido a esto, sin embargo, es posible que sea necesario mejorar esta idea, ya que, es muy probable que tanto codigo 
   haga lenta la ejecucion
 
   Pd. Cree un grupo en facebook para poder ponernos mejor de acuerdo, busquenme como Franz Lake Moctezuma 
 
*/