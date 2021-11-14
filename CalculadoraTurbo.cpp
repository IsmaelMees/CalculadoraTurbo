#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
setlocale(LC_ALL, "BR");

float valor0,valor1,contagem;
char v;
short circulo = 0, a = '=',b = '.';

    printf("Digite o valor: \n");
        scanf("%f",&valor0); 

   while(circulo == 0)
{
    partida:
      	
    printf("Digite a operacao \n");
    v = getch( );
    printf ("%c\n", v);

   if(v == a)
{
    printf("solucao: %2.f", contagem);
    return 0; 
}	else if(v == b){
       system ("cls");
       scanf("%f",&valor0);
}

    printf("Digite o valor: \n");
        scanf("%f",&valor1);

    switch (v)
{
   case '+':
    contagem = (valor0+valor1);
    printf ("%f %c %f = %f \n\n",valor0,v,valor1,contagem);
    break;

    case '-':
    contagem = (valor0-valor1);
    printf ("%f %c %f = %f \n\n",valor0,v,valor1,contagem);
    break;

    case '*':
    contagem = (valor0*valor1);
    printf ("%f %c %f = %f \n\n",valor0,v,valor1,contagem);
    break;

    case '/':
    contagem = (valor0/valor1);
    printf ("%f %c %f = %f \n\n",valor0,v,valor1,contagem);
    break;

	default:
    printf ("erro\n");
    circulo = 1;
    break;

}
    valor0 = contagem;
}
      goto partida;

return 0;
}
