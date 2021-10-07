#include <stdio.h>

int main() {
    /************************************Exercice n°1***********************************/
    /*for(int i=1;i<=10;i++)
    {
        printf("%d ",i);
    }

    /************************************Exercice n°2************************************/
    /*int somme=0;
    for(int i=1;i<=10;i++)
    {
        printf("%d ",i);
        somme+=i; //equivalent à somme=somme+i

    }
    printf("\nla somme est:%d",somme);
    /***********************************Exercice n°3**************************************/
    /*int sommed=0,n=0;
    printf("Combien de termes?\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
        sommed+=i; //equivalent à somme=somme+i

    }
    printf("\nla somme est:%d",sommed);
    /*********************************Exercice n°4******************************************/
    int somme=0,nombre=0;
    const int nbchiffre=10;
    printf("Entrez les %d nombres\n",nbchiffre);
    for(int i=1;i<=nbchiffre;i++)
    {
        printf("Nombre-%d:",i);
        scanf("%d",&nombre);
        somme+=nombre;
    }
    printf("La somme des %d nombres est:%d\n",nbchiffre,somme);
    printf("La moyenne est de:%0.2f",somme/(float)nbchiffre);
    return 0;
}
