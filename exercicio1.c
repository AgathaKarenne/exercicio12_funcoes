/*1. Fazer um programa que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento,
 solicita a opção desejada e imprime o valor total das prestações (se houverem).

a) Opção: a vista com 10% de desconto

b) Opção: em duas vezes (preço da etiqueta)

c) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).

OBS: fazer uma função que imprime as opções, solicita a opção desejada e retorna a opção escolhida.
 No programa principal, testar a opção escolhida e ativar a função correspondente (uma função para cada opção). */

 #include<stdio.h>

int escolherOpcao(int opcao);
void aVista(float totalCompra);
void parcelarDuas(float totalCompra);
//void parcelarMaisvezes();

main(){

    int opcaoEscolhida;
    float totalCompra;
    printf("informe o valor total da compra");
    scanf("%f", &totalCompra);

    opcaoEscolhida = escolherOpcao();

    switch (opcaoEscolhida)
    {
    case 1:
        aVista();
        break;
    case 2:
        parcelarDuas();
        break;
    case 3:
        parcelarMaisvezes();
        break;
    }
int escolherOpcao(int opcao){
    do{
    printf("1" - A vista");
    printf("\n2 - parcelado mais duas vezes");
    printf("\n3 - parcelado tres a 10 vezes para compras inferiores a 100,00");
    printf("\n\ndigite a opcao escolhida");
    scanf("%d", &opcao);
    if(opcao < 1 || opcao > 10){
        printf("opcao invalida\n");
    }
    }while(opcao < 1|| opcao > 10);
}
void aVista(float totalCompra){
    float desconto = (totalCompra * 0.10);
    float  valorFinal = totalCompra - desconto;
    printf("Valor do desconto R$%.2f", desconto);
    printf("\nValor final da compra R$%.2f", valorFinal);
}
void parcelarDuasVezes(float totalCompra){

}