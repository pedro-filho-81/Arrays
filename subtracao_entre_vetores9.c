/*
   Arrays: 9) Fa�a um programa que receba do usu�rio dois arrays,
   A e B, com 10 n�meros inteiros cada. Crie um novo array C
   calculando C = A � B. Mostre na tela os dados do array c.
   Backes, Andr�. Linguagem C (p. 128). GEN LTC. Edi��o do Kindle.
    Autor: Pedro Filho, 01/12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 10 // DEFINE O TAMANHO DO VETOR

// PROT�TIPOS de fun��o
void add_valor( int vt[], int size ); // para adicionar valores ao vetor
void add_valor_C( int vt1[], int vt2[], int vt3[], int size ); // para adicionar valores ao vetor
void mostrar_vetor( int vt[], int size ); // para mostrar os valores do vetor

// fun��o principal
int main()
{
   // seleciona o idioma portugu�s
   setlocale( LC_ALL, "Portuguese" );

   // gerador
   srand( time( NULL ) );

   // criar os vetores
   int a[ SIZE ];
   int b[ SIZE ];
   int c[ SIZE ];

   printf( "{ SUBTRA��O DE VETORES A - B = C }\n" );
   printf( "Vetor A:" );
   // chamar a fun��o adicionar valor para o vetor A
   add_valor( a, SIZE );
   // chamar a fun��o mostrar valor para o vetor A
   mostrar_vetor( a, SIZE );

   printf( "Vetor B:" );
   // chamar a fun��o adicionar valor para o vetor B
   add_valor( b, SIZE );
   // chamar a fun��o mostrar valor para o vetor B
   mostrar_vetor( b, SIZE );

   // chamar a fun��o adicionar e mostrar valor para o vetor C
   add_valor_C( a, b, c, SIZE );

   // pula linha
   printf( "\n" );

   // pausa o sistema
   system( "pause" );

   return 0; // fim do programa

} // fim da fun��o main

// fun��o adicionar valores
void add_valor( int vt[], int size )
{
   // loop para adicionar valores
   for( int i = 0; i < size - 1; i++ ) {

      // GERAR N�MEROS ALEAT�TIOS
      vt[ i ] = 1 + rand() % 100;

   } // fim for

} // fim fun��o

// fun��o adicionar e mostrar valores do vetor C
void add_valor_C( int vt1[], int vt2[], int vt3[], int size )
{
   // imprima
   printf( "\nVetor C = { " );

   // loop para adicionar valor ao vetor C
   for( int i = 0; i < size; i++ ) {

      // vetor vt3 recebe o valor da subtra��o de vt1 e vt2
      vt3[ i ] = vt1[ i ] - vt2[ i ];

      // imprima
      printf( "%d ", vt3[ i ] );
   } // fim loop vt3

   // imprima
   printf( " }\n" );
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
