/*#include <stdio.h>
int main (void)
{
    unsigned char i;
    i=250;
    i=i+6;
    printf("La valeur de i est %d \n", i);
    return(0);
}*/

//Exercice 2
/*
#include <stdio.h>
int main (void){
    unsigned int i;
    scanf("%u", &i);
    printf("Les deux derniers chiffres sont %u \n", i%100);
    return(0);
}*/

//Exercice 3 
/*
#include <stdio.h>
int main (void){
    int i,j,x;
    scanf("%d",&i);
    printf("Le premier entier rentré est : %d \n", i);
    scanf("%d",&j);
    printf("Le deuxième entier rentré est : %d \n", j);
    scanf("%d",&x);
    printf("Le troisième entier rentré est : %d \n", x);
    return(0);
}*/

//Exercice 4
/*#include <stdio.h>
int main(void){
    printf ("\n Impression avec deux caractères de retour à la ligne \n");
    return(0);
}

#include <stdio.h>
int main(void){
    printf ("%cn Impression avec les codes ASCII ... %cn", 92, 92);
    return(0);
}*/

//Exercice 5 déjà fait en TD

//Exercice 6 Pas bon typage mais flm...
/*
#include <stdio.h>
#include <limits.h>

int main(void){
    unsigned int u, smin, smax, umax, cmin, cmax, shmin, shmax, usmax, inmin, inmax, uinmax, lmin, lmax, ulmax;
    long 
    int smin 
    printf("CHAR_BIT = %u\n SCHAR_MIN = %u\n SCHAR_MAX = %u\n UCHAR_MAX = %u\n CHAR_MIN = %u\n CHAR_MAX = %u\n", u, smin, smax, umax, cmin, cmax);
    printf("SHRT_MIN = %u\n SHRT_MAX = %u\n USHRT_MAX = %u\n INT_MIN = %u\n INT_MAX = %u\n", shmin, shmax, usmax, inmin,inmax);
    printf("UINT_MAX = %u\n LONG_MIN = %u\n LONG_MAX = %u\n ULONG_MAX = %u\n", uinmax,lmin, lmax, ulmax);
    return(0);
}*/

//Exercice 7 
/*
#include <stdio.h>
int main (void)
{
    int i=5, j=2;
    float f;
    f=4*(i/j);
    printf("La valeur de f est : %.f. \n", f);
    return(0);
}

#include <stdio.h>
int main (void)
{
    int i=5, j=2;
    float f;
    f=4*(float)(i/j);
    printf("La valeur de f, après une application globale de l’opérateur cast, est : %f. \n", f);
    return(0);
    }

#include <stdio.h>
int main (void)
{
    int i=5, j=2;
    float f;
    f=4*((float)i/(float)j);
    printf("La valeur de f, après des applications locaux de l’opérateur cast, est : %f. \n", f);
    return(0);
}
*/

//Exerice 8 Je pense que je me suis cassé la tête pour rien.
/*
#include <stdio.h>
int main(void){
    int i;
    float f;
    char c;
    double d;
    short int si;
    long int li; 
    unsigned int ui;
    unsigned char uc;
    unsigned short int usi;
    unsigned long int uli;
    double sdi, sf, sc, sd, ssi, sli, sui, suc, susi, suli;
    sdi=sizeof(i);
    sf=sizeof(f);
    sc=sizeof(c);
    sd=sizeof(d);
    ssi=sizeof(si);
    sli=sizeof(li);
    sui=sizeof(ui);
    suc=sizeof(uc);
    susi=sizeof(usi);
    suli=sizeof(uli);
    printf("La taille de int est %f\t La taille de float est %f\t La taille de double est %f\n",sdi,sf,sc);
    printf("La taille de short int est %f\t La taille de long int est %f\t La taille de unsigned int est %f\n",sd,ssi,sli);
    printf("La taille de unsigned char est %f\t La taille de unsigned shirt int est %f\t La taille de unsigne long int est %f\n",sui,suc, suli);
    printf("La taille de unsigned long int est %f\n",suli);
    return(0);

}*/

//Exercice 9 Problème, j'en ai trouvé 10...

/****
Les huit erreurs de compilation
***/
/****
#include <stdio.h>
int main(void){
    int b=1,c,a;
    int f=0;
    printf ("Merci de saisir un premier nombre. \n");
    scanf ("%d", &b);
    printf ("Merci de saisir un deuxieme nombre. \n");
    scanf ("%d", &c);
    a=(b+c);
    f=(a>=1);
    if (f){
        printf("La somme des deux nombres lus est strictement positive. \n");
    }
    return(0);
}***/

//Exercice 10

#include <stdio.h>

int main(void){
    unsigned int n;
    printf("Merci de rentrer le nombre de reines voulues. (Un entier positif)\n");
    scanf("%u",&n);
    printf("%u reines vont être placées sur un échéquier %ux%u \n",n,n,n);
    

}
