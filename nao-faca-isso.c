#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Uma grande emissora de televisão quer fazer uma enquete entre os seus telespectadores para saber qual o melhor jogador após cada jogo. Para isto, faz-se necessário o desenvolvimento de um programa, que será utilizado pelas telefonistas, para a computação dos votos. Desenvolver este programa para computar cada voto, na qual a telefonista digitará um número, entre 1 e 11 , correspondente ao número da camisa do jogador. Um número de jogador igual zero, indica que a votação foi encerrada. Se um número inválido for digitado, o programa deve ignorá-lo, mostrando uma breve mensagem de aviso, e voltando a pedir outro número. Após o final da votação, o programa deverá exibir:
//a) O total de votos computados; ok
//b) Os números dos jogadores que receberam votos e a quantidade para cada um deles; ok
//c) O percentual de votos de cada um destes jogadores; ok
//d) O número do jogador escolhido como o melhor jogador da partida, juntamente com o número de votos e o percentual de votos dados a ele. Votos inválidos e o zero final não devem ser computados como votos. ok


int main()
{
    int contador, num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, voto, votos, votados, percentagem;
    contador = 1; num1 = 0; num2 = 0; num3 = 0; num4 = 0; num5 = 0; num6 = 0; num7 = 0; num8 = 0; num9 = 0; num10 = 0; num11 = 0; votados = 0;
    
    
    do {
        printf("Qual o melhor jogador? Voto número %d:\n", contador);
        scanf("%d",&voto);
        if (voto != 0) {
            if (voto == 1) {
                num1++;
            }
            else if (voto == 2) {
                num2++;
            }
            else if (voto == 3) {
                num3++;
            }
            else if (voto == 4) {
                num4++;
            }
            else if (voto == 5) {
                num5++;
            }
            else if (voto == 6) {
                num6++;
            }
            else if (voto == 7) {
                num7++;
            }
            else if (voto == 8) {
                num8++;
            }
            else if (voto == 9) {
                num9++;
            }
            else if (voto == 10) {
                num10++;
            }
            else if (voto == 11) {
                num11++;
            }
            else {
                printf(" ** Digite um número de 1 a 11, espertalhão. ** \n\n");
                contador --;
            }
        }
        

        contador++;
    } while (voto != 0);
    
    printf("\n");
    votos = contador - 2;
    printf("Votos para jogador 1: %d\n", num1);
    printf("Votos para jogador 2: %d\n", num2);
    printf("Votos para jogador 3: %d\n", num3);
    printf("Votos para jogador 4: %d\n", num4);
    printf("Votos para jogador 5: %d\n", num5);
    printf("Votos para jogador 6: %d\n", num6);
    printf("Votos para jogador 7: %d\n", num7);
    printf("Votos para jogador 8: %d\n", num8);
    printf("Votos para jogador 9: %d\n", num9);
    printf("Votos para jogador 10: %d\n", num10);
    printf("Votos para jogador 11: %d\n", num11);
    
    if (num1 > 0) {
        votados++;
    }
    if (num2 > 0) {
        votados++;
    }
    if (num3 > 0) {
        votados++;
    }
    if (num4 > 0) {
        votados++;
    }
    if (num5 > 0) {
        votados++;
    }
    if (num6 > 0) {
        votados++;
    }
    if (num7 > 0) {
        votados++;
    }
    if (num8 > 0) {
        votados++;
    }
    if (num9 > 0) {
        votados++;
    }
    if (num10 > 0) {
        votados++;
    }
    if (num11 > 0) {
        votados++;
    }
    printf("\n");
    
    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 && num1 > num6 && num1 > num7 && num1 > num8 && num1 > num9 && num1 > num10 && num1 > num11 ) {
        printf("Jogador número 1 foi o mais votado!\n\n");
        percentagem = num1/votos;
        percentagem = (100*num1)/votos;

    }
    else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5 && num2 > num6 && num2 > num7 && num2 > num8 && num2 > num9 && num2 > num10 && num2 > num11 ) {
        printf("Jogador número 2 foi o mais votado!\n\n");
        percentagem = num2/votos;
        percentagem = (100*num2)/votos;

    }
    else if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5 && num3 > num6 && num3 > num7 && num3 > num8 && num3 > num9 && num3 > num10 && num3 > num11 ) {
        printf("Jogador número 3 foi o mais votado!\n\n");
        percentagem = num3/votos;
        percentagem = (100*num3)/votos;

    }
    else if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5 && num4 > num6 && num4 > num7 && num4 > num8 && num4 > num9 && num4 > num10 && num4 > num11 ) {
        printf("Jogador número 4 foi o mais votado!\n\n");
        percentagem = num4/votos;
        percentagem = (100*num4)/votos;

    }
    else if (num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4 && num5 > num6 && num5 > num7 && num5 > num8 && num5 > num9 && num5 > num10 && num5 > num11 ) {
        printf("Jogador número 5 foi o mais votado!\n\n");
        percentagem = num5/votos;
        percentagem = (100*num5)/votos;

    }
    else if (num6 > num1 && num6 > num2 && num6 > num3 && num6 > num4 && num6 > num5 && num6 > num7 && num6 > num8 && num6 > num9 && num6 > num10 && num6 > num11 ) {
        printf("Jogador número 6 foi o mais votado!\n\n");
        percentagem = num6/votos;
        percentagem = (100*num6)/votos;

    }
    else if (num7 > num1 && num7 > num2 && num7 > num3 && num7 > num5 && num7 > num4 && num7 > num6 && num7 > num8 && num7 > num9 && num7 > num10 && num7 > num11 ) {
        printf("Jogador número 7 foi o mais votado!\n\n");
        percentagem = num7/votos;
        percentagem = (100*num7)/votos;

    }
    else if (num8 > num1 && num8 > num2 && num8 > num3 && num8 > num5 && num8 > num6 && num8 > num7 && num8 > num4 && num8 > num9 && num8 > num10 && num8 > num11 ) {
        printf("Jogador número 8 foi o mais votado!\n\n");
        percentagem = num8/votos;
        percentagem = (100*num8)/votos;

    }
    else if (num9 > num1 && num9 > num2 && num9 > num3 && num9 > num5 && num9 > num6 && num9 > num7 && num9 > num8 && num9 > num4 && num9 > num10 && num9 > num11 ) {
        printf("Jogador número 9 foi o mais votado!\n\n");
        percentagem = num9/votos;
        percentagem = (100*num9)/votos;

    }
    else if (num10 > num1 && num10 > num2 && num10 > num3 && num10 > num5 && num10 > num6 && num10 > num7 && num10 > num8 && num10 > num9 && num10 > num4 && num10 > num11 ) {
        printf("Jogador número 10 foi o mais votado!\n\n");
        percentagem = num10/votos;
        percentagem = (100*num10)/votos;

    }
    else if (num11 > num1 && num11 > num2 && num11 > num3 && num11 > num5 && num11 > num6 && num11 > num7 && num11 > num8 && num11 > num9 && num11 > num10 && num11 > num4 ) {
        printf("Jogador número 11 foi o mais votado!\n\n");
        percentagem = (100*num11)/votos;
    }
    else {
        printf("Empate\n\n");

    }
    
    
    printf("com %d porcento de %d votos\n\n", percentagem, votos);
    printf("Jogadores que receberam votos: %d\n", votados);
    
    // regra de tres da percentagem: votos total / votos no vencedor = 100% / x%
    // x% = (100% * votos no vencedor) / votos total
    
}