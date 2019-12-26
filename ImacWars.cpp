// ImacWars.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>

using namespace std;
int tailleTableau = 10;
int tailleLigne = 9;
string grille[256];


void remplirGrille(string* grilleInit);
void afficheGrille(string* grille);

int main()
{
    remplirGrille(grille);
    cout << endl; // test pour savoir si la grille se remplit
    afficheGrille(grille);
    
}

void remplirGrille(string* grille) {
    int tailleLigne = 9; //Valeur fixe définissant la taille du tableau
    int indiceLigne = 0; //Permet d'écrire chaque ligne
    int indTab = 1; // Donne le dernier indice entré dans le tableau
    grille[0] = "    |  0  |";
    for (indTab; indTab <= tailleLigne; indTab++) {
        grille[indTab] = "  " + to_string(indTab) + "  |";
    }
    for (int i = 0; i <= tailleLigne; i++) { // Taille Ligne = Nombre de ligne aussi | On répète pour le nombre de lignes
        grille[indTab] = "  " + to_string(indiceLigne) + " |";
        indTab++;
        indiceLigne++;
        for (int j = 0; j <= tailleLigne+1; j++) { // On répète pour la taille de la ligne 
            grille[indTab] = "     |";
            indTab++;
        }
    }
}



void afficheGrille(string* grille) {
    int compteur = tailleLigne;
    for (int i = 0; i <= tailleLigne; i++) {
        cout << grille[i];
    }
    for (int i = tailleLigne; i < (tailleLigne + 3) * (tailleLigne + 2); i++) { 
        if (compteur == tailleLigne) {
            cout << endl;
            compteur = -2;                                                           // tailleligne = 9 or il y a 11 éléments par ligne, on initialise a -2
            for (int j = 0; j < tailleLigne+1; j++) {
                cout << "______";
            }
            cout << "____"; // Permet d'allonger le trait : esthétique
            cout << endl;
        }
        else {
            cout << grille[i];
            compteur++;
        }
    }
}








// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
