/*
    Arrays: 6) Escreva um programa que leia do teclado um vetor de
    10 posi��es. Escreva na tela quantos valores pares
    foram armazenados nesse vetor.
    Backes, Andr�. Linguagem C (p. 128). GEN LTC. Edi��o do Kindle.
    Autor: Pedro Filho, 30/11/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 10 // DEFINE O TAMANHO DO VETOR

// PROT�TIPOS de fun��o
int add_valor( int vt[], int size ); // para adicionar valores ao vetor
int mostrar_vetor( int vt[], int size ); // para mostrar os valores do vetor

// fun��o principal
int main()
{
   // seleciona o idioma portugu�s
   setlocale( LC_ALL, "Portuguese" );

   // criar um vetor
   int vetor[ SIZE ];

   // gerador
   srand( time( NULL ) );

   // chamar a fun��o adicionar valores
   add_valor( vetor, SIZE);

   // chamar a fun��o mostrar valores
   mostrar_vetor( vetor, SIZE );

   // pula linha
   printf( "\n" );

   // pausa o sistema
   system( "pause" );

   return 0; // fim do programa

} // fim da fun��o main

// fun��o adicionar valores
int add_valor( int vt[], int size )
{
   // loop para adicionar valores
   for( int i = 0; i < size; i++ ) {

      // GERAR N�MEROS ALEAT�TIOS
      vt[ i ] = 1 + rand() % 100;

   } // fim for

} // fim fun��o

// fun��o mostrar_vetor
int mostrar_vetor( int vt[], int size )
{
   // vari�vel
   int par = 0;

   printf( "\nVetor original: { " );

   // loop para mostrar vetor
   for( int i = 0; i < size; i++ ) {
      // verificar se tem valores pares
      if( vt[ i ] % 2 == 0 )
         par += 1;
      // imprimir
      printf( "%d ", vt[ i ] );
   } // fim loop for
   // imprimir
   printf( " }\n" );

   //imprimir
   printf( "O vetor tem %d n�meros pares.", par );

} // fim fun��o
