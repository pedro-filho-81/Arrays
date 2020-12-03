/*
   Arrays: 13) Faça um programa para ler 10 números diferentes
   a serem armazenados em um vetor. Os números deverão ser armazenados
   no vetor na ordem em que forem lidos, sendo que, caso
   o usuário digite um número que já foi digitado, o programa
   deverá pedir a ele para digitar outro número. Note que cada
   valor digitado pelo usuário deve ser pesquisado no vetor,
   verificando se ele existe entre os números que já foram fornecidos.
   Exiba na tela o vetor final que foi digitado.
   Backes, André. Linguagem C (p. 128). GEN LTC. Edição do Kindle.
   Autor: Pedro Filho, 02/12/2020.
*/

// incluir bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 10 // DEFINE O TAMANHO DO VETOR

// PROTÓTIPOS de função
int add_valor( int vt[], int size ); // para adicionar valores ao vetor
void mostrar_vetor( int vt[], int size ); // para mostrar os valores do vetor
int pesquisar( int chave, int vt[], int size ); // para pesquisar

// função principal
int main()
{
   // seleciona o idioma português
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
      // num recebe a função adicionar dados
      n = add_valor( a, SIZE );

      // número digitado vai para a função pesquisar
      // o resultado é atribuido a variável resp
      resp = pesquisar( n, a, SIZE );

      // verificar se a resposta é igual ou menor que -1 (NÃO ENCONTRADO)
      if( resp == -1 ) {// se verdade

         // vetor recebe o valor do número
         a[ ++contar1 ] = n;

         ++contar2; // contar os valores que o vetor recebe

         // se contar igual ao tamanho do vetor
         if( contar2 == SIZE ) break; // fim do programa

      } // fim de if

      // se não
      else {
         // imprime a mensagem e retorna para while
         printf( "\tNúmero %d já cadastrado.\n ", resp );
      } // fim else
   } // fim for

   // chamar a função mostrar vetor
   mostrar_vetor( a, SIZE );

   // pula linha
   printf( "\n" );

   // pausa o sistema
   system( "pause" );

   return 0; // fim do programa

} // fim da função main

// função adicionar valores
int add_valor( int vt[], int size )
{
   // variável para entrada do valor
   int num;
   // Entrada de dados
   printf( "Digite um valor: " );
   // entrada do usuário
   scanf( "%d", &num );
   // retorna o valor digitado
   return num;

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
   // loop para percorrer o vetor
   for( int i = 0; i < size; i++ ) {

      // verificar se a chave é igual ao vetor
      if( chave == vt[ i ] ) { // se verdade
         // retornar o valor da chave
         return chave;
      } // fim if
   } // fim for

   // o valor -1 significa não encontrado
   return -1;
} // fim função
