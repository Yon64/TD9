#ifndef __ecole_H_
#define __ecole_H_

typedef struct {
    int num;
    char* nom;
    char* prenom;
    int notes[5];
}Etudiant;

typedef struct {
    Etudiant* tab;
    int taille;
}TabEtudiants;

TabEtudiants* lireCSV(char* fichierNotes);
void afficherEtudiant(Etudiant e);
void afficherTableauEtudiant(TabEtudiants tabEtudiants);
double calculerMoyenneParEtudiant(Etudiant e);
Etudiant meilleurEtudiant(TabEtudiants tabEtudiants);
void saisirEtudiant(Etudiant* a);
void ajouterEtudiant(TabEtudiants* tabEtudiants,Etudiant* a);
void ecrireCSV(TabEtudiants* tabEtudiants,char* fichierNotes);
void supprimerEtudiant(TabEtudiants* tabEtudiants, int num);
#endif