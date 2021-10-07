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
    int sommed=0,n=0;
    printf("Combien de termes?\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
        sommed+=i; //equivalent à somme=somme+i

    }
    printf("\nla somme est:%d",sommed);

    return 0;
}
