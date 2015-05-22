#include "LENGHT.h"
struct s_studente{
    char nome[MAXSTRLEN+1];
    char cognome[MAXSTRLEN+1];
    char classe[CLASSLEN+1];
    int sesso;
    int eta;
};
typedef struct s_studente studente;