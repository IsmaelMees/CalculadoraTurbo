# CalculadoraTurbo
Calculadora de 4 operações

Instale o Dev++; 
Sistema operacional windows; 
Desenvolvido em C 
Autor: Ismael 
Data: 14-11-2021

O sistema de entrada de valor;
  printf("Digite o valor: \n");
        scanf("%f",&valor0); 
    printf("Digite a operacao \n");
    v = getch( );
    printf ("%c\n", v);

Esse valor sofre processamento em:
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
O valor retorna em;
  printf ("%f %c %f = %f \n\n",valor0,v,valor1,contagem);
    break;
