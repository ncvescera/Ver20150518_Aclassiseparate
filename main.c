#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libreria.h"



typedef struct s_studente studente;


int main(int argc, char** argv) {
    int dim=2;
    int i,m,f,j,k;
    studente *elenco;
    studente *maschi;
    studente *femmine;
    elenco=(studente*)malloc(dim*sizeof(studente));
    maschi=(studente*)malloc(dim*sizeof(studente));
    femmine=(studente*)malloc(dim*sizeof(studente));
    //printf("Quanti studenti vuoi inserire ?");
    //scanf("%d",&dim);
    
    
    

    inserisciDati(&elenco,&dim);
    
    m=0;
    f=0;
       
    distinguiSesso(elenco,&maschi,&femmine,&m,&f,dim);
  
    ordinaDati(maschi,m);
    ordinaDati(femmine,f);
    
        
    stampa(maschi,m,FNAMEM);
    stampa(femmine,f,FNAMEF);
    
    
    return (EXIT_SUCCESS);
}

