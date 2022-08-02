#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaration des variables
   double moyGeneral,moyMath,moyPc,moySvt,N1,N2,N3,d1,d2,d3,S,coef1=1,coef2=2,coef3=3,Coef;
   char prenom;
   //Recupération des variables
   printf("Le prenom de l'apprenant\n");
   scanf("%s",&prenom);
   printf("Donner  note  examen Math \n");
   scanf("%lf",&N1);
   while (N1<0 || N1>20)
   {
      printf("veuiller saisir une note correcte");
       scanf("%lf",&N1);
   }
   printf("Donner  note  devoir Math \n");
   scanf("%lf",&d1);
    while (d1<0 || d1>20)
   {
      printf("veuiller saisir une note correcte");
       scanf("%lf",&d1);
   }
   printf("Donner  note examen Science-physique \n");
   scanf("%lf",&N2);
    while (N2<0 || N2>20)
   {
      printf("veuiller saisir une note correcte");
       scanf("%lf",&N2);
   }
   printf("Donner  note  devoir  Science-physique \n");
   scanf("%lf",&d2);
    while (d2<0 || d2>20)
   {
      printf("veuiller saisir une note correcte");
       scanf("%lf",&d2);
   }
   printf("Donner  note examen Svt\n");
   scanf(" %lf",&N3);
    while (N3<0 || N3>20)
   {
      printf("veuiller saisir une note correcte");
       scanf("%lf",&N3);
   }
   printf("Donner  note  devoir  Svt \n");
   scanf("%lf",&d3);
    while (d3<0 || d3>20)
   {
      printf("veuiller saisir une note correcte");
       scanf("%lf",&d3);
   }

   
  
   Coef=coef1+coef2+coef3;
   //Calcule note pour chaque matiére
   moyMath = (N1+d1)/2;
   moyPc = (N2+d2)/2;
   moySvt = (N3+d3)/2;
   //S= moyMath+moyPc+ moySvt;
   //printf("la somme est %lf\n",S);
   //Calcule de la moyenne

    moyGeneral=((moyMath*coef1)+(moyPc*coef2)+(moySvt*coef3))/Coef;
   
   
    
     
   
    
         if(moyGeneral<10)
         {
            
            printf("votre moyenne  est :%lf avec mention mediocre\n",moyGeneral);
         }
         else if (moyGeneral==10)
         {
            
             printf("votre moyenne  est :%lf avec mention passable\n",moyGeneral);
         }
         else if((moyGeneral>12) && (moyGeneral<14))
         {
            
            printf("votre moyenne  est :%lf avec mention trés bien\n",moyGeneral);

         }
         else 
         {
            printf("votre moyenne est :%lf avec mention Execellent\n" ,moyGeneral);
         }
         return 0;
   } 
  



    
