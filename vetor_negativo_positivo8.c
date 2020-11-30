/*
    Arrays: 8) Fa�a um programa que preencha um vetor com 10 n�meros
    reais. Em seguida, calcule e mostre na tela a quantidade de
    n�meros negativos e a soma dos n�meros positivos desse vetor.
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

   // gerador
   srand( time( NULL ) );

   // criar um vetor
   int vetor[ SIZE ];

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
      vt[ i ] = -50 + rand() % 100;

   } // fim for

} // fim fun��o

// fun��o mostrar_vetor
int mostrar_vetor( int vt[], int size )
{
   int soma = 0; // para somar os n�meros positivos
   int nega = 0; // para contar os n�meros negativos

   printf( "\nVetor: { " );

   // loop para mostrar vetor
   for( int i = 0; i < size; i++ ) {
      // imprimir
      printf( "%d ", vt[ i ] );

      // se vt maior que zero fa�a
      if( vt[ i ] > 0 ) {
         // somar valores positivos
         soma += vt[ i ];
      } // fim if somar
      else { // se n�o
         // contar os n�meros negativos
         nega++;
      } // fim else

   } // fim loop for
   // imprimir
   printf( " }\n" );
   printf( "\nO vetor tem %d n�meros negativos.\n", nega );
   printf( "A soma dos n�meros positivos � %d\n", soma );
} // fim fun��o
