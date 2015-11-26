#include<iostream>
#include<fstream>
#include"lecturePhoto.h"

using namespace std;

vector<int> lecturePhoto(string nomFichier){
    
    ifstream fichier(nomFichier.c_str(), ios::in);
    vector<int> gris(256);
    int tailleX, tailleY;
    string a, b;
    int niveau;
    fichier>>a>>b;
    fichier>>tailleX;
    fichier>>tailleY;
    for (int i=0;i<tailleX;i++){
        for (int j=0;j<tailleY;j++){
            fichier>>niveau;
            gris[niveau]=gris[niveau]+1;
        }
    }
    return gris;
}
