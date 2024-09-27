#include <iostream>

int main() {
  // Add your code below  
  double miles;

  std::cout << "Enter a distance as miles:";
  std::cin >> miles;

  double kms = miles * 1.60934;
  std::cout << miles << " miles equals to " << kms << " kilometers.";

  return 0;
}