#include "LENGHT.h"
#include "studente.h"


studente inserisciDati(/*studente** dato,int *dim*/);
//void distinguiSesso(studente dato, studente** maschi, studente** femmine, int* m, int* f);
void ordinaDati(studente dato[],int dim);
void stampa(studente dato[],int dim, char fname[]);
studente* rialloca(studente* corrente, int dimCorrente);