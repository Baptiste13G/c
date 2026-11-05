#include <stdio.h>

//Exercice 1:
/*
int main(void){
    unsigned int n;
    printf("Merci de rentrer un nombre entre 0 et 9.\n");
    scanf("%u",&n);
    for(int i=0;i<11;i++){
        printf("%u x %d = %u\n",n,i,n*i);
    }
    return 0;
}*/

//Exercice 2:

int nb_chiffres(int n) {
    return (n < 10) ? 1 : 1 + nb_chiffres(n / 10);
}

void commun(int a, int b){
    int res =0;
    int sauv_b=b;
    for(int i =0;i<nb_chiffres(a);i++){
        int nb=a%10;
        int tmp=sauv_b;
        for(int j=0;j<nb_chiffres(b);j++){
            if(nb==tmp%10){
                printf("%d",nb);
                res+=1;
            }
            tmp=tmp/10;
        }
        a=a/10;
    }
    if(res==0){
        printf("Désolé, pas de chiffre en commun.\n");
    }
    printf("\n");
}

//Exercice 3:

int ordre(void){
    char a=getchar();
    while(a!='$' && a!=EOF){
        char suivant = getchar();
        if(suivant=='$'){
            break;
        }
        if(a>suivant){
            return 0;
        }
        a=suivant;
    }
    return 1;
}

//Exercice 4:

int nb_bits(int nb){
    int res=0;
    while(nb>0){
        if(nb%2==1){
            res+=1;
        }
        nb/=2;
    }
    return res;
}

//Exercice 5:

int absolu (int a)
{
    printf("a debut =%p\n",&a);
    if (a<0){
        printf("a2 =%d\n",a);
        return -a;
    }
    else{
        printf("a2 =%d\n",a);
        return a;
    }
}

/*

int main (void)
{
    int absolu (int a);
    int i=-20;
    printf("i= %p\n",&i);
    printf ("La valeur absolue de i est : %d.\n ", absolu(i));
    return(0);
}*/

// Exercice 6:

int div(unsigned int n){
    int res=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            res+=1;
        }
    }
    return res;
}

//Exercice 7:

int puiss(int a, int b){
    if(b==0){
        return 1;
    }
    if(b%2==0){
        int pair=puiss(a,b/2);
        return  pair * pair;
    }
    else{
        return a*puiss(a,b-1);
    }
}

int inverse(int a, int n){
    int res=0;
    if(n<0 || n>((sizeof(a)*8)-1)){
        return -1;
    }
    if((a>>n)&1){
        return a-puiss(2,n);
    }
    else{
        return a+puiss(2,n);
    }
}

//Exercice 8:

int sup(int a, int b){
    if(a>b){
        return 1;
    }
    if(a<b){
        return -1;
    }
    if(a==b){
        return 0;
    }
}

//Exercice 9:

void text(void){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("\\input \"exo%d.tex\"\n",i);
    }
}

void text2(void){
    int n;
    char c;
    scanf("%c",&c);
    scanf("%d",&n);
    if(c=='a'){
        for(int i=1;i<=n;i++){
            printf("\\input \"exo%d.tex\"\n",i);
            printf("\\input \"exo%d-solution.tex\"\n",i);
        }
    }
    if(c=='s'){
        for(int i=1;i<=n;i++){
            printf("\\input \"exo%d.tex\"\n",i);
        }
    }
}

void text3(void){
    int c;
    c=getchar();
    while(c!='x'){
        if(c==','){
            c=getchar();
        }
        else{
            if(c=='a'){
                c=getchar();
                    printf("\\input \"exo%c.tex\"\n",c);
                    printf("\\input \"exo%c-solution.tex\"\n",c);
            }
            if(c=='s'){
                c=getchar();
                printf("\\input \"exo%c.tex\"\n",c);
            }
            c=getchar();
            }
    }
}

unsigned long int exo10(unsigned long int b){
    unsigned long int a;

}

#define EPSILON 0.001

int proche(double x, double y){
    return (x - EPSILON <= y) && (y <= x + EPSILON);
}

int main(void){
    //commun(19097,27349);
    //commun(2097,456666);
    //printf("%d",ordre());
    //int a=nb_bits(14);
    //printf("%d",a);
    printf("%d",472%10);
}