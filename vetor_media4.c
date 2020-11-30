/*
    Arrays: 3) Faça um programa que leia cinco valores e os armazene
    em um vetor. Em seguida,mostre todos os valores lidos
    juntamente com a média dos valores.
    Backes, André. Linguagem C (p. 128). GEN LTC. Edição do Kindle.
    Autor: Pedro Filho, /11/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 5 // DEFINE O TAMANHO DO VETOR

// PROTÓTIPOS de função
int add_valor( int vt[], int size ); // para adicionar valores ao vetor
int mostrar_media( int vt[], int size ); // para mostrar a média dos valores do vetor

// função principal
int main()
{
   // seleciona o idioma português
   setlocale( LC_ALL, "Portuguese" );

   // criar um vetor
   int vetor[ SIZE ];

   // título
   printf( "{ MÉDIA DO VETOR }\n" );

   // chamar a função adicionar valores
   add_valor( vetor, SIZE);

   // chamar a função mostrar valores
   mostrar_media( vetor, SIZE );

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
      // entrada do usuário
      scanf( "%d", &vt[ i ] );
   } // fim for

} // fim função

// função mostrar_vetor
int mostrar_media( int vt[], int size )
{
   // variáveis
   int soma = 0, media = 0;

   printf( "\nVetor original: { " );

   // loop para mostrar vetor
   for( int i = 0; i < size; i++ ) {
      // imprimir
      printf( "%d ", vt[ i ] );
      // somar
      soma += vt[ i ];
   } // fim loop for
   // calcular a média
   media = soma / size;
   // imprimir
   printf( " }\n" );
   // mostrar a média
   printf( "Soma = %d \nMédia =  %d\n", soma, media );
} // fim função
