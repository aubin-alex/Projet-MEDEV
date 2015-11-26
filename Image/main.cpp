/* 
 * File:   main.cpp
 * Author: eleve
 *
 * Created on 26 novembre 2015, 10:08
 */

#include<iostream>
#include"lecturePhoto.h"
#include <ctime>

using namespace std;

/*
 * 
 */
int main() {
    
    srand(time(NULL));

    vector<int> res;
    res=lecturePhoto("lena.pgm");       // transformation de l'image en vecteur
    
    for(int i=0;i<res.size();i++){      // affichage pour vérifier
        cout << res[i]<<" ";
    }
    
    ecriturePhoto("photo.pgm");         // génération de l'image aléatoire
    
    return 0;
}

