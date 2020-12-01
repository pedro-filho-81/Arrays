/*
   Arrays: 10) Fa�a um programa que preencha um vetor de tamanho 100 com os 100 primeiros n�meros naturais que n�o s�o m�ltiplos de 7. Ao final, imprima esse vetor na tela.
   Backes, Andr�. Linguagem C (p. 128). GEN LTC. Edi��o do Kindle.
   Autor: Pedro Filho, 01/12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 100 // DEFINE O TAMANHO DO VETOR

// PROT�TIPOS de fun��o
void add_valor( int vt[], int size ); // para adicionar valores ao vetor
void mostrar_vetor( int vt[], int size ); // para mostrar os valores do vetor

// fun��o principal
int main()
{
   // seleciona o idioma portugu�s
   setlocale( LC_ALL, "Portuguese" );

   // gerador
   srand( time( NULL ) );

   // criar um vetor e atribuir o valor zero
   int vetor[ SIZE ] = {0};

   // chamar a fun��o adicionar valores ao vetor
   add_valor( vetor, SIZE);

   printf( "Mostra os valores entre 1 e 100 n�o multuplos de 7." );
   // chamar a fun��o mostrar valores do vetor
   mostrar_vetor( vetor, SIZE );

   // pula linha
   printf( "\n" );

   // pausa o sistema
   system( "pause" );

   return 0; // fim do programa

} // fim da fun��o main

// fun��o adicionar valores
void add_valor( int vt[], int size )
{
   int compare = 0;

   // loop para adicionar valores
   for( int i = 0; i < size; i++ ) {

      // GERAR N�MEROS ALEAT�TIOS
      compare = 1 + rand() % 100;
      // se compare n�o for multiplo de sete
      if( compare % 7 != 0 ) {
         vt[ i ] = compare;
      } // fim if compare

   } // fim for

} // fim fun��o

// fun��o mostrar_vetor
void mostrar_vetor( int vt[], int size )
{
   printf( "\nVetor original: { " );

   // loop para mostrar vetor
   for( int i = 0; i < size; i++ ) {
      // imprimir
      printf( "%d ", vt[ i ] );
   } // fim loop for

   // imprimir
   printf( " }\n" );
} // fim fun��o
