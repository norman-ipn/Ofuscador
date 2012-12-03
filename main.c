/**
 * Ofuscador de código
 */
#include <stdio.h>

FILE * entrada; // Almacenará nuestro archivo C de entrada
FILE * salida; // Apuntador al resultado final


/**
 * Programa para ofuscar código en C
 * @param argc
 * @param argv Por este medio se enviarán los archivos necesarios para la ejecución, la forma será [Ofuscador entrada.c salida.c]
 * @return 
 */
int main( int argc, char **argv )
{	

	++argv, --argc; 

	if ( argc > 1 ){
		/* Lector de la entrada del archivo a ofuscar */
		entrada = fopen( argv[0], "r" );
		/* Abrimos(creamos) el archivo sobre el cual vamos a escribir nuestro codigo ofuscado */
		salida = fopen(argv[1], "w");
                
		
                
		fclose(entrada);
		fclose(salida);
	}else{
		printf("Error en la ejecucion del programa (malos parametros de entrada)\n");
		return 1;
	}	

	return 0;
}