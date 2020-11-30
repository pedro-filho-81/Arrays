/*
    Fun��o: inicializando um vetor
    Autor: Pedro Filho, 30/11/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 10 // define o tamanho para 10 elementos

// prot�tipos
int add_valor( int vt[], int size );
int mostrar_vetor( int vt[], int size );

// fun��o principal
int main()
{
   // seleciona o idioma portugu�s
   setlocale( LC_ALL, "Portuguese" );

   // criando um vetor
   int vetor[ SIZE ];

   // gerador
   srand( time( NULL ) );

   printf( "Os valores do vetor:\n" );
   // Chamar a fun��o mostrar valores
   mostrar_vetor( vetor, SIZE );

   // pula linha
   printf( "\n" );

   // pausa o sistema
   system( "pause" );

   return 0; // fim do programa

} // fim da fun��o main

// fun��o adiciona valores
int add_valor( int vt[], int size )
{
   // loop para adicionar valores no vetor
   for( int i = 0; i < size; i++ ) {
      // gerar n�meros ale�torios e adicionar ao vetor
      vt[ i ] = 1 + rand() % 100;
   } // fim for adicionar
} // fun��o adicionar

// fun��o mostrar vetor
int mostrar_vetor( int vt[], int size )
{
   // loop for para mostrar os valores do vetor
   for( int i = 0; i < size; i++ ) {
      // mostrar os valores do vetor
      printf( "%d ", vt[ i ] );
   } // fim loop for
} // fim fun��o mostrar valores
