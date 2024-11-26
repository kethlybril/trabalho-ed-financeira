#include <stdio.h>

//compilação: gcc -o program trabalho.c

float calcula_preco_final(float custo, float lucro){
float preco; 
preco = custo / (1- lucro);
return preco;

}

float calcula_receita(float preco_final, int qtde_vendida){
float receita; 
receita = preco_final * qtde_vendida;
return receita;


}

int main(){

    float custo_produto = 0.0;
    float lucro = 0.0;
    float preco_final = 0.0;
    int qtde_vendida = 0;
    int option = 0;
    float receita = 0.0;

    while (option != 3){
        printf("Escolha uma opção:\n");
        printf("1 - Calcular o preço final de um produto;\n");
        printf("2 - Calcular a receita;\n");
        printf("3 - Sair.\n");
        scanf("%d", &option);

        switch (option){
            case 1:
                printf("Qual o custo do produto?\n");
                scanf("%f", &custo_produto);
                printf("Qual a margem de lucro desejada? (exemplo: 0.20 para 20%%)\n");
                scanf("%f", &lucro);
                preco_final = calcula_preco_final(custo_produto, lucro);
                printf("Preço final: R$ %.2f \n", preco_final);
                break;

            case 2:
                if (preco_final != 0){
                    printf("Qual foi a quantidade vendida?\n");
                    scanf("%d", &qtde_vendida);
                    receita = calcula_receita(preco_final, qtde_vendida);
                    printf("Receita: R$ %.2f \n", receita);
                } else {
                    printf("Você precisa calcular o preço final antes.\n");
                }
                break;

            case 3:
                printf("Encerrando o programa.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
