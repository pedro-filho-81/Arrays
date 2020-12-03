/*
   Arrays: 13) Fa�a um programa para ler 10 n�meros diferentes
   a serem armazenados em um vetor. Os n�meros dever�o ser armazenados
   no vetor na ordem em que forem lidos, sendo que, caso
   o usu�rio digite um n�mero que j� foi digitado, o programa
   dever� pedir a ele para digitar outro n�mero. Note que cada
   valor digitado pelo usu�rio deve ser pesquisado no vetor,
   verificando se ele existe entre os n�meros que j� foram fornecidos.
   Exiba na tela o vetor final que foi digitado.
   Backes, Andr�. Linguagem C (p. 128). GEN LTC. Edi��o do Kindle.
   Autor: Pedro Filho, 02/12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 10 // DEFINE O TAMANHO DO VETOR

// PROT�TIPOS de fun��o
int add_valor( int vt[], int size ); // para adicionar valores ao vetor
void mostrar_vetor( int vt[], int size ); // para mostrar os valores do vetor
int pesquisar( int chave, int vt[], int size ); // para pesquisar

// fun��o principal
int main()
{
   // seleciona o idioma portugu�s
   setlocale( LC_ALL, "Portuguese" );

   // criar um vetor
   int a[ SIZE ];
   int resp = 0;
   int n = 0;
   int contar1 = 0;
   int contar2 = 0;

   // enquanto infinito
   while( 1 )
   {
      // num recebe a fun��o adicionar dados
      n = add_valor( a, SIZE );

      // n�mero digitado vai para a fun��o pesquisar
      // o resultado � atribuido a vari�vel resp
      resp = pesquisar( n, a, SIZE );

      // verificar se a resposta � igual ou menor que -1 (N�O ENCONTRADO)
      if( resp == -1 ) {// se verdade

         // vetor recebe o valor do n�mero
         a[ ++contar1 ] = n;

         ++contar2; // contar os valores que o vetor recebe

         // se contar igual ao tamanho do vetor
         if( contar2 == SIZE ) break; // fim do programa

      } // fim de if

      // se n�o
      else {
         // imprime a mensagem e retorna para while
         printf( "\tN�mero %d j� cadastrado.\n ", resp );
      } // fim else
   } // fim for

   // chamar a fun��o mostrar vetor
   mostrar_vetor( a, SIZE );

   // pula linha
   printf( "\n" );

   // pausa o sistema
   system( "pause" );

   return 0; // fim do programa

} // fim da fun��o main

// fun��o adicionar valores
int add_valor( int vt[], int size )
{
   // vari�vel para entrada do valor
   int num;
   // Entrada de dados
   printf( "Digite um valor: " );
   // entrada do usu�rio
   scanf( "%d", &num );
   // retorna o valor digitado
   return num;

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
   // loop para percorrer o vetor
   for( int i = 0; i < size; i++ ) {

      // verificar se a chave � igual ao vetor
      if( chave == vt[ i ] ) { // se verdade
         // retornar o valor da chave
         return chave;
      } // fim if
   } // fim for

   // o valor -1 significa n�o encontrado
   return -1;
} // fim fun��o
