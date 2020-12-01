/*
   Arrays: 10) Faça um programa que preencha um vetor de tamanho
   100 com os 100 primeiros números naturais que não são múltiplos
   de 7. Ao final, imprima esse vetor na tela.
   Backes, André. Linguagem C (p. 128). GEN LTC. Edição do Kindle.
   Autor: Pedro Filho, 01/12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 100 // DEFINE O TAMANHO DO VETOR

// PROTÓTIPOS de função
void add_valor( int vt[], int size ); // para adicionar valores ao vetor
void mostrar_vetor( int vt[], int size ); // para mostrar os valores do vetor

// função principal
int main()
{
   // seleciona o idioma português
   setlocale( LC_ALL, "Portuguese" );

   // criar um vetor e atribuir o valor zero
   int vetor[ SIZE ] = {0};

   // chamar a função adicionar valores ao vetor
   add_valor( vetor, SIZE);

   printf( "Mostra os valores entre 1 e 100 não multiplos de 7." );
   // chamar a função mostrar valores do vetor
   mostrar_vetor( vetor, SIZE );

   // pula linha
   printf( "\n" );

   // pausa o sistema
   system( "pause" );

   return 0; // fim do programa

} // fim da função main

// função adicionar valores
void add_valor( int vt[], int size )
{
   // loop para adicionar valores
   for( int i = 1; i <= size; i++ ) {
      // se i maior que zero e não for multiplo de sete
      if( i > 0 && i % 7 != 0 ) {
         // vetor recebe o valor de i
         vt[ i ] = i;
      } // fim if compare
      //vt[ i ] = i;
   } // fim for
} // fim função

// função mostrar_vetor
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
} // fim função
