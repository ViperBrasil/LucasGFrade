#include <stdio.h>
#include <stdlib.h>

int main()
{

    char A [20], B [20];
    int a, b, c, d, e;
do{
    printf("Digite a variavel p (texto):\n");
    scanf("%s", &A);
    printf("1 - Verdadeiro; 0 - Falso:\n");
    scanf("%d", &a);
    printf("Digite a variavel q (texto):\n");
    scanf("%s", &B);
    printf("1 - Verdadeiro; 0 - Falso:\n");
    scanf("%d", &b);
    printf("\n\n");
    printf("Escolha a operacao a ser realizada no MENU:\n\n\n");
    printf("MENU\n\n");
    printf("1- ~p \n");
    printf("2- ~q \n");
    printf("3- p^q\n");
    printf("4- pvq\n");
    printf("5- SE p, ENTAO q\n");
    printf("6- p->q\n");
    printf("7- p<->q\n");
    printf("8- SAIR\n\n");


  scanf("%d", &c);
 printf("\n");

  switch(c)
  {

    case 1:
    printf("NAO %s\n", A);
    if (a == 1){
    printf("%s eh falso\n\n", A);
    }
    if (a == 0){
        printf("%s eh verdadeiro\n\n", A);
    }
    printf("Realizar outra operacao?\n");
    printf("NAO - 0 / SIM - 1\n\n");
    scanf("%d", &e);
    printf("\n");
    break;

    case 2:
    printf("NAO %s\n", B);
     if (b == 1){
    printf("%s eh falso\n\n", B);
    }
    if (b == 0){
        printf("%s eh verdadeiro\n\n", B);
    }
    printf("Realizar outra operacao?\n");
    printf("NAO - 0 / SIM - 1\n\n");
    scanf("%d", &e);
    printf("\n");
    break;

    case 3:
    printf("%s E %s\n", A, B);
    if (a == 1 && b == 1){
        printf("O resultado logico eh Verdadeiro\n\n");
    }
    if (a == 1 && b == 0){
    printf("O resultado logico eh Falso\n\n");
    }
      if (a == 0 && b == 1){
    printf("O resultado logico eh Falso\n\n");
    }
      if (a == 0 && b == 0){
    printf("O resultado logico eh Falso\n\n");
    }
    printf("Realizar outra operacao?\n");
    printf("NAO - 0 / SIM - 1\n\n");
    scanf("%d", &e);
     printf("\n");
    break;

    case 4:
    printf("%s OU %s\n", A, B);
     if (a == 0 && b == 0){
        printf("O resultado logico eh Falso\n\n");
    }else{
    printf("O resultado logico eh Verdadeiro\n\n");
    }
    printf("Realizar outra operacao?\n");
    printf("NAO - 0 / SIM - 1\n\n");
    scanf("%d", &e);
     printf("\n");
    break;

    case 5:
    printf("SE %s, ENTAO %s\n", A, B);
    if (a == 1 && b == 0){
     printf("O resultado logico eh Falso\n\n");
    }else{
    printf("O resultado logico eh Verdadeiro\n\n");
    }
    printf("Realizar outra operacao?\n");
    printf("NAO - 0 / SIM - 1\n\n");
    scanf("%d", &e);
     printf("\n");
    break;

    case 6:
    printf("%s SE, E SOMENTE SE %s\n", A, B);
    if (a == 1 && b == 1){
        printf("O resultado logico eh Verdadeiro\n\n");
    }
    if (a == 0 && b == 0){
        printf("O resultado logico eh Verdadeiro\n\n");
    }
    if (a == 1 && b == 0){
        printf("O resultado logico eh Falso\n\n");
    }
    if (a == 0 && b == 1){
        printf("O resultado logico eh Falso\n\n");
    }
    printf("Realizar outra operacao?\n");
    printf("NAO - 0 / SIM - 1\n\n");
    scanf("%d", &e);
     printf("\n");
    break;

    case 7:
    printf("OU %s OU %s\n", A, B);
    if (a == 1 && b == 1){
        printf("O resultado logico eh Falso\n\n");
    }
    if (a == 0 && b == 0){
        printf("O resultado logico eh Falso\n\n");
    }
    if (a == 1 && b == 0){
        printf("O resultado logico eh Verdadeiro\n\n");
    }
    if (a == 0 && b == 1){
        printf("O resultado logico eh Verdadeiro\n\n");
    }
    printf("Realizar outra operacao?\n");
    printf("NAO - 0 / SIM - 1\n\n");
    scanf("%d", &e);
     printf("\n");
    break;

 case 8:
     e = 0;
    break;
          
}
}while(e == 1);
}
