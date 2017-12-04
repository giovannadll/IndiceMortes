#include <stdio.h>
#include <string.h>

int main()
{
    int numCriancasNascidas = 0;
    int numCriancasMortas = 0;
    int numCriancasMasculinasMortas = 0;
    int numCriancasDoisAnosMortas = 0;

    printf("\n\nEntre com o número de crianças nascidas no período: ");
    scanf("%d", &numCriancasNascidas);

    while(1) {
        char sexoCriancaMorta;

        printf("\n\nDigite o sexo da criança morta (M/F/V):");
        scanf(" %c", &sexoCriancaMorta);

        if (sexoCriancaMorta == 'M' || sexoCriancaMorta == 'F') {
            if (sexoCriancaMorta == 'M') {
                numCriancasMasculinasMortas++;
            }

            int numeroMesesCriancaMorta = 0;
            
            printf("\n\nDigite o numero de meses de vida da criança morta:");
            scanf("%d", &numeroMesesCriancaMorta);

            if (numeroMesesCriancaMorta <= 24) {
                numCriancasDoisAnosMortas++;
            }

            numCriancasMortas++;
        } else if (sexoCriancaMorta == 'V') {
            break;
        } else {
            printf("\n\n !! Sexo invalido. Digite novamente.");
        }
    }

    float porcentagemCriancasMortas = (float) numCriancasMortas / numCriancasNascidas * 100.0;
    printf("\n\n ** Porcentagem de criancas mortas no periodo: %.2f %%\n", porcentagemCriancasMortas);

    float porcentagemCriancasMasculinasMortas = (float) numCriancasMasculinasMortas / numCriancasNascidas * 100.0;
    printf("\n\n ** Porcentagem de criancas do sexo masculino mortas no periodo: %.2f %%\n", porcentagemCriancasMasculinasMortas);

    float porcentagemCriancasDoisAnosMortas = (float) numCriancasDoisAnosMortas / numCriancasNascidas * 100.0;
    printf("\n\n ** Porcentagem de criancas que viveram 24 meses ou menos no periodo: %.2f %%\n", porcentagemCriancasDoisAnosMortas);
}