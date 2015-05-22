#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libreria.h"



typedef struct s_studente studente;


int main(int argc, char** argv) {
    int dimM=2;
    int dimF=2;
    
    int *coseM;
    int *coseF;
    
    int m,f,inserito;
    studente temp;
    studente *maschi;
    studente *femmine;
    //elenco=(studente*)malloc(dim*sizeof(studente));
    maschi=(studente*)malloc(dimM*sizeof(studente));
    femmine=(studente*)malloc(dimF*sizeof(studente));
    //printf("Quanti studenti vuoi inserire ?");
    //scanf("%d",&dim);
    m=0;
    f=0;
    
    inserito=-1;
    while(inserito!=0){
        if(m==dimM){
            coseM=(int*)realloc(maschi,dimM*2);
            dimM*=2;
        }
        if(f==dimF){
            coseF=(int*)realloc(femmine,dimF*2);
            dimF*=2;
        }
        
        temp=inserisciDati(/*&elenco,&dim*/);          
        distinguiSesso(temp,&maschi,&femmine,&m,&f);
        
        printf("\nVuoi inserire altri numeri? (0 no - 1 si)");
        scanf("%d",&inserito);
        puts("");
    }
    
    //ordinaDati(maschi,m);
    //ordinaDati(femmine,f);
    
        
    stampa(maschi,m,FNAMEM);
    stampa(femmine,f,FNAMEF);
    
    free(maschi);
    free(femmine);
    
    return (EXIT_SUCCESS);
}

