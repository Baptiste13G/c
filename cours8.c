#include <stdio.h>
#define k 3
#define taille 2000

int carre_magique(int tab[][k]){
    int i,j,somme1,sommeld,sommecd;
    for(int j=0;j<k;j++){
        somme1+=tab[0][j];
    }
    for(i=0;i<k;i++){
        sommeld=sommecd=0;
        for(j=0;j<k;j++){
            sommeld+=tab[i][j];
            sommecd+=tab[j][i];
        }
        if((sommeld!=somme1) || (sommecd!=somme1)){
            return 0;
        }
    }
    sommeld=sommecd=0;
    for(i=0;i<k;i++){
        sommeld+=tab[i][j];
        sommecd+=tab[(k-1)-i][i];
    }
    if((sommeld!=somme1) || (sommecd!=somme1)){
            return 0;
        }
    return 1;
}

unsigned char dora (int t, int pp []){
    if(dora(t-pp[0],pp+1)){
        printf("%d \n",);
    }
    if(t==0){
        printf("Bingo \n");
        return 1;
    }
    else if((t<0) || (pp[0]==-1)){
        printf("No");
        return 0;
    }
}


int main(void){
    int tableau[k][k] = {{1,1,1}, {1,1,1}, {1,1,1}};
    printf("%d",carre_magique(tableau));
    return 0;
}