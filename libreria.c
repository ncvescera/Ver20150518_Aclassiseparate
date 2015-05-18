#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSTRLEN 25
#define CLASSLEN 5
#define FNAMEM "maschi.csv"
#define FNAMEF "femmine.csv"

struct s_studente{
    char nome[MAXSTRLEN+1];
    char cognome[MAXSTRLEN+1];
    char classe[CLASSLEN+1];
    int sesso;
    int eta;
};

typedef struct s_studente studente;


int inserisciDati(studente dato[],int dim){
    int i;
    for(i=0;i<dim;i++){
        printf("Nome: ");
        scanf("%s",dato[i].nome);
        printf("Cognome: ");
        scanf("%s",dato[i].cognome);
        printf("Classe: ");
        scanf("%s",dato[i].classe);
        printf("Sesso (0 uomo 1 donna): ");
        scanf("%d",&(dato[i].sesso));
        printf("Età: ");
        scanf("%d",&(dato[i].eta));
    }
}

void stampa(studente dato[],int dim, char fname[]){
    FILE *puntafile=NULL;
    int i;
    
    puntafile=fopen(fname,"w");
    if(puntafile==NULL){
        fprintf(stderr,"Errore!");
        exit(1);
    }
        
    fprintf(puntafile,"nome;cognome;classe;sesso;eta\n");
    for(i=0;i<dim;i++){
        fprintf(puntafile,"%s;%s;%s;%d;%d\n",dato[i].nome,dato[i].cognome,dato[i].classe,dato[i].sesso,dato[i].eta);
    }
    fclose(puntafile);
}

void ordinaDati(studente dato[],int dim){
    int i,j;
    studente temp;
    
    for(i=0;i<dim-1;i++){
        for(j=0;j<dim-1;j++){
            if((strcmp(dato[j].cognome,dato[j+1].cognome))){
                temp=dato[j];
                dato[j]=dato[j+1];
                dato[j+1]=temp;
            }
        }
    }
}
