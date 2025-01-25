
#include <iostream>
using namespace std;
int main() {

    
   int pounds, ouncevalue; // get the variables for resistor1 and resistor2 value
    
    
   std::cout << "Welcome to the Ounce Conversion Program!\n"<<std::endl; // welcome prompt

   
  
  std::cout << "How many ounces do you have?: "; 
  std::cin >> ouncevalue;

  int poundstoounces = ouncevalue/16;
  int ouncesremaining = ouncevalue%16;
  
  
  std::cout << "Thank you! Converting ounces to pounds. \n"<<std::endl;
  
  double ouncestopounds = ouncevalue/16.0;


  

 std::cout << ouncevalue << " oz is equivalent to " <<poundstoounces << " lbs"<<" and "<<ouncesremaining<<" oz."<<std::endl;
 std::cout << ouncevalue << " oz is equivalent to " << ouncestopounds << " lbs.\n"<<std::endl;
 std::cout <<"Thank you for using the OCP!\n"<<std::endl;
    


  return 0;
}