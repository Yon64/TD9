
#include "ecole.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

TabEtudiants* lireCSV(char* fichierNotes){
    TabEtudiants* tab;
    tab = malloc(N*sizoef(Etudiant));
    for (int i=0;i<N;i++){
        tab->tab[i]->prenom=malloc(50*sizoef(char));
        tab->tab[i]->nom=malloc(50*sizoef(char));
    }
    int index=0;
    int indexLigne;
    int ligne=0;
    char Ligne[N];
    char* laLigne;
    laLigne=malloc((sizeof(char)*N));
    while(fgets(ligne,N,fichierNotes) != NULL){
        laLigne=strtok(ligne,";");
        indexLigne=0;
        while(laLigne != NULL){
            laLigne=strtok(NULL,";");
            switch(indexLigne){
                case 0 : tab->tab[ligne]->num;
                break;
                case 1 : tab->tab[ligne]->nom;
                break;
                case 2 : tab->tab[ligne]->prenom;
                break;
                case 3 : tab->tab[ligne]->note[0];
                break;
            }
            index++;
            indexLigne++;
        }
        ligne++;
    }


}

void afficherEtudiant(Etudiant e);
void afficherTableauEtudiant(TabEtudiants tabEtudiants);
double calculerMoyenneParEtudiant(Etudiant e);
Etudiant meilleurEtudiant(TabEtudiants tabEtudiants);
void saisirEtudiant(Etudiant* a);
void ajouterEtudiant(TabEtudiants* tabEtudiants,Etudiant* a);
void ecrireCSV(TabEtudiants* tabEtudiants,char* fichierNotes);
void supprimerEtudiant(TabEtudiants* tabEtudiants, int num);