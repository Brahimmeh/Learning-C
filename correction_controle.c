#include<stdio.h>
#include<string.h>
#include<conio.h>
typedef struct{
int day;
int month;
int year;
int hour;
int minute;
}datetime;

typedef struct{
char id[10];
char name[40];
}client;

typedef struct{
char title[40];
char type[20];
}movie;

typedef struct{
int id;
client rClient;
movie rMovie;
datetime startDate;
int restored;
}rent;

main(){printf("\n\n ----- DEBUT DU PROGRAMME ----- \n\n ");
       /* Déclaration des variables */
       rent rents[5000];// Tableau de toutes les locations
       int rNumber=0;// le nombre de location : taille effective en temps réel du tableau.
       int trouve;// Boolen pour les recherches
       int i,j;
       int type_film;// type du film saisi
       int R;// Control du nombre de valeur saisi
       int id_aff; // id de la location à afficher
       int id_sup; // id de la location à supprimer
       int choix;
       
       do {
           printf(" \n\n ----- MENU DU PROGRAMME ----- \n\n ");
           printf("\n (1) ---> Ajouter une location ");
           printf("\n (2) ---> Afficher une location ");
           printf("\n (3) ---> Supprimer une location ");
           printf("\n (4) ---> Quitter ");
           do{
           printf("\n Entrer votre choix : ");
           scanf("%d",&choix);
           if ( choix < 1 || choix > 4 )
           printf(" ---> Choix invalide !!! \n");
           }while(choix < 1 || choix > 4);
           
           switch(choix)
           {
                        
                        case 1 : /*  bloc du code  qui permet de remplir le tableau de toutes les locations par 1 location 
                                d'un films qui n'a pas encore été retourné  ( Ajouter location ).  */
                                
                                printf("\n ---> Ajout d'une location :\n\n");
                                rents[rNumber].restored = 0;
                                do {
                                printf (" Entrer l'ID de la location : ");
                                scanf("%d",&rents[rNumber].id);
                                trouve = 0;
                                for ( i=0 ; i<rNumber && trouve == 0; i++ )
                                {
                                    if ( rents[i].id == rents[rNumber].id )
                                    trouve = 1;
                                }
                                if ( trouve == 1 )
                                printf(" --> L'ID saisi est invalide !!!\n");
                                }while( trouve == 1 );
                                
                                fflush(stdin);
                                printf(" Entrer le CIN du client : ");
                                gets(rents[rNumber].rClient.id);
                                printf(" Entrer le nom du client : ");
                                gets(rents[rNumber].rClient.name);
                                fflush(stdin);
                                printf(" Entrer le titre du film : ");
                                gets(rents[rNumber].rMovie.title);
                                printf(" Entrer le type du film : ");
                                printf(" \n (1) ---> Comédie ");
                                printf(" \n (2) ---> Fiction ");
                                printf(" \n (3) ---> Horreur ");
                                do{
                                printf("\n ---> ");
                                scanf("%d",&type_film);
                                if ( type_film<1 || type_film>3 )
                                printf(" ---> Type indisponible !!! \n");
                                }while( type_film<1 || type_film>3 );
                                switch ( type_film ) 
                                {
                                       case 1 : strcpy ( rents[rNumber].rMovie.type , "Comedie") ; break ;
                                       case 2 : strcpy ( rents[rNumber].rMovie.type , "Fiction") ; break ;
                                       case 3 : strcpy ( rents[rNumber].rMovie.type , "Horreur") ; break ;
                                }
                                do{
                                printf(" Entrer la date de location :");
                                R=scanf("%d/%d/%d",&rents[rNumber].startDate.day, &rents[rNumber].startDate.month, &rents[rNumber].startDate.year);
                                if ( R!= 3 )
                                printf(" --> Date invalide !!! \n");
                                }while ( R!= 3 );
                               
                                do{
                                printf(" Entrer l'heure de la location :");
                                R=scanf("%d:%d",&rents[rNumber].startDate.hour, &rents[rNumber].startDate.minute);
                                if ( R!= 2 )
                                printf(" --> Heure invalide !!! \n");
                                }while ( R!= 2 );
                                rNumber++;
                                   
                               break ;
                        
                        case 2 :  /*  bloc du code  qui permet d'afficher une location à partir d'un id ( Afficher location )*/
        
                                printf("\n Entrer l'ID de la location à afficher : ");
                                scanf("%d",&id_aff);
                                trouve = 0 ;
                                for ( i = 0 ; i<rNumber && trouve == 0; i++ )
                                {
                                    if (id_aff == rents[i].id )
                                    {
                                               trouve = 1 ;
                                               printf( "\n *** LOCATION : %d ***",rents[i].id );
                                               if ( rents[i].restored == 1 )
                                               printf(" ----> LOCATION RETOURNEE \n ");
                                               else 
                                               printf(" ----> LOCATION NON RETOURNEE \n ");
                                               printf("\n Nom du client : %s ", rents[i].rClient.name); 
                                               printf("\n CIN du client : %s ", rents[i].rClient.id);
                                               printf("\n Titre du filme : %s ", rents[i].rMovie.title);
                                               printf("\n Type du film : %s ", rents[i].rMovie.type);
                                               printf("\n Date de location : %d / %d / %d ",rents[i].startDate.day,rents[i].startDate.month,rents[i].startDate.year);
                                               printf("\n Heure de location : %d : %d ",rents[i].startDate.hour,rents[i].startDate.minute);
                                               }
                                }
                                if ( trouve == 0 )
                                printf( " \n ---> Aucune location ne correspond a l'ID saisi !!! ");
                                
                               
                               break;
                               
                    case 3 : /*  bloc du code  qui permet de supprimer une location à partir d'un id ( Supprimer location )*/
                             printf("\n Entrer l'ID de la location à supprimer : ");
                             scanf("%d",&id_sup);
                             trouve = 0 ;
                             for ( i = 0 ; i<rNumber && trouve == 0; i++ )
                            {
                                if (id_sup == rents[i].id )
                                {          trouve = 1;
                                           for ( j=i ; j < rNumber - 1 ; j++ )
                                           rents[j]= rents[j+1];
                                } 
                                }  
                            rNumber--;
                            if ( trouve == 0 )
                            printf( " \n ---> Aucune location ne correspond a l'ID saisi !!! ");
                            else 
                            printf( " \n ---> LOCATION SUPPRIMEE ");   
                            
                            }     
        
        }while(choix != 4);  
        printf("\n\n ----- FIN DU PROGRAMME ------ ");
        getch();
        }
