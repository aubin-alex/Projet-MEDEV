#include<iostream>
#include<fstream>
#include"lecturePhoto.h"

using namespace std;

void ecriturePhoto(string nouveauFichier){
    ofstream fichier (nouveauFichier.c_str(), ios::out);
    int alea;
    
    if(fichier)
    {
        fichier << "P2" << endl;
        fichier << "#" << endl;
        fichier <<512<<" "<<512<<endl;
        fichier << "255"<< endl;
        
        for (int i=0; i<512; i++){
            for(int j=0; j<512; j++){
                
                alea=rand()%256;
                
                if (j<511){
                    fichier<<alea<<"\t";
                }
                else{
                    fichier<<alea;
                }      
            }
        fichier <<endl;
        
        }
    }
    
    
}
