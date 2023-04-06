#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define N 1000

int main(){
    FILE* mesFringue = NULL;
    FILE* mesFringue2 = NULL;
    int index=0;
    int indexLign;
    char ligne[N];
    char* laLigne;
    char** entete;
    entete=malloc(sizeof(char*)*N);
    for(int j=0;j<N;j++){
        entete[j]=malloc(sizeof(char)*N);
    }
    entete[0]="num";
    entete[1]="nom";
    entete[2]="taille";
    entete[3]="prix";

    laLigne=malloc((sizeof(char)*N));
    mesFringue = fopen("mesFringue.csv","r");
    mesFringue2 = fopen("mesFringue.json","w");
    fprintf(mesFringue2,"[\n");
    if (mesFringue == NULL){
        printf("Erreur\n");
    }else{
        while(fgets(ligne,N,mesFringue) != NULL){
            laLigne=strtok(ligne,";");
            indexLign=0;
            if (index>4)
                fprintf(mesFringue2,"{\n");
            while(laLigne != NULL){
                if (0){
                }else{
                    if (indexLign==3){
                        fprintf(mesFringue2,"'%s': '%s'\n},",entete[indexLign],laLigne);
                    }else{
                        if (indexLign<4)
                            fprintf(mesFringue2,"'%s': '%s',\n",entete[indexLign],laLigne);
                    }
                }
                laLigne=strtok(NULL,";");
                index++;
                indexLign++;
            }
            fprintf(mesFringue2," \n");
        }
        fprintf(mesFringue2,"]");
    }
    return 0;
}