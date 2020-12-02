/*
   Arrays: 11) Leia um conjunto de números reais, armazenando-o em
   vetor. Em seguida, calcule o quadrado de cada elemento desse vetor,
   armazenando esse resultado em outro vetor. Os conjuntos têm,
   no máximo, 20 elementos. Imprima os dois conjuntos de números.
   Backes, André. Linguagem C (p. 128). GEN LTC. Edição do Kindle.
   Autor: Pedro Filho, 01/12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 20 // DEFINE O TAMANHO DO VETOR

// PROTÓTIPOS de função
void add_valor( int vt1[], int vt2[], int size ); // para adicionar valores ao vetor
void mostrar_vetor( int vt[], int vt2[], int size ); // para mostrar os valores do vetor

// função principal
int main()
{
   // seleciona o idioma português
   setlocale( LC_ALL, "Portuguese" );

   // gerador
   srand( time( NULL ) );

   // criar um vetor
   int  vetor[ SIZE ];
   int vetor2[ SIZE ];

   // chamar a função adicionar valores
   add_valor( vetor, vetor2, SIZE);

   // chamar a função mostrar valores
   mostrar_vetor( vetor, vetor2, SIZE );

   // pula linha
   printf( "\n" );

   // pausa o sistema
   system( "pause" );

   return 0; // fim do programa

} // fim da função main

// função adicionar valores
void add_valor( int vt1[], int vt2[], int size )
{
   // loop para adicionar valores
   for( int i = 0; i < size; i++ ) {

      // GERAR NÚMEROS ALEATÓTIOS
      vt1[ i ] = 1 + rand() % 100;
      vt2[ i ] = vt1[ i ] * vt1[ i ];

   } // fim for

} // fim função

// função mostrar_vetor
void mostrar_vetor( int vt1[], int vt2[], int size )
{
   printf( "\nPrimeiro Vetor: { " );

   // loop para mostrar vetor
   for( int i = 0; i < size; i++ ) {
      // imprimir
      printf( "%d ", vt1[ i ] );
   } // fim loop for

   // imprimir
   printf( " }\n" );

   printf( "\nSegundo Vetor: { " );

   // loop para mostrar vetor
   for( int i = 0; i < size; i++ ) {
      // imprimir
      printf( "%d ", vt2[ i ] );
   } // fim loop for

   // imprimir
   printf( " }\n" );
} // fim função
