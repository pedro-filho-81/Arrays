/*
   Arrays: 6.11 Bubble sort. O bubble sort apresentado na Figura 6.15  � ineficaz no caso de arrays grandes. Fa�a as modifica-  ��es simples descritas a seguir para melhorar o desempenho do bubble sort.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 200). Edi��o do Kindle.
   Autor: Pedro Filho, /12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 15 // DEFINE O TAMANHO DO VETOR

// PROT�TIPOS de fun��o
void add_valor( int vt[], int size ); // para adicionar valores ao vetor
void mostrar_vetor( int vt[], int size ); // para mostrar os valores do vetor
int pesquisar( int chave, int vt[], int size ); // pesquisar valores
void organizar( int vt[], int size ); // organizar o vetor

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

   printf( "\nPrimeiro vetor:" );
   // chamar a fun��o mostrar valores
   mostrar_vetor( vetor, SIZE );

   // chamar a fun��o organizar
   organizar( vetor, SIZE );

   printf( "\nVetor organizado:" );
   // chamar a fun��o mostrar vetor organizado
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

      // GERAR N�MEROS ALEAT�TIOS E ATRIBUIR A VARI�VEL PESQUISAR
      psq = 1 + rand() % 100;

      // se a pesquisa for diferente de zero
      if( psq != 0 && psq <= 100 ) {

         // chamar a fun��o pesquisar e atribuir o valor retornado a resposta
         resp = pesquisar( psq, vt, size );

         // se a resposta da pesquisa for -1 SIGNIFICA valor n�o encontrado
         if( resp == -1 ) {

            // o vetor recebe esse valor
            vt[ i ] = psq;

         } // fim if interno
         else {
            // imprimir
            printf( "%d Duplicata j� cadastrada.\n", resp );
         } // fim else
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

      // verificar se chave � igual ao vetor
      if( vt[ i ] == chave ) { // se verdade

         // retornar o valor
         return chave;
      } // fim if
   } // fim for

   // se a chave for diferente do vetor retornar o valor -1
   return -1; // significa chave n�o encontrada
   // imprima
   printf(" }\n" );
} // fim fun��o

// fun��o organizar
void organizar( int vt[], int size )
{
   // vari�vel aauxiliar
   int aux = 0;

   // loop para o vetor i
   for( int i = 0; i < size; i++ ) {

      // loop  para o vetor j
      for( int j = 0; j < size - 2; j++ ) {

         // verificar se o vetor i � menor que o vetor j
         if( vt[ i ] < vt[ j ] ) { // se verdade

            // auxiliar recebe o vetor j
            aux = vt[ j ];
            // vetor j recebe o vetor i
            vt[ j ] = vt[ i ];
            // vetor i recebe o auxiliar
            vt[ i ] = aux;

         } // fim if
      } // fim for interno
   } // fim for externo
} // fim fun��o
