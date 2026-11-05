#include <stdio.h>
#include <stdlib.h>
#define k 6
#define Taille 2000
int tous_differents(int *t){
    int i,j;
    for(i=0;i<k;i++){
        for(j=i+1;j<k;j++){
            if(t[i]==t[j]){
                return 0;
            }
        }
    }
    return 1;
}

int somme_tab(int *t){
    if(t[0]==-1){
        return 0;
    }
    else{
        return somme_tab(t+1)+t[0];
    }
}

int compare(int a, int b){
    return (a>b)?1:((a<b)?-1:0);
}

int compare2(int a, int b){
    return (a>b)-(a<b);
}

int plus_grand(int a, int b){
    return (a>b)*a + (b>=a)*b;
}

void liberer(int **p){ //Quand on modifie un entier on met une étoile, pour un pointeur on met 2 étoiles.
    free(*p);
    *p=NULL;
}

unsigned char contient_deux_opposes(int tab[], int n){ //n est la taille du tableau
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((tab[i]+tab[j])==0){
                return 1;
            }
        }
    }
    return 0;
}

unsigned char contient_deux_opposes2(int tab[], int n){ //tableau trié par ordre croissant
    int i=0,j=n-1;
    while((tab[i]<0) && (tab[j]>0)){
        if(tab[i]==-tab[j]){
            return 1;
        }
        if(tab[i]+tab[j]<0){
            i+=1;
        }
        else{
            j-=1;
        }
    }
    return 0;
}

void fusion(int tab1[k], int tab2[k], int tab3[2*k]){
    int i,a=0,b=0;
    for(i=0;i<2*k;i++){
        if((a<k) && (b<k)){
            if(tab1[a]<tab2[b]){
                tab3[i]=tab1[a];
                a+=1;
            }
            if(tab1[a]>tab2[b]){
                tab3[i]=tab2[b];
                b+=1;
            }
        }
        if(a==k){
            tab3[i]=tab2[b];
            b+=1;
        }
        if(b==k){
            tab3[i]=tab1[a];
            a+=1;
        }
    }
}

//exo 7 dora vu en cours

int main(void){
    int tab[5]={1,3,5,5,-1};
    printf("%d \n",tous_differents(tab));

    printf("%d \n",somme_tab(tab));
    int *a;
    a=(int *) malloc(k*sizeof(int));
    for(int i=0;i<4;i++){
        a[i]=i;
    }
    a[4]=-1;
    printf("%d \n",somme_tab(a));

    void liberer(int **p);
    int *p=(int *)malloc(Taille*sizeof(int));
    liberer(&p);
    printf("La nouvelle valeur du pointeur p est : %p \n",p);

    int tab2[5]={1,5,-5,3,2};
    int tab3[5]={1,5,5,3,2};
    int tab4[6]={-5,-3-2,1,2,3};
    int tab5[6]={4,5,6,7,8,9};
    printf("Tableau 2 %d \n",contient_deux_opposes(tab2,5));
    printf("Tableau 3 %d \n",contient_deux_opposes(tab3,5));
    printf("Tableau 4 %d \n",contient_deux_opposes(tab4,5));
    printf("Tableau 5 %d \n",contient_deux_opposes(tab5,5));

    int tab6[12];
    fusion(tab4,tab5,tab6);
    for(int i = 0;i<12;i++){
        printf("%d \n", tab6[i]);
    }

    return 0;
}