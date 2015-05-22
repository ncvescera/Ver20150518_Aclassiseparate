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


studente inserisciDati(/*studente** dato,int *dim*/);
//void distinguiSesso(studente dato, studente** maschi, studente** femmine, int* m, int* f);
void ordinaDati(studente dato[],int dim);
void stampa(studente dato[],int dim, char fname[]);
studente* rialloca(studente* corrente, int dimCorrente);