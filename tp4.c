/*#include <stdio.h>
int main(void){ //On peut en conclure que les pointeurs ont tous la même taille car ils renvoient une adresse et donc ce n'est pas lié au type de variable
    int *p;
    double *p1;
    printf("Taille 1 = %zu \nTaille 2 = %zu \n",sizeof(p),sizeof(p1));
    return(0);
}

//Exercice 2

 #include <stdio.h>
int main (void)
{
    char car;
    printf ("\nMerci d’introduire une lettre majuscule ou minuscule: ");
    scanf ("%c", &car);
    printf ("\nla conversion (majuscule vs minuscule) de %c donne %c.\n ", car, car + ((('A'<=car)&&(car<='Z'))? 'a' -'A' : 'A'-'a'));
    return(0);
}

//Exercice 3

#include <stdio.h>
int main(void){
    int *p=(int *) 0x100a;
    double *p1=(double *) 0x200b;
    printf ("%d \n",sizeof(p1) > sizeof(p));
    printf ("%p \n",p+1);
    printf ("%p \n",p1+1);
    return(0);
}

//Exercice 4

#include <stdio.h>
int main(void){
    unsigned int a;
    scanf("%u",&a);
    if(a<0)[
        return 1;
    ]
    while(a!=0){
        if((a&1)==0){
            putchar('0');
        }
        else{
            putchar('1');
        }
        a=a>>1;
    }
    putchar('\n');
    return 0;
}
//Exercice 5

#include <stdio.h>
int main(void){
    unsigned int a,b;
    b=0;
    scanf("%u",&a);
    while(a!=0){
        b*=10;
        b+=a%10;
        a/=10;
    }
    printf("%u",b);
    return 0;
}
*/

//Exercice 6

#include <stdio.h>
int main(void){
    
}
