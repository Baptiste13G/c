#include <stdio.h>
#include <stdlib.h>

int uniforme(int a){
    int t = a%10;
    while(a>0){
        if((a%10)!=t){
            return 0;
        }
        a=a/10;
    }
    return 1;
}

void hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        printf("On déplace de la tour %c vers la tour %c \n",A,C);
    }
    else {
        hanoi(n-1, A, C, B);
        printf("On déplace de la tour %c vers la tour %c \n",A,C);
        hanoi(n-1, B, A, C);
    }
}

void exo3(void){
    int n,i,null=0;
    scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++){
        if(p[i]==0){
            null+=1;
        }
    }
    printf("Le nombre d'entier nul est : %d\n",null);
    printf("Les nombres pairs : \n");
    for(i=0;i<n;i++){
        if((p[i]%2)==0){
            printf("%d \n",p[i]);
        }
    }
    printf("Les nombres impairs : \n");
    for(i=0;i<n;i++){
        if((p[i]%2)==1){
            printf("%d \n",p[i]);
        }
    }
    free(p);
}

int trois_lettres_consecutives(void) {
    int i = 0;
    int *p = malloc(3 * sizeof(int));
    int c;

    while ((c = getchar()) != '$') {
        p[i] = c;

        if (i == 2) {
            if ((p[2] - p[1]) == 1 && (p[1] - p[0]) == 1) {
                free(p);
                return 1;
            }
            p[0] = p[1];
            p[1] = p[2];
        }
        else {
            i++;
        }
    }

    free(p);
    return 0;
}

void remplir(int *tab, int n);
void vider(int *tab, int n);

void remplir(int *tab, int n) {
    if (n == 0) {
        return;
    }
    if (n == 1) {
        tab[0] = 1;
        return;
    }

    remplir(tab, n-1);
    vider(tab, n-2);
    tab[n-1] = 1;
    remplir(tab, n-2);
}

void vider(int *tab, int n) {
    if (n == 0) {
        return;
    }
    if (n == 1) {
        tab[0] = 0;
        return;
    }

    vider(tab, n-2);
    tab[n-1] = 0;
    remplir(tab, n-2);
    vider(tab, n-1);
}

int main(void){
    //printf("%d \n",uniforme(124));
    //hanoi(3,'a','b','c');
    //exo3();
    return 0;
}