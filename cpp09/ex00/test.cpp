#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

bool est_annee_bissextile(int annee) {
  return ((annee % 4 == 0 && annee % 100 != 0) || annee % 400 == 0);
}

bool est_date_valide(int annee, int mois, int jour) {
  if (annee < 1) {
    return false;
  }
  if (mois < 1 || mois > 12) {
    return false;
  }
  switch (mois) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
      return jour >= 1 && jour <= 31;
    case 4: case 6: case 9: case 11:
      return jour >= 1 && jour <= 30;
    case 2:
      return est_annee_bissextile(annee) ? (jour >= 1 && jour <= 29) : (jour >= 1 && jour <= 28);
  }
  return false;
}

int main() {
  string nom_fichier;
  cout << "Entrez le nom du fichier contenant les dates: ";
  cin >> nom_fichier;

  ifstream fichier(nom_fichier.c_str());
  if (!fichier.is_open()) {
    cerr << "Erreur d'ouverture du fichier \"" << nom_fichier << "\"." << endl;
    return 1;
  }

  string ligne;
  while (getline(fichier, ligne)) {
    int annee, mois, jour;
    std::stringstream ss;
    ss << ligne;
    ss >> annee >> mois >> jour;
    mois *= -1;
    jour *= -1;
    if (!est_date_valide(annee, mois, jour)) {
      cout << "Date invalide: " << ligne << endl;
    }
  }

  fichier.close();
  return 0;
}
