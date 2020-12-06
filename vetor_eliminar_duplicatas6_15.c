/*
   Arrays: 6.15 Eliminação de duplicatas. Use um array de subscrito único para
   resolver o problema a seguir. Leia 20  números, cada um entre 10 e 100,
   inclusive. À medida  que cada número for lido, imprima-o apenas se ele não
   for uma duplicata de um número já lido. Considere a  ‘pior das hipóteses’:
   os 20 números são diferentes. Use o  menor array possível para resolver esse problema.
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 200). Edição do Kindle.
    Autor: Pedro Filho, 04/12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 20 // DEFINE O TAMANHO DO VETOR

// PROTÓTIPOS de função
void add_valor( int vt[], int size ); // para adicionar valores ao vetor
void mostrar_vetor( int vt[], int size ); // para mostrar os valores do vetor
int pesquisar( int chave, int vt[], int size ); // pesquisar valores
void organizar( int vt[], int size ); // para orgazizar o vator

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

   printf( "Primeiro vetor:" );
   // chamar a função mostrar valores
   mostrar_vetor( vetor, SIZE );

   // chamar a função para organizar o vetor
   organizar( vetor, SIZE );

   printf( "Vetor organizado:" );
   // chamar a função mostrar vetor
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
   int contar = 0;

   // loop para adicionar valores
   while( 1 )
   {
      // entrada de dados
      printf( "Digite um número entre 10 e 100: " );
      scanf( "%d", &psq );
      if(psq == 0 ) break;

      // se psq diferente de zero
      if( psq >= 10 ) {

         // chamaar a função pesquisar e atribuir o valor retornado a resposta
         resp = pesquisar( psq, vt, size );

         // se a resposta for igual a -1
         if( resp == -1 ) {

            // o vetor recebe o valor da pesquisa
            vt[ contar ] = psq;
            ++contar; // registra esse cadastro

         } // fim if interno
         // se não
         else {
            printf( "Duplicara já cadastrada.\n" );
         } // fim else

      } // fim if externo

      // quando contar 20 cadastro sair do programa
      if( contar == 20 ) break;

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

// função organizar
void organizar( int vt[], int size )
{
   // variável
   int aux = 0;

   // loop para o vetor i
   for( int i = 0; i < size; i++ ) {

      // loop para o vetor j
      for( int j = 0; j < size; j++ ) {

         // verificar se vetor i é maior que vetor j
         if( vt[ i ] < vt[ j ] ) { // se verdade fazer a modificação

            // auxiliar recebe vetor principal
            aux = vt[ j ];

            // vetor j recebe o valor prindipal
            vt[ j ] = vt [ i ];

            // vetor i recebe o axiliar
            vt [ i ] = aux;

         } // fim if
      } // fim loop interno
   } // fim loop externo
} // fim função
