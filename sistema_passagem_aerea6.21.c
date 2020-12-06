/*
   Arrays: Seu programa dever� exibir o seguinte menu de alternativas:  Favor
   digitar 1 para �primeira classe�  Favor digitar 2 para �econ�mica�
   Se a pessoa digitar 1, ent�o seu programa dever� designar um assento na
   primeira classe (assentos de 1  a 5). Se a pessoa digitar 2, ent�o seu
   programa dever�  designar um assento na classe econ�mica (assentos 6 a  10).
   Seu programa dever�, ent�o, imprimir um bilhete  de embarque que indique
   o n�mero doassento da pessoa  e a se��o a que esse assento pertence,
   primeira classe ou  classe econ�mica.  Use um array de subscrito �nico
   para representar o quadro de assentos do avi�o. Inicialize todos os
   elementos  do array em 0 para indicar que todos os assentos est�o  vazios.
   � medida que cada assento � designado, defina o  elemento correspondente
   do array como 1, para indicar  que o assento n�o est� mais dispon�vel.
   Seu programa, naturalmente, nunca dever� designar  um assento que j�
   foi reservado a outra pessoa. Quando a primeira classe estiver cheia,
   seu programa dever�  perguntar � pessoa se ela aceita ser colocada na
   classe  econ�mica (e vice-versa). Se a resposta for sim, fa�a
   a  designa��o de assentos apropriada. Se a resposta for n�o,  imprima
   a mensagem �O pr�ximo voo sair� em 3  horas.�
   Deitel, Paul; Deitel, Harvey. C  Como Programar (p. 202). Edi��o do Kindle.
   Autor: Pedro Filho,06/12/2020.
*/

//bibliotecas
#include <stdio.h>
#include <stdlib.h> //para system
#include <locale.h> // Para setlocale
#define SIZE 10 // para os assentos do avi�o

// prot�tipos
int addAssentos( int assentos );
void printArray( const int arr[], int size );
void organizaArray( int arr[], int size );
int pesquisaArray( const int arr[], int size, int chave );
void mensagem( const int arr[], int size );
void passagem( int assento );

//Fun��o principal
int main() { // in�cio main

	//Define para Portugu�s Brasil
	setlocale(LC_ALL, "Portuguese");

	// vari�veis
	int classe = 0; // para selecionar a clase
	int assento1 = 0;
	int assento2 = 5;
	int resp = 0;
  int assentoAviao[ SIZE ] = {0};
  int indice = 0;

  // mostra o menu de op��es
  printf( "\tRESERVA DE PASSAGEM\n" );
  printf( "\t********************\n" );
  printf( "\t1 Primeira Classe  *\n" );
  printf( "\t2 Classe Econ�mica *\n" );
  printf( "\t3 Sair             *\n" );
  printf( "\t********************\n" );

  // fa�a enquanto classe maior que 0 ou classe menor que 4
  while( classe > 0 || classe < 4 )
  {
    // entrada da op��o 1 ou 2
    printf( "\tOp��o 1-A, 2-B, 3-sair: " );
    // entre com 1, 2 ou 3
    scanf( "%d", &classe );

    // VERIFICA SE FOI DIGITADO CORRETAMENTE OS VALORES 1, 2 E 3
    // se classe diferente de 1, 2 ou 3
    if( classe <= 0 || classe >= 4 )
    {
      // imprima digite 1, 2 ou 3
      printf( "Digite apenas 1, 2 ou 3\n" );

    } // fim if

    // SAIR� DA OP��O QUANDO DIGITADO 3
    else if( classe == 3 ) // se classe igual a 3
    {
      // IMPRIMA
      printf( "\n{ *** FIM DO PROGRAMA *** }\n" );
      break; // saia do programa

    } // fim else if 3

    // ADICIONA ASSENTOS NA PRIMEIRA CLASSE
    // se classe igual a 1 e o assento1 menor que 5
    else if( classe == 1 && assento1 < 5 )
    {
      ++assento1; // assento1 recebe 1
      assentoAviao[ indice ] = assento1; // assentoAviao recebe assento
      passagem( assento1 ); // emite a passagem
      indice++; // indice incrementa recebe 1

    } // fim else if 1

    // ADICIONA ASSENTOS NA CLASSE ECON�MICA
    // se classe igual a 2 e o assento2 menor que 10
    else if( classe == 2 && assento2 < 11 )
    {
      ++assento2; // assento2 recebe 1
      assentoAviao [ indice ] = assento2; // assentoAvi�o recebe assento2
      passagem( assento2 ); // emite a passagem
      indice++; // indice incrementa recebe 2

    } // fim else if

    // AVISA QUE A PRIMEIRA CLASSE EST� LOTADA
    // quando o assento for maior ou igual a 5 limite
    while( assento1 >= 5 )
    {
      resp = -1; // inicializa var resp em menos 1
      // fa�a enquanto resp menor que 0 ou resp maior que 3
      while( resp < 0 || resp > 3 )
      {
        // para sair do loop a resposta tem que ser 1 ou 2
        // imprima
        printf( "Primeira classe lotada.\n" );
        printf( "Aceita ser colocada(o) na classe econ�mica [1-S/2-N]? " );
        scanf( "%d", &resp ); // aguarda resposta do usu�rio

      } // fim while interno resp

      // VERIFICA SE A RESPOSTA DO USU�RIO FOI 2-N�O
      if( resp == 2 ) // se digitado 2
      {
        // imprime
        printf( "Pr�ximo voo sair� em 3 horas.\n" );
        break; // voltar para op��o
      } // fim if
      else // se for 1
      {
        break; // voltar para op��o
      } // fim else

    } // fim while interno assento 1

  } // fim while externo

  // chama a fun��o printArray
  printArray( assentoAviao, SIZE);

  // chama a fun��o organizaArray
  organizaArray( assentoAviao, SIZE);

  // chama a fun��o printArray
  printArray( assentoAviao, SIZE );

	// pula uma linha
	printf("\n");

	// Pausa o sistema
	system("pause");

  // fim do programa
	return 0;

} // fim main

// fun��o imprime array
void printArray( const int arr[], int size )
{
  // MOSTRA ARRAY NA TELA
  printf( "Assentos por ordem de vendas { " );
  // loop for para impress�o na tela
  for( int a = 0; a < size; a++ )
  {
    // imprime
    printf( "%d ", arr[ a ] );
  } // fim for
  // pula uma linha
  printf( " }\n" );
} // fim da fun��o printArray

// fun��o organizaArray
void organizaArray( int arr[], int size )
{
  // vari�vel
  int aux = 0;

  for( int pass = 1; pass <= size; pass++ )
  {
    for( int ordem = 0; ordem < SIZE; ordem++ )
    {
      if( arr[ ordem ] > arr[ ordem + 1 ] )
      {
        aux = arr[ ordem ];
        arr[ ordem ] = arr[ ordem + 1 ];
        arr[ ordem + 1 ]= aux;
      } // fim if
    } // fim for interno
  } // fim for externo
} // fim fun��o organiza array

// fun��o paesquisa array
int pesquisaArray( const int arr[], int size, int chave )
{
  for( int i = 0; i < size; i++ )
  {
    if( arr[ i ] == chave )
    {
      printf( "%d = %d\n", arr[ i ], chave );
    } // fim if
  } // fim for interno
} // fim for externo

// fun��o passagem
void passagem( int assento )
{
  char secao = ' '; // mostra a se��o

  // imprime
  printf( "{ PASSAGEM A�REA }\n" );

  // verifica o num do assente se est� entre 1-5
  if(assento > 0 && assento < 6)
  {
    // se sim mostra A
    secao = 'A';

  } // fim if
  else // se n�o
  {
    // mostra B
    secao = 'B';

  } // fim else

  // imprime
  printf( "Assento %d, se��o %c\n", assento, secao );
} // fim fun��o passagem
