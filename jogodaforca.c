#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
    system("title JOGO DA FORCA. 1º período. Engenharia da computação"); //Dá título a tela
    system("color E0");
    int menu;
    setlocale(LC_ALL,"portuguese");//reconhece palavras com acento
    int i;
    char palavrasecreta[20],letra[20], posicao[20]="-" , respostajogo = ' ' , tam, answer=' ',answer1,answer2,answer3,answer4;
    printf("\t\t\t *****************************\n");
    printf("\t\t\t *       JOGO DA FORCA       *\n");
    printf("\t\t\t *****************************\n");
    printf("\t\t\t         ______");
    printf ("\n\t\t\t\t|     |");
    printf ("\n\t\t\t\t|     0");
    printf ("\n\t\t\t\t|    /|\\ ");
    printf ("\n\t\t\t\t|     |");
    printf ("\n\t\t\t\t|    / \\  \n\n\t\t\t ");
    printf ("*******************************");


    printf ("\n\t\t\t* OPCÃO 1:INICIAR O JOGO       *\n");
    printf ("\n\t\t\t* OPCÃO 2:INSTRUÇÕES DO JOGO   *\n");
    printf ("\n\t\t\t* OPÇÃO 3:CRÉDITOS             *\n");
    printf ("\n\t\t\t* OPCÃO 4:SAIR DO JOGO         *\n");
    printf ("\t\t\t********************************");
    printf ("\n\n\t\t\t   \tDIGITE SUA OPÇÃO: ");
    scanf ("%d",&menu);

    int existe = 0, contAcertos=0, vida=6;

    switch(menu){
    case 1:
        vida = 6;
        existe = 0;
        contAcertos=0;
        system ("cls || clear");
        printf ("DIGITE A PALAVRA SECRETA: ");
        scanf ("%s",palavrasecreta);
        strupr(palavrasecreta);//coloca letras em maiusculo
        system ("cls");
        printf ("\t\t\t\t BOA SORTE!\n");
        printf ("\t\tQUE A SORTE ESTEJA SEMPRE AO SEU FAVOR!");
        printf ("\n\nDigite apenas UMA letra:\n");
        printf("\nATENÇÃO! NÃO DIGITE LETRAS REPETIDAS!");

        for(i=0;i<strlen(palavrasecreta);i++)
        posicao[i]='-';
        tam=strlen(palavrasecreta);

        while(vida>0){
            printf("\n %s \n",posicao);
            scanf("%s",letra);
            strupr(letra);

            for (i=0;i<strlen(palavrasecreta);i++){
                if (letra[0]== palavrasecreta[i]){
                    posicao[i]=palavrasecreta[i];
                    existe = 1;
                    contAcertos++;
                }
             }

            if (existe==0){
                if(vida==0){
                    printf("você perdeu o jogo");
                    printf("a palavra era %s", palavrasecreta);
                    break;
                 }
                else
                    system("cls");
                    printf("Não acertou a letra\n");
                    vida --;
            }

            else{
                if(contAcertos==tam){
                    printf("\n\t\t\t\tVOCÊ VENCEU O JOGO!\n");
                    printf("\n\n\t\t\t   A PALAVRA SECRETA ERA: %s\n", palavrasecreta);

                    printf ("\n\nDESEJA JOGAR NOVAMENTE? (S/N) ");
                        fflush(stdin);
                        scanf("%c",&answer);
                        system("cls");
                        answer1='S';
                        answer2= 'N';
                        answer3='n';
                        answer4='s';
                        if (answer==answer1){
                            return main();
                        }
                        if (answer==answer4){
                            return main();
                        }
                        if (answer==answer2){
                            printf ("ATÉ A PRÓXIMA!\n");
                        }
                        if (answer==answer3){
                            printf ("ATÉ A PRÓXIMA!\n");
                        }

                    break;}
            else{
                system ("cls");
                printf("Acertou a letra\n" );

            }
            existe = 0;
            }

            switch(vida){
                 case 6: printf("__   \n|         |   \n|        _|_\n|          \n|        \ \n|         \n| \n| \n| \n\n");
                         printf ("RESTAM SEIS VIDAS\n");
                         printf ("\nDIGITE OUTRA LETRA:\n");
                            break;

                case 5: printf("__   \n|         |   \n|        _|_\n|         0    \n|         \n|       \n| \n| \n| \n\n");
                        printf ("RESTAM CINCO VIDAS\n");
                        printf ("\nDIGITE OUTRA LETRA:\n");
                          break;

                case 4: printf("__   \n|         |   \n|        _|_\n|         0    \n|         |    \n|         \n| \n| \n| \n\n");
                        printf ("RESTAM QUATRO VIDAS\n");
                        printf ("\nDIGITE OUTRA LETRA:\n");
                          break;

                case 3: printf("__   \n|         |   \n|        _|_\n|         0    \n|        /|    \n|         \n| \n| \n| \n\n");
                        printf ("RESTAM TRÊS VIDAS\n");
                        printf ("\nDIGITE OUTRA LETRA:\n");
                          break;

                case 2: printf("__   \n|         |   \n|        _|_\n|         0    \n|        /|\\    \n|         \n| \n| \n| \n\n");
                        printf ("RESTAM DUAS VIDAS\n");
                        printf ("\nDIGITE OUTRA LETRA:\n");
                          break;

                case 1: printf("__   \n|         |   \n|        _|_\n|         0    \n|        /|\\    \n|        /  \n| \n| \n| \n\n");
                        printf ("RESTA APENAS MAIS UMA VIDA...\n");
                        printf ("\nDIGITE OUTRA LETRA:\n");
                          break;

                case 0: printf("__   \n|         |   \n|        _|_\n|         0    \n|        /|\\    \n|        /\ \\ \n| \n| \n| \n\n");
                        system("cls");
                        printf ("\n\t\t\t\tVOCÊ FOI ENFORCADO!\n");
                        printf ("\nA PALAVRA SECRETA ERA: %s",palavrasecreta);
                        printf ("\n\nDESEJA JOGAR NOVAMENTE? (S/N) ");
                        fflush(stdin);
                        scanf("%c",&answer);
                        system("cls");
                        answer1='S';
                        answer2= 'N';
                        answer3='n';
                        answer4='s';
                        if (answer==answer1){
                            return main();
                        }
                        if (answer==answer4){
                            return main();
                        }
                        if (answer==answer2){
                            printf ("ATÉ A PRÓXIMA!\n");
                        }
                        if (answer==answer3){
                            printf ("ATÉ A PRÓXIMA!\n");
                        }
                }
            }

             break;
    case 2:
        system ("cls");
        printf ("\n*************************************************************");
        printf ("\n*INSTRUÇÕES DO JOGO:         \t\t\t\t    *\n*O jogo deve ser jogado por 2 pessoas.                      *\n*Uma das pessoas deve iniciar digitando a palavra secreta.  *\n*Em seguida,o outro jogador tenta adivinhar a palavra que o *\n*primeiro jogador digitou,antes de ser enforcado.\t    *\n ");
        printf ("************************************************************\n");


        printf ("\n\nVOLTAR AO MENU PRINCIPAL? (S/N) ");
        fflush(stdin);

        scanf("%c",&answer);
        system("cls");
        answer1='S';
        answer2= 'N';
        answer3='n';
        answer4='s';
        if (answer==answer1){
            return main();
        }
        if (answer==answer4){
            return main();
                            }
        if (answer==answer2){
            printf ("ATÉ A PRÓXIMA!\n");
                            }
        if (answer==answer3){
            printf ("ATÉ A PRÓXIMA!\n");
          }
        break;

    case 3:
        system ("cls");
        printf ("\n\t ***************************************************************");
        printf("\n\t *Produzido por Gabrielly Moura, Gizele Rodrigues e Glacy Gomes *\n");
        printf ("\t ***************************************************************\n");

        printf ("\n\nVOLTAR AO MENU PRINCIPAL? (S/N) ");
        fflush(stdin);

        scanf("%c",&answer);
        system("cls");
        answer1='S';
        answer2= 'N';
        answer3='n';
        answer4='s';
        if (answer==answer1){
            return main();
        }
        if (answer==answer4){
            return main();
                            }
        if (answer==answer2){
            printf ("ATÉ A PRÓXIMA!\n");
                            }
        if (answer==answer3){
            printf ("ATÉ A PRÓXIMA!\n");
          }

        break;

    case 4:
        system ("cls");
        printf ("ATÉ A PRÓXIMA!\n");
        printf("PRESSIONE QUALQUER TECLA PARA CONTINUAR... \n");
        break;
    default:
        printf("Opção inválida");
    }
}
