#include <iostream>
#include <cstring>

using namespace std; 

int main() {

 char firstinitial,middleinitial,lastinitial;

    cout<<"Welcome to the Monogram Program!\n"<<std::endl;

  std::cout << "What are your initials (first, middle, and last)?: \n"; 
  std::cin >> firstinitial;
  std::cin >> middleinitial;
  std::cin>> lastinitial;


  std::cout<<(char)toupper(middleinitial)<<".";
  std::cout<<(char)tolower(firstinitial)<<".";
  std::cout<<(char)toupper(lastinitial)<<".\n"<<std::endl;
  
  
  std::cout<<"Thank you for using the Monogram Program!\n"<<std::endl;

  
}