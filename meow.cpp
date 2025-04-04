#include <iostream>

int main() {
  // Write code here
  int cat;
  int human;

  std::cout << "Bienvenue dans le calculateur d'âge meow 2000 (=^･ω･^=) ! Il ne fonctionne que pour les chats âgés de \n deux ans ou plus (ฅ^•ﻌ•^ฅ)\n";
  std::cout <<"Rentrez l'âge de votre meow :3 ! ";
  std::cin >> cat;
  human = (cat - 2) * 4 + 24 ;
  std::cout << "ton chat a : " << human ;

}