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


studente inserisciDati(/*studente** dato,int *dim*/){
    studente alunno;
    /*int i;
    while(strcmp(dato[i]->nome,"00")){
        if(i==*dim){
            *dato=(studente*)realloc(*dato,*dim);
            *dim*=2;
        }*/
    
        printf("Nome (00 per terminare): ");
        scanf("%s",(alunno.nome));
        printf("Cognome: ");
        scanf("%s",(alunno.cognome));
        printf("Classe: ");
        scanf("%s",(alunno.classe));
        printf("Sesso (0 uomo 1 donna): ");
        scanf("%d",&(alunno.sesso));
        printf("Età: ");
        scanf("%d",&(alunno.eta));
      
        
        return alunno;
    
   
}

void stampa(studente *dato, int dim, char fname[]){
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

void ordinaDati(studente *dato, int dim){
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
void distinguiSesso(studente dato, studente** maschi, studente** femmine, int* m, int* f){
    /*int i,j,k;
    k=0;
    j=0;
    for(i=0;i<dim;i++){*/
        if(dato.sesso==0){
            *maschi[*m]=dato;
            *m=*m+1;
        }
        else{
            *femmine[*f]=dato;
            *f=*f+1;
        }
   
}