#include <stdio.h>


int main() {
    
    //inicialização das variaveis

    int i,j,k;
    char linha[10]={'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10];
    
    //Tabuleiro sendo completo por 0
    
    for ( i = 0; i < 10; i++){
        for(j=0; j<10 ; j++){
            tabuleiro[i][j] = 0;
        }
    }
    
    //Navio 1 horizontal

    int linhanavio1 = 5;
    int colunanavio1 = 2;

    for (k = 0; k < 3; k++) {
        tabuleiro[linhanavio1][colunanavio1 + k] = 3;
    }
    //Navio 2 Vertical

    int linhanavio2 = 1;
    int colunanavio2 = 5;
    
    for (int k = 0; k < 3; k++) {
        tabuleiro[linhanavio2 + k][colunanavio2] = 3;
    
    }

    //Imprimindo a guia das colunas

    printf("  ");

    for ( i = 0; i < 10; i++)
    {
        printf("  %c",linha[i]);
    }
        printf("\n");
    
    //imprimindo tabuleiro com os navios
        
    for ( i = 0; i < 10; i++){
        printf("%2d", i + 1);
        for(j=0; j<10 ; j++){
            printf("  %d",tabuleiro[i][j]);
       }
        printf("\n");
    }

    
    
    




    return 0;
}
