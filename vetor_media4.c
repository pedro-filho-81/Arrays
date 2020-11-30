/*
    Arrays: 3) Fa�a um programa que leia cinco valores e os armazene
    em um vetor. Em seguida,mostre todos os valores lidos
    juntamente com a m�dia dos valores.
    Backes, Andr�. Linguagem C (p. 128). GEN LTC. Edi��o do Kindle.
    Autor: Pedro Filho, /11/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 5 // DEFINE O TAMANHO DO VETOR

// PROT�TIPOS de fun��o
int add_valor( int vt[], int size ); // para adicionar valores ao vetor
int mostrar_media( int vt[], int size ); // para mostrar a m�dia dos valores do vetor

// fun��o principal
int main()
{
   // seleciona o idioma portugu�s
   setlocale( LC_ALL, "Portuguese" );

   // criar um vetor
   int vetor[ SIZE ];

   // t�tulo
   printf( "{ M�DIA DO VETOR }\n" );

   // chamar a fun��o adicionar valores
   add_valor( vetor, SIZE);

   // chamar a fun��o mostrar valores
   mostrar_media( vetor, SIZE );

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
      // entrada do usu�rio
      scanf( "%d", &vt[ i ] );
   } // fim for

} // fim fun��o

// fun��o mostrar_vetor
int mostrar_media( int vt[], int size )
{
   // vari�veis
   int soma = 0, media = 0;

   printf( "\nVetor original: { " );

   // loop para mostrar vetor
   for( int i = 0; i < size; i++ ) {
      // imprimir
      printf( "%d ", vt[ i ] );
      // somar
      soma += vt[ i ];
   } // fim loop for
   // calcular a m�dia
   media = soma / size;
   // imprimir
   printf( " }\n" );
   // mostrar a m�dia
   printf( "Soma = %d \nM�dia =  %d\n", soma, media );
} // fim fun��o
