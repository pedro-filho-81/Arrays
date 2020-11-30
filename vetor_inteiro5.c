/*
    Arrays: 4) Faça um programa que possua um array de nome A que
    armazene seis números inteiros. a) Atribua os seguintes valores a
   esse array: 1, 0, 5, –2, –5, 7.
   b) Armazene em uma variável a soma dos valores das posições
   A[ 0], A[ 1] e A[ 5] do array e mostre na tela essa soma.
   c) Modifique o array na posição 4, atribuindo a essa posição
   o valor 100. d) Mostre na tela cada valor do array A, um em cada linha.
   Backes, André. Linguagem C (p. 128). GEN LTC. Edição do Kindle.
   Autor: Pedro Filho, 30/11/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 6 // DEFINE O TAMANHO DO VETOR

// PROTÓTIPOS de função
int mostrar_vetor( int vt[], int size ); // para mostrar os valores do vetor

// função principal
int main()
{
   // seleciona o idioma português
   setlocale( LC_ALL, "Portuguese" );

   // criar um vetor
   int vetor[ SIZE ] = { 1, 0, 5, -2,-5, 7 };

   // chamar a função mostrar valores
   mostrar_vetor( vetor, SIZE );

   // modificar o elemento da posição 4 por 100
   // vetor 4 recebe 100
   vetor[ 4 ] = 100;
   printf( "\nAterando o valor do vetor[ 4 ] = 100;\n" );
   // mostrar vetor
   mostrar_vetor( vetor, SIZE );

   printf( "\nValores um em cada linha:\n" );
   // MOSTRAR VALORES DO VETOR UM EM CADA LINHA
   for( int i = 0; i < SIZE; i++ ) {
      printf( "\t%d\n", vetor[ i ] );
   } // fim for

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
   // variável
   int soma = 0;
   printf( "\nVetor original: { " );

   // loop para mostrar vetor
   for( int i = 0; i < size; i++ ) {
      // imprimir
      printf( "%d ", vt[ i ] );
      // somar
   } // fim loop for
   // imprimir
   printf( " }\n" );

   // somar
   soma = vt[0] + vt[1] + vt[5];
   printf( "soma = vt[0] + vt[1] + vt[5] = %d\n", soma );

} // fim função
