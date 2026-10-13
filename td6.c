#include <stdio.h>
#include <stdlib.h>

void hanoi(int n,int debut, int milieu, int fin){
    if(n==1){
        printf("Déplacement de %d vers %d.\n",debut,fin);
    }
    else{
        hanoi(n-1,debut,fin,milieu);
        printf("Déplacement de %d vers %d.\n",debut,fin);
        hanoi(n-1,milieu,debut,fin);
    }
}

int puis(int a, int b){
    int res= 1; 
    if(b==0){
        return res;
    }
    else{
        for(int i =0;i<b;i++){
            res=res*a;
        }
        return res;
    }
}

int puis_rec(int a, int b){
    if(b==0){
        return 1;
    }
    else{
        if(b%2==0){
            int pair=puis_rec(a,b/2);
            return pair*pair;
        }
        else{
            return a*puis_rec(a,b-1);
        }
    }
}

int mystere(int n){
    int i, s=0;
    for(i=1;i<=n;i++){
        s=s+i/n;
    }
    return s;
}

int f(int *a, int n){
    if(n==1){
        return 1;
    }
    if(a[0]>a[1]){
        return 0;
    }
    else{
        return f(a+1,n-1);
    }
}

void vider(int n){
if(n==1){

}
if(n==2 && n-1 vide){
    
}
}

void remplir(int n){

}

int main(void){
    //hanoi(3,1,2,3);
    //printf("%d",puis(2,4));
    //printf("%d",puis_rec(2,4));
    //printf("%d",mystere(5));
    /*
    int f(int *a, int n);
    int *test;
    unsigned int nb,i;
    printf("Combien ?\n");
    scanf("%d",&nb);
    test=(int *) malloc(nb*(sizeof(int)));
    if (test==NULL) return 1;
    for(i =0;i<nb;i++){
        scanf("%d",test+i);
        printf("%d\n",f(test,nb));
    }*/
    return 0;
}