#include "histogramme.h"

void lecture(int histo[255]){
    ofstream fichier("histogramme.txt", ios::out);  //déclaration du flux et ouverture du fichier

        if(fichier)  // si l'ouverture a réussi
        {
            // instructions
            fichier <<"P2"<<endl<<"#"<<endl<<"512 512"<<endl<<"255" << endl;
        for (int j=0;j<513;j++){
            
            for (int i=0;i<256;i++){
                if(histo[i]>=512-j){
                    fichier << "256 256 ";
                    }
                else {
                    fichier<<"0   0   ";
                }
            }
            fichier<<endl;
        }
                fichier.close();  // on referme le fichier
        }
        else 
        {// sinon
                cerr << "Erreur à l'ouverture !" << endl;
        }
}