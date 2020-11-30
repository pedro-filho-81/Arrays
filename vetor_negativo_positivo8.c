/*
    Arrays: 8) Faça um programa que preencha um vetor com 10 números
    reais. Em seguida, calcule e mostre na tela a quantidade de
    números negativos e a soma dos números positivos desse vetor.
    Backes, André. Linguagem C (p. 128). GEN LTC. Edição do Kindle.
    Autor: Pedro Filho, 30/11/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 10 // DEFINE O TAMANHO DO VETOR

// PROTÓTIPOS de função
int add_valor( int vt[], int size ); // para adicionar valores ao vetor
int mostrar_vetor( int vt[], int size ); // para mostrar os valores do vetor

// função principal
int main()
{
   // seleciona o idioma português
   setlocale( LC_ALL, "Portuguese" );

   // gerador
   srand( time( NULL ) );

   // criar um vetor
   int vetor[ SIZE ];

   // chamar a função adicionar valores
   add_valor( vetor, SIZE);

   // chamar a função mostrar valores
   mostrar_vetor( vetor, SIZE );

   // pula linha
   printf( "\n" );

   // pausa o sistema
   system( "pause" );

   return 0; // fim do programa

} // fim da função main

// função adicionar valores
int add_valor( int vt[], int size )
{
   // loop para adicionar valores
   for( int i = 0; i < size; i++ ) {

      // GERAR NÚMEROS ALEATÓTIOS
      vt[ i ] = -50 + rand() % 100;

   } // fim for

} // fim função

// função mostrar_vetor
int mostrar_vetor( int vt[], int size )
{
   int soma = 0; // para somar os números positivos
   int nega = 0; // para contar os números negativos

   printf( "\nVetor: { " );

   // loop para mostrar vetor
   for( int i = 0; i < size; i++ ) {
      // imprimir
      printf( "%d ", vt[ i ] );

      // se vt maior que zero faça
      if( vt[ i ] > 0 ) {
         // somar valores positivos
         soma += vt[ i ];
      } // fim if somar
      else { // se não
         // contar os números negativos
         nega++;
      } // fim else

   } // fim loop for
   // imprimir
   printf( " }\n" );
   printf( "\nO vetor tem %d números negativos.\n", nega );
   printf( "A soma dos números positivos é %d\n", soma );
} // fim função
