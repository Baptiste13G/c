//Exercice 1

#include <stdio.h>
/*
int main (void)
{
    int i;
    i=-3;
    while (i){
    printf("La valeur de i est %d. \n", i);
    i++;}
    return(0);
}

//Exercice 2

#include <stdio.h>

int main (void){
    char x;
    scanf("%c", &x);
    switch (x)
    {
    case 'A':
        printf("10");
        break;
    case 'B':
        printf("11");
        break;
    case 'C':
        printf("12");
        break;
    case 'D':
        printf("13");
        break;
    case 'E':
        printf("14");
        break;
    case 'F':
        printf("15");
        break;
    case '1':
        printf("1");
        break;
    case '2':
        printf("2");
        break;
    case '3':
        printf("3");
        break;
    case '4':
        printf("4");
        break;
    case '5':
        printf("5");
        break;
    case '6':
        printf("6");
        break;
    case '7':
        printf("7");
        break;
    case '8':
        printf("8");
        break;
    case '9':
        printf("9");
        break;   
    
    default:
        printf("Ceci n'est pas un caractère hexadecimal");
    }
    return(0);
}

//Exercice 2.1

#include <stdio.h>

int main (void){
    char x;
    scanf("%c", &x);
    switch (x)
    {
    case 'A':

    case 'B':

    case 'C':

    case 'D':

    case 'E':

    case 'F':
        printf("%c", x);
        break;
    case '0':

    case '1':

    case '2':

    case '3':

    case '4':

    case '5':

    case '6':

    case '7':

    case '8':

    case '9':
        printf("%d",x-'0');
        break;   
    
    default:
        printf("Ceci n'est pas un caractère hexadecimal");
    }
    return(0);
}

//Exercice 3

#include <stdio.h>
int main(void){
    unsigned int res=0;
    while(getchar()!='\n'){
        res+=1;
    }
    printf("%u",res);
    return(0);
}

//Exercice 4 (sauté car pas compris / trop compliqué)

#include <stdio.h>
int main(void){
    unsigned int n;
    scanf("%u",&n);
    for(int i=0;i<n;i++){

    }
}*/

//Exercice 9

#include <stdio.h>
int main(void){
    unsigned int n;
    unsigned int enleve;
    printf("Avec combien d'allumettes voulez-vous jouer ?\n");
    scanf("%u",&n);
    int i=1;
    while(n>0){
        if(i%2==1){
            printf("Joueur 1 va jouer.\n");
        }
        else{
            printf("Joeur 2 va jouer.\n");
        }
        printf("Combien d'allumettes enleves tu ? (1, 2 ou 3)\n");
        scanf("%u",&enleve);
        n=n-enleve;
        printf("Il reste %u allumettes.\n", n);
        i=i+1;
    }
    if(i%2==0){
        printf("Joueur 1 a perdu.\n");
    }
    else{
        printf("Joueur 2 a perdu.\n");
    }
}