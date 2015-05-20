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


int inserisciDati(studente *dato,int *dim){
    int i;
    while(strcmp(*dato[i]->nome,"00")){
        if(i==*dim){
            realloc(*dato,*dim*2);
            *dim*=2;
        }
        printf("Nome (00 per terminare): ");
        scanf("%s",*dato[i]->nome);
        printf("Cognome: ");
        scanf("%s",*dato[i]->cognome);
        printf("Classe: ");
        scanf("%s",*dato[i]->classe);
        printf("Sesso (0 uomo 1 donna): ");
        scanf("%d",&(*dato[i]->sesso));
        printf("Età: ");
        scanf("%d",&(*dato[i]->eta));
        i++;
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
            if((strcmp(dato[j].cognome,dato[j+1].cognome))>0){
                temp=dato[j];
                dato[j]=dato[j+1];
                dato[j+1]=temp;
            }
        }
    }
}
void distinguiSesso(studente *dato, studente** maschi, studente** femmine, int* m, int* f, int dim){
    int i,j,k;
    k=0;
    j=0;
    for(i=0;i<dim;i++){
        if(dato[i]->sesso==0){
            *maschi[j++]=dato[i];
            *m=*m+1;
        }
        else{
            *femmine[k++]=dato[i];
            *f=*f+1;
        }
    }
}