/*
   Arrays: 6.12 Escreva instruções isoladas que realizem cada uma das
   operações de array de subscrito único a seguir:
   a) Inicializem os 10 elementos do array de inteiros  counts com zeros.
   b) Somem 1 a cada um dos 15 elementos do array de  inteiros bonus.
   c) Leiam os 12 valores do array de ponto flutuante  tempPorMes via teclado.
   d) Imprimam os cinco valores do array de inteiros bestScores em formato de coluna.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 200). Edição do Kindle.
   Autor: Pedro Filho, 04/12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 10 // DEFINE O TAMANHO DO VETOR com 10 inteiros

// PROTÓTIPOS de função
void add_valor( int vt[], int size ); // para adicionar valores ao vetor
void mostrar_vetor( int vt[], int size ); // para mostrar os valores do vetor
int pesquisar( int chave, int vt[], int size ); // pesquisar valores


// função principal
int main()
{
   // seleciona o idioma português
   setlocale( LC_ALL, "Portuguese" );

   // gerador
   srand( time( NULL ) );

   // criar um vetor
   int counts[ SIZE ] = {0};

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
void add_valor( int vt[], int size )
{
   // variáveis
   int psq = 0, resp = 0;

   // loop para adicionar valores
   for( int i = 0; i < size; i++ ) {
      // GERAR NÚMEROS ALEATÓTIOS
      psq = 1 + rand() % 100;
      // se psq diferente de zero
      if( psq != 0 ) {
         // chamaar a função pesquisar e atribuir o valor retornado a resposta
         resp = pesquisar( psq, vt, size );
         // se a resposta da pesquisa for diferente do valor aleatório
         if( resp == -1 ) {
            // o vetor recebe esse valor
            vt[ i ] = psq;
         } // fim if interno
      } // fim if externo
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

// função pesquisar
int pesquisar( int chave, int vt[], int size )
{
   // loop para pesquisar valores no vetor
   for( int i = 0; i < size; i++ ) {
      // verificar se chave é igual ao vetor
      if( vt[ i ] == chave ) { // se verdade
         // retornar o valor
         return chave;
      } // fim if
   } // fim for
   // se não
   // retornar -1 valor não localizado
   return -1;
} // fim função
