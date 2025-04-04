#include <iostream>

int main() {
  // Write code here
  double mo1;
  double mo2;

  std::cout << "Enter the first month";
  std::cin >> mo1;
  std::cout << "Enter the second month";
  std::cin >> mo2;
  double MoM = ((mo2 - mo1)/ mo1) * 100;
  std::cout << MoM;
}