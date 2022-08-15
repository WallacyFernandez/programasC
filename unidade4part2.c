#include <stdio.h>
#include <conio.h>

int main() {

int i, j, P1[3][5], P2[3][5];
system("color E");

    printf("Jogador 1, quais os poderes de seus monstros?\n");
        putchar('\n');
        for ( i = 0; i <3; i++){
            for (j = 0; j < 5; j++){
                scanf("%i", &P1[i][j]);
            }
            putchar('\n');
        }
        for ( i = 0; i <3; i++){
            for (j = 0; j < 5; j++){
                printf("\t%d", P1[i][j]);
            }
            putchar('\n');
        }
        getch();
        system("cls");
        
        printf("Jogador 2, quais os poderes de seus monstros?\n");
        putchar('\n');
        for ( i = 0; i <3; i++){
            for (j = 0; j < 5; j++){
                scanf("%i", &P2[i][j]);
            }
            putchar('\n');
        }
        for ( i = 0; i <3; i++){
            for (j = 0; j < 5; j++){
                printf("\t%d", P2[i][j]);
            }
            putchar('\n');
        }
        getch();
        system("cls");

printf("\n\n Monstros mais fortes da primeira batalha.\n\n\n\n");
        if(P1[0][0] > P2[0][0]){
            printf("O ataque fisico do monstro 1 do jogador 1 e maior que do jogador 2\n\n");
        }   else{
                printf("O ataque fisico do monstro 1 do jogador 2 e maior que do jogador 1\n\n");
            }
                if(P1[0][1] > P2[0][1]){
                    printf("A defesa fisica do monstro 1 do jogador 1 e maior que do jogador 2\n\n");
                }   else{
                        printf("A defesa fisica do monstro 1 do jogador 2 e maior que do jogador 1\n\n");
                    }   
                        if(P1[0][2] > P2[0][2]){
                            printf("A magia do monstro 1 do jogador 1 e maior que do jogador 2\n\n");
                        }   else{
                                printf("A magia do monstro 1 do jogador 2 e maior que do jogador 1\n\n");
                            }  
                                if(P1[0][3] > P2[0][3]){
                                    printf("A defesa magica do monstro 1 do jogador 1 e maior que do jogador 2\n\n");
                                }   else{
                                        printf("A defesa magica do monstro 1 do jogador 2 e maior que do jogador 1\n\n");
                                    }  
                                        if(P1[0][4] > P2[0][4]){
                                          printf("A velocidade do monstro 1 do jogador 1 e maior que do jogador 2\n\n");
                                        }   else{
                                                printf("A velocidade do monstro 1 do jogador 2 e maior que do jogador 1\n\n");
                                            }

printf("\n monstros mais fortes sengunda batalha.\n\n\n\n");
        if(P1[1][0] > P2[1][0]){
            printf("O ataque fisico do monstro 2 do jogador 1 e maior que do jogador 2\n\n");
        }   else{
                printf("O ataque fisico do monstro 2 do Player 2 e maior que do Player 1\n\n");
            }
                if(P1[1][1] > P2[1][1]){
                    printf("A defesa fisica do monstro 2 do jogador 1 e maior que do jogador 2\n\n");
                }   else{
                        printf("A defesa fisica do monstro 2 do jogador 2 e maior que do jogador 1\n\n");
                    }   
                        if(P1[1][2] > P2[1][2]){
                            printf("A magia do monstro 2 do jogador 1 eh maior que do jogador 2\n\n");
                        }   else{
                                printf("A magia do monstro 2 do jogador 2 e maior que do jogador 1\n\n");
                            }  
                                if(P1[1][3] > P2[1][3]){
                                    printf("A defesa Magica do monstro 2 do jogador 1 e maior que do jogador 2\n\n");
                                }   else{
                                        printf("A defesa magica do monstro 2 do jogador 2 e maior que do jogador 1\n\n");
                                    }  
                                        if(P1[1][4] > P2[1][4]){
                                          printf("A velocidade do monstro 2 do jogador 1 e maior que do jogador 2\n\n");
                                        }   else{
                                                printf("A velocidade do monstro 2 do jogador 2 e maior que do jogador 1\n\n");
                                            }  


    printf("\n Monstros mais fortes da terceira batalha.\n\n\n\n");
        if(P1[2][0] > P2[2][0]){
            printf("O ataque fisico do monstro 3 do jogador 1 e maior que do jogador 2\n\n");
        }   else{
                printf("O ataque fisico do monstro 3 do jogador 2 e maior que do jogador 1\n\n");
            }
                if(P1[2][1] > P2[2][1]){
                    printf("A defesa fisica do monstro 3 do jogador 1 e maior que do jogador 2\n\n");
                }   else{
                        printf("A defesa fisica do monstro 3 do jogador 2 e maior que do jogador 1\n\n");
                    }   
                        if(P1[2][2] > P2[2][2]){
                            printf("A magia do monstro 3 do jogador 1 e maior que do jogador 2\n\n");
                        }   else{
                                printf("A magia do monstro 3 do jogador 2 e maior que do jogador 1\n\n");
                            }  
                                if(P1[2][3] > P2[2][3]){
                                    printf("A defesa magica do monstro 3 do jogador 1 e maior que do jogador 2\n\n");
                                }   else{
                                        printf("A defesa magica do monstro 3 do jogador 2 e maior que do jogador 1\n\n");
                                    }  
                                        if(P1[2][4] > P2[2][4]){
                                          printf("A velocidade do monstro 3 do jogador 1 e maior que do jogador 2\n\n");
                                        }   else{
                                                printf("A velocidade do monstro 3 do jogador 2 e maior que do jogador 1\n\n");
                                            }  



getch();

return 0;
}
