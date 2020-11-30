/*
    Arrays: 4) Fa�a um programa que possua um array de nome A que
    armazene seis n�meros inteiros. a) Atribua os seguintes valores a
   esse array: 1, 0, 5, �2, �5, 7.
   b) Armazene em uma vari�vel a soma dos valores das posi��es
   A[ 0], A[ 1] e A[ 5] do array e mostre na tela essa soma.
   c) Modifique o array na posi��o 4, atribuindo a essa posi��o
   o valor 100. d) Mostre na tela cada valor do array A, um em cada linha.
   Backes, Andr�. Linguagem C (p. 128). GEN LTC. Edi��o do Kindle.
   Autor: Pedro Filho, 30/11/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 6 // DEFINE O TAMANHO DO VETOR

// PROT�TIPOS de fun��o
int mostrar_vetor( int vt[], int size ); // para mostrar os valores do vetor

// fun��o principal
int main()
{
   // seleciona o idioma portugu�s
   setlocale( LC_ALL, "Portuguese" );

   // criar um vetor
   int vetor[ SIZE ] = { 1, 0, 5, -2,-5, 7 };

   // chamar a fun��o mostrar valores
   mostrar_vetor( vetor, SIZE );

   // modificar o elemento da posi��o 4 por 100
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

} // fim da fun��o main

// fun��o adicionar valores
int add_valor( int vt[], int size )
{
   printf( "Digite o:\n" );

   // loop para adicionar valores
   for( int i = 0; i < size; i++ ) {
      // entrada de dados
      printf( "%d� valor: ", i + 1 );
      scanf( "%d", &vt[ i ] );
   } // fim for

} // fim fun��o

// fun��o mostrar_vetor
int mostrar_vetor( int vt[], int size )
{
   // vari�vel
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

} // fim fun��o
