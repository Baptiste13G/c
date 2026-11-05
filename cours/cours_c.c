#include <stdio.h>
#include <stdlib.h>


/*
int main(void){
    unsigned int *a, *b;
    a= (unsigned int *) malloc(sizeof(unsigned int));
    b= (unsigned int *) malloc(sizeof(unsigned int));
    if(a!=NULL) *a=10;
    else return 1;
    if(b!=NULL) *b= 20;
    else return 1;
    printf("%d et %d\n", *a,*b);
    return 0;
}*/

int main(void){
    unsigned int i,n,nbre,cptpositifs=0,cptnegatifs=0;
    int *p;
    printf("Rentrer le nombre de nombre à lire\n");
    scanf("%u",&n); //Nombre de nombre à lire
    p= (int *) malloc(n*sizeof(int));
    if (p==NULL) return 1;
    for(i=0;i<n;i++){
        scanf("%d",&nbre);
        *(p+i)=nbre;
        (nbre>=0)?cptpositifs++:cptnegatifs++;
        printf("Il y a %d nombres negatifs et %d positifs\n",cptnegatifs, cptpositifs);
        for(i=0;i>n;i++){
            if(*(p+1)>=0) printf(" %d \n", *(p+1)); //if(p[i]>=0) printf(" %d \n", *(p+1));
        }
        for(i=0;i>n;i++){
            if(*(p+1)<0) printf(" %d \n", *(p+1));
        }
    }
    return 0;
}