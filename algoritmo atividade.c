#include <stdio.h>

int main() {
    int tempoBom, amigoDisponivel, dinheiroSuficiente;
    
    printf("O tempo esta bom (1 para Sim, 0 para Nao)? ");
    scanf("%d", &tempoBom);
    
    printf("O seu amigo esta livre (1 para sim, 0 para nao)? ");
    scanf("%d", &amigoDisponivel);
    
    printf("Voce possui dinheiro suficiente (1 para sim, 0 para nao)? ");
    scanf("%d", &dinheiroSuficiente);

    if (tempoBom && amigoDisponivel && dinheiroSuficiente) {
        printf("Voce vai para o passeio!\n");
    } else if (!tempoBom || !amigoDisponivel || !dinheiroSuficiente) {
        printf("Voce nao vai para o passeio.\n");
    } 
    
    return 0;
}

