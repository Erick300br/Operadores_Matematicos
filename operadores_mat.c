#include <stdio.h>

int main(){
    int pao, idade, num1;
    
    printf("Enquanto andava pela rua, um mago veio a ti e perguntou...\n");
    printf("Mago: Diga-me, diga-me, quantos pães acha que tenho?\n");
    printf("O Mago é um ancião de cabelos brancos, sujo que usa roupas velhas, se parece com um mendigo\n");
    printf("Diga quantos pães ele tem: ");
    scanf("%d", &pao);
    printf("Mago: %d? Comassim? Tudo isso? Só isso?\n", pao);
    printf("A loucura do velho traz uma pergunta, qual a sua idade: ");
    scanf("%d", &idade);
    printf("Então você tem %d anos, certo? Ou não? Esses não eram os pães? Mas a pergunta era a idade do velho ou a sua?\n", pao);
    pao++;
    printf("Mago: Ora, eu tenho %d pães!\n", pao);
    printf("Mago: Mas e você, quantos tem? Você parece muito pobre e coitado!\n");
    printf("Quantos pães você tem: ");
    scanf("%d", &num1);
    num1--;
    printf("Então você tem %d pães e tem %d anos de idade?\n", pao, num1);
    printf("O Mago possui %d pães, ou será que não?\n", idade);
    printf("Mas afinal, ele é um Mago e te amaldiçoou com a loucura por diversão.\n");
    printf("Mago: Seu troxa, KKKKKALLALALA\n");
    printf("O Mago vai embora com braços levantados e apenas com o dedo médio da mão erguido para você.\n");
    printf("FIM :)");
    return 0;
}