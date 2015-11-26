/* 
 * File:   main.cpp
 * Author: eleve
 *
 * Created on 26 novembre 2015, 10:08
 */

#include<iostream>
#include"lecturePhoto.h"

using namespace std;

/*
 * 
 */
int main() {

    string nomFichier = "lena.pgm";
    vector<int> res;
    res=lecturePhoto(nomFichier);
    
    for(int i=0;i<res.size();i++){
        cout << res[i]<<" ";
    }
    
    return 0;
}

