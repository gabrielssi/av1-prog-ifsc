#include <stdio.h>

int main ()
{
    int quilometros;
    int refeicoes;
    int hospedagem;
    float gastototal;
    float ressarcimento;
    float custoefetivo;

    printf ("Quantos quilometros foram rodados: ");
    scanf ("%d", &quilometros);
    printf ("Quantidade de refeicoes: ");
    scanf ("%d", &refeicoes);
    printf ("Quantidade de hospedagem: ");
    scanf ("%d", &hospedagem);

    gastototal = quilometros * 28.0/100.0 + refeicoes * 50 + hospedagem * 200;
    ressarcimento = (refeicoes * 50 + hospedagem * 200) / 2;
    custoefetivo = gastototal - ressarcimento;

    printf ("\nGASTO TOTAL:R$ %0.2f", gastototal);
    printf ("\nRESSARCIMENTO:R$  %0.2f", ressarcimento);
    printf ("\nCUSTO EFETIVO:R$ %0.2f", custoefetivo);

    return 0;
}
