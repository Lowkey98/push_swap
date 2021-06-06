# include<stdio.h>
void affichage(int *tab,int taille)
{
    int i = 0;
    while (i < taille)
    {
        printf("%d",tab[i]);
        i++;
    }
}
void menu_tableau(int *tab,int taille)
{
    char a;
    printf("========================================================\n\
=== Menu Tableau ===\n\
========================================================\n\
1. Affichage\n\
2. Tri\n\
3. Suppression d’un élément\n\
4. Quitter\n\
========================================================"); 
    scanf("%s",&a);

    if (a == '1' || a == 'a' || a == 'A')
        affichage(tab,taille);
}
void saisir_tableau()
{
    int taille;
    int i = 0;
    printf("Saisir un tableau\n Saisir la taille\n");
    scanf("%d",&taille);
    int tab[taille];
    printf("Saisir les elements du tableau\n");
    while (i < taille)
    {
        scanf("%d\n",&tab[i]);
        i++;
    }
    menu_tableau(tab,taille);
}
void est_Palindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
  
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s n'est pas Palindrome", str);
            return;
        }
    }
    printf("%s est palindrome", str);
}
void saisir_chaine()
{
    char string[100];
    scanf("%s",string);
    printf("========================================================\n\
=== Menu Chaines de caractères ===\n\
========================================================\n\
1. Affichage\n\
2. Palindrome\n\
3. Insertion\n\
4. Quitter\n\
========================================================");
    int a;
    scanf("%d",a);
    if (a == '1' || a == 'a' || a == 'A')
    {
        printf("%s",string);
        char c;
        saisir_chaine();
    }
    if (a == '2' || a == 'p' || a == 'P')
        

}
int main()
{
    char a;
    printf("======================\n === Menu General =====\n =====================\n1. Tableaux\n2. Chaine de caracteres.\n3. Quitter.\n=========\n");
    scanf("%c",&a);
    if (a == '1' || a == 't' || a == 'T')
        saisir_tableau();
    if (a == '2' || a == 'c' || a == 'C')
        saisir_chaine();
    return (0);
}