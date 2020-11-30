/*
    Arrays: 7) Fa�a um programa que receba do usu�rio um vetor X
    com 10 posi��es. Em seguida dever�o ser impressos o maior e
    o menor elemento desse vetor.
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
      vt[ i ] = 1 + rand() % 100;
   } // fim for
} // fim fun��o

// fun��o mostrar_vetor
int mostrar_vetor( int vt[], int size )
{
   // vari�veis
   int maior = vt[ 0 ];
   int menor = vt[ 0 ];

   printf( "\nVetor original: { " );
   // loop para mostrar vetor
   for( int i = 0; i < size; i++ ) {
      // imprimir
      printf( "%d ", vt[ i ] );

      // verificar se vetor i e maior que o maior
      if( vt[ i ] > maior ) {
         // maior recebe o valor do vetor
         maior = vt[ i ];
      } // fim if maior valor
      // verificar se vetor i e maior que o maior
      if( vt[ i ] < menor ) {
         // maior recebe o valor do vetor
         menor = vt[ i ];
      } // fim if maior valor

   } // fim loop for
   // imprimir
   printf( " }\n" );
   printf( "Maior valor = %d\nMenor valor = %d\n", maior, menor );
} // fim fun��o
