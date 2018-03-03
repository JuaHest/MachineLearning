#include <stdio.h>

//Define a estrutura que um neurônio terá
struct neuronio {

  float w1, w2;
  float LIMITE;

};

//Utiliza TRUE e FALSE ao invés de números para facilitar a leitura do código
const int FALSE = 0;
const int TRUE = 1;


int verifica(int a, int b, struct neuronio n);




int main(int argc, char* argv){

  int x1, x2;
  int resultado1, resultado2, resultado3;
  x1 = 1;
  x2 = 2;


  //Configurando neurônio n1
  struct neuronio n1;
  n1.w1 = 1.0;
  n1.w2 = 1.5;
  n1.LIMITE = 5.0;

  //Configurando neurônio n2
  struct neuronio n2;
  n2.w1 = 2.0;
  n2.w2 = 1.5;
  n2.LIMITE = 4.5;

  //Configurando neurônio 3
  struct neuronio n3;
  n3.w1 = 1.0;
  n3.w2 = 2.0;
  n3.LIMITE = 3.0;

  //Verifica se o primeiro neurônio ativará  
  resultado1 = verifica(x1, x2, n1);
  
  if (resultado1 == TRUE)
    printf("n1: Ativou!\n");
  else
    printf("n1: Não ativou.\n");

  //Verifica se o segundo neurônio ativará
  resultado2 = verifica (x1, x2, n2);

  if (resultado2 == TRUE)
    printf("n2: Ativou!\n");
  else
    printf("n2: Não ativou.\n");


  //Verifica se o terceiro neurônio ativará
  resultado3 = verifica (resultado1, resultado2, n3);

  if (resultado3 == TRUE)
    printf("n3: Ativou!\n");
  else
    printf("n3: Não ativou.\n");

  
  return 0;
}

int verifica(int a, int b, struct neuronio n){

  float w1, w2, LIMITE;
  w1 = n.w1;
  w2 = n.w2;
  LIMITE = n.LIMITE;

  if ((a*w1) + (b*w2) >= LIMITE)
    return TRUE;
  else
    return FALSE;

}
