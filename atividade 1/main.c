#include <stdio.h>

float caucularIMC(float peso, float altura) {
    return peso / (altura * altura);
}
// FunÇão classificar o IMC 
void classificarIMC(float imc){
    if (imc < 18.5){
        printf("Magreza\n");
    } else if(imc < 25){
        printf("Normal\n");
    } else if(imc < 30){
        printf("Sobrepeso\n");
    } else if(imc < 35){
        printf("Obesidade grau I\n");
    } else if(imc < 40) {
        printf("Obesidade grau II\n");
    } else {
        printf("Obesidade grau III\n");
    }  
}
int main() {
    float peso, altura, imc;

    // Solitar peso e altura ao usuario 
    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);
    printf("Digite sua altura em cm: ");
    scanf("%f", &altura);

    //converter altura de cm pra m
    altura /= 100;

    // Caucular IMC
    imc = caucularIMC(peso, altura);

    //Classificar IMC
    printf("Seu IMC: %.2f\n", imc);
    classificarIMC(imc);
}