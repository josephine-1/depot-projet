#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

    int i;
    int tab[4] ={123,432,111,222};
    int codeUser;
    int compteur=1;
    

 void parcouru()
 {
     i = 0;
     while ((i<4)&& (tab[i]!=codeUser))
    {
         i++;
     }
 }
int main()
{
   
 
 char tableau[80];
    printf( "Veillez saisir le code: " );
    scanf( "%[^\n]", tableau);

    bool isCorrect = true;
    size_t length = strlen( tableau );
    for( int i=0; i<length; i++ ) {
        if ( ! isdigit( tableau[i] ) ) {
            isCorrect = false;
        }
    }





if (isCorrect)

  
{
    printf("Donner le code user\n");
    scanf("%d",&codeUser);
    parcouru();
     if(tab[i]==codeUser){
        
        printf("code secret correct");
    }
     
    else {
        
        printf("code secret incorrecte veillez réessayez\n");
        scanf("%d",&codeUser);
         parcouru();
          if(tab[i]==codeUser){
            printf("code secret valide aprés une deuxiéme tentative");
          }
          else {
            while((tab[i]!=codeUser) && (compteur!=0)){
                 printf("Le code est incorrect %d essaie restant\n",compteur);
          scanf("%d",&codeUser);
          compteur--;
          parcouru();
          if (tab[i]==codeUser){
            printf("Code Valide");
          }
           else if ((tab[i]!=codeUser) && (compteur==0))
          {
            printf("fin tentative vous etes bloqués");
          }
    
            }

          }
               
    }
    }
   {
    /*printf("Veiller saisir un entier\n");
    scanf("%d",&codeUser);
    parcouru();
     if(tab[i]==codeUser){
        
        printf("code secret Valide aprés une deuxieme tentative\n");
    }
    else
      
    printf("Donner un autre entier\n");
    scanf("%d",&codeUser);
    parcouru();
   
     if((tab[i]!=codeUser)&&(compteur!=0)){   
       printf("Le code est incorrect %d essaie restant\n",compteur);
          scanf("%d",&codeUser);}
         // compteur--;
          parcouru();
          if (tab[i]==codeUser){
            printf("Code Valide");
          }
          else ((tab[i]!=codeUser) && (compteur==0));
          {
            printf("fin tentative vous etes bloqués");
          }*/
    return 0;
}}
