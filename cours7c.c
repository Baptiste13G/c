#include <stdio.h>

/*void remplir(int n){
    if (n>0){
        if(n==1){
            printf("Mettre un pion dans la case %d \n", n);
        }
        else{
            remplir(n-1);
            vider(n-2);
            printf("Mettre un pion dans la case %d \n",n);
            remplir(n-2);
        }
    }
}

void vider(int n){
    if(n>0){
        if(n==1){
            printf("Enlever un pion dans a-la case %d \n",n);
        }
        else{
            vider(n-2);
            printf("Enlever un pion de la case %d \n",n);
            remplir(n-2);
            vider(n-1);
        }
    }
}*/

//Exemple tableau 

int tab_tri(int *tab,int taille){
    int i=0;
    for(;i<taille-1;i++){
        if(tab[i]>tab[i+1]){
            return 0;
        }
    }
    return 1;
}

int main(void){
    int tab_tri(int *tab, int taille);
    int tab[5]={1,2,3,4,5};
    int tab2[5]={2,4,1,7,0};
    printf("%d\n",tab_tri(tab,5));
    printf("%d\n",tab_tri(tab2,5));
    return 0;
}