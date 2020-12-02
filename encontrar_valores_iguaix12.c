/*
   Arrays: 12) Fa�a um programa que leia um vetor de 10 posi��es.
   Verifique se existem valores iguais e os escreva na tela.
   Backes, Andr�. Linguagem C (p. 128). GEN LTC. Edi��o do Kindle.
   Autor: Pedro Filho, 01/12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 10 // DEFINE O TAMANHO DO VETOR

// PROT�TIPOS de fun��o
void add_valor( int vt[], int size ); // para adicionar valores ao vetor
void mostrar_vetor( int vt[], int size ); // para mostrar os valores do vetor
int pesquisar( int chave, int vt[], int size ); // pesquisar valores

// fun��o principal
int main()
{
   // seleciona o idioma portugu�s
   setlocale( LC_ALL, "Portuguese" );

   // gerador
   srand( time( NULL ) );

   // criar um vetor
   int vetor[ SIZE ] = {0};

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
void add_valor( int vt[], int size )
{
   // vari�veis
   int psq = 0, resp = 0;

   // loop para adicionar valores
   for( int i = 0; i < size; i++ ) {
      // GERAR N�MEROS ALEAT�TIOS
      psq = 1 + rand() % 100;
      // se psq diferente de zero
      if( psq != 0 ) {
         // pesquisar o valor
         resp = pesquisar( psq, vt, size );
         printf( "%d ", resp );
         // se a resposta da pesquisa for diferente do aleat�rio
         if( resp == -1 ) {
            // o vetor recebe esse valor
            vt[ i ] = psq;
         } // fim if interno
      } // fim if externo
   } // fim for
} // fim fun��o

// fun��o mostrar_vetor
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
} // fim fun��o

// fun��o pesquisar
int pesquisar( int chave, int vt[], int size )
{
   // loop para pesquisar valores no vetor
   for( int i = 0; i < size; i++ ) {
      // verificar se chave � igual do vetor
      if( vt[ i ] == chave ) {
         // imprimir o valor
         return chave;
      } // fim if
   } // fim for
   return -1; // chave n�o encontrada
   // imprima
   //printf(" }\n" );
} // fim fun��o
