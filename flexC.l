/* @fferegrino */
/** DEFINICIONES DE C O FLEX **/
%{
/* stdio.h para lectura de archivos, string.h para manejo de cadenas*/
#include <math.h>
#include <stdio.h>
#include <string.h>
/* Declaramos de manera global nuestro apuntador a archivo, para que pueda ser usado por las demas funciones */
FILE *archivoOfuscado;

%}

/*	Definimos las expresiones regulares que serviran para identificar
 *	elementos del lenguaje C
 */	
DIGITO    [0-9]
KEYWORDS "auto"|"break"|"case"|"const"|"continue"|"default"|"do"|"else"|"enum"|"extern"|"for"|"goto"|"if"|"register"|"return"|"signed"|"sizeof"|"static"|"typedef"|"union"|"unsigned"|"volatile"|"while"
TIPOSDATO "char"|"int"|"long"|"short"|"float"|"double"|"void"
DIRECTIVAS	"#"[a-zA-Z]+
LIBS	"<"[a-z]+("."[a-zA-Z]+|"")">"
OPERADORES_ARITMETICOS ("+"|"-"|"*"|"/"|"%")|"="|("+"|"-"|"*"|"/"|"%")"="|"++"|"--"
OPERADORES_COMPARACION "<"|">"|">="|"<="|"!="|"=="|"!"|"&&"|"||"
OPERADORES_BIT ">>"|">>="|"<<"|"<<="|"~"|"&"|"&="|"|"|"|="|"^"|"^="
OPERADORES_OTROS ":"|"::"|"?"|"\\"
OPERADORES	{OPERADORES_ARITMETICOS}|{OPERADORES_COMPARACION}|{OPERADORES_BIT}|{OPERADORES_OTROS}
SEPARADORES "{"|"}"|"["|"]"|"("|")"|";"|","
ID       ([a-zA-Z]|"_")([a-zA-Z0-9]|"_")*
NUMERICOS {DIGITO}+"."{DIGITO}+|{DIGITO}+
SECUENCIAS_ESCAPE "\\""\""|"\\""n"
CARACTERES_ESPECIALES "."|" "|"'"|"#"|"?"|":"|"\\"|"@"
CHARS "'"({SECUENCIAS_ESCAPE}|[a-zA-Z0-9]|{CARACTERES_ESPECIALES}|{SEPARADORES}|{OPERADORES}|{ID}|{KEYWORDS}|{TIPOSDATO}|{LIBS}|{DIRECTIVAS}|{NUMERICOS})*"'"
STRINGS "\""({SECUENCIAS_ESCAPE}|[a-zA-Z0-9]|{CARACTERES_ESPECIALES}|{SEPARADORES}|{OPERADORES}|{ID}|{KEYWORDS}|{TIPOSDATO}|{LIBS}|{DIRECTIVAS}|{NUMERICOS})*"\""
CADENAS {STRINGS}|{CHARS}
COMENTARIOS_UNALINEA "/""*"+([a-zA-Z0-9]|{CARACTERES_ESPECIALES}|{SEPARADORES}|{OPERADORES}|{ID}|{KEYWORDS}|{TIPOSDATO}|{CADENAS}|{LIBS}|{DIRECTIVAS}|{NUMERICOS}|{SECUENCIAS_ESCAPE})*"*"+"/"
COMENTARIOS_CONTINUACION ("/"|"")"*"([a-zA-Z0-9]|{CARACTERES_ESPECIALES}|{SEPARADORES}|{OPERADORES}|{ID}|{KEYWORDS}|{TIPOSDATO}|{CADENAS}|{LIBS}|{DIRECTIVAS}|{NUMERICOS}|{SECUENCIAS_ESCAPE})*
COMENTARIOS {COMENTARIOS_UNALINEA}|{COMENTARIOS_CONTINUACION}

%%
	/* EXPRESIONES REGULARES */
	
	
{COMENTARIOS}	{/*COMENTARIOS*/
			
		}
{NUMERICOS}	{/*NUMERO (FLOTANTE O ENTERO)*/
			
		}
{CADENAS}	{/*CADENAS*/
			
		}

{DIRECTIVAS}	{/*DIRECTIVAS*/
			
		}
		
{LIBS}	{
	/* Para el texto despues del #define: <stdio.h> */

	}
{KEYWORDS}	{/*PALABRAS RESERVADAS*/ 
			
		}

{TIPOSDATO}	{/*TIPOS DE DATO EN C*/
			
		}

{ID}	{/*IDENTIFICADORES*/
		
	}

{OPERADORES} {  

	}

{SEPARADORES} {  

	}

"{"[\^{}}\n]*"}" printf( "Sin espacios" );  /* eat up one-line comments (NO HACE NADA) */

[\t]

[\n]	{
		/* Salto de linea */	
	}     

.           { }

%%

	/* CODIGO AUXILIAR */

int main( int argc, char **argv )
	{	

		++argv, --argc;  /* skip over program name */

		if ( argc > 1 ){
			/* Lector de la entrada */
			yyin = fopen( argv[0], "r" );
			/* Abrimos(creamos) el archivo sobre el cual vamos a escribir nuestro codigo ofuscado */
			archivoOfuscado = fopen(argv[1], "w");
			
			if(archivoOfuscado == NULL){
				return 1;
			}
			
			/* Llamamos a la funcion que ejecuta el codigo que nos entrega Flex */
			yylex();
		
			/* Terminamos el archivo ofuscado y lo cerramos */
	
			fclose(archivoOfuscado);
		}	
	
		return 0;
	}

