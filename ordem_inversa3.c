/*
    Arrays: 2) Crie um programa que leia do teclado seis valores
    inteiros e em seguida mostre na tela os valores lidos na ordem inversa.
   Backes, André. Linguagem C (p. 128). GEN LTC. Edição do Kindle.
    Autor: Pedro Filho, /11/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 6 // DEFINE O TAMANHO DO VETOR

// PROTÓTIPOS de função
int add_valor( int vt[], int size ); // para adicionar valores ao vetor
int mostrar_vetor( int vt[], int size ); // para mostrar os valores do vetor
int ordenar( int vt[], int size ); // para ordenar os valores do vetor

// função principal
int main()
{
   // seleciona o idioma português
   setlocale( LC_ALL, "Portuguese" );

   // criar um vetor
   int vetor[ SIZE ];

   // mostrar
   printf( "{ VETOR EM ORDEM DECRESCENTE }\n" );

   // chamar a função adicionar valores
   add_valor( vetor, SIZE);

   // chamar a função mostrar valores
   mostrar_vetor( vetor, SIZE );

   // chamar a função ordenar vetor
   ordenar( vetor, SIZE );

   printf( "\nMostrar valores invertidos:");
   // chamar a função mostrar valores ORDENADOS
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
   printf( "Digite o:\n" );

   // loop para adicionar valores
   for( int i = 0; i < size; i++ ) {
      // entrada de dados
      printf( "%dº valor: ", i + 1 );
      scanf( "%d", &vt[ i ] );
   } // fim for

} // fim função

// função mostrar_vetor
int mostrar_vetor( int vt[], int size )
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

// função ordenar valores
int ordenar( int vt[], int size )
{
   // variável auxiliar
   int aux = 0; // para aixiliar na passagem dos valores

   // loop for para ordenar valores
   for( int i = 0; i < size; i++ ) {

      for( int j = 0; j < size; j++ ) {
         // verificar se vetor i é maior que o vetor j
         if( vt[ i ] > vt[ j ] ) {

            // passagem dos valores
            // variável auxiliar recebe o valor do vetor j
            aux = vt[ j ];
            // vetor j recebe valor do vetor i
            vt[ j ] = vt[ i ];
            // vetor i recebe o valor do auxiliar
            vt[ i ] = aux;

         } // fim if
      } // fim for interno
   } // fim for externo
} // fim função
