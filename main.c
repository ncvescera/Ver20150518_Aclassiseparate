#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libreria.h"



typedef struct s_studente studente;


int main(int argc, char** argv) {
    int dim;
    int i,m,f,j,k;
    
    printf("Quanti studenti vuoi inserire ?");
    scanf("%d",&dim);
    studente elenco[dim];
    studente maschi[dim];
    studente femmine[dim];

    inserisciDati(elenco,dim);
    
    m=0;
    f=0;
    j=0;
    k=0;
    for(i=0;i<dim;i++){
        if(elenco[i].sesso==0){
            maschi[j++]=elenco[i];
            m++;
        }
        else{
            femmine[k++]=elenco[i];
            f++;
        }
    }
  
    ordinaDati(maschi,m);
    ordinaDati(femmine,f);
    
        
    stampa(maschi,m,FNAMEM);
    stampa(femmine,f,FNAMEF);
    
    
    return (EXIT_SUCCESS);
}

