#include <stdio.h>

int main(){
    int idade, i = 1, soma = 0, cont = 0;
    char continuar;

    while (cont < 20){
        printf("Insira a idade da pessoa %d ", i);
        scanf("%d", &idade);
        soma += idade;
        cont++;

        printf("Deseja continuar? (S/N)");
        scanf(" %c", &continuar);
        if (continuar == 'N'){
            break;
        }

        i++;
    }

    if(cont > 0){
        float media = (float) soma / cont;
        printf("Media de idade: %.2f anos\n", media);
    } else {
        printf("Nenhuma idade foi informada.\n");
    }
}