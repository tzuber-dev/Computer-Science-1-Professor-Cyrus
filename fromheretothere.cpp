#include <iostream>
#include <cmath>

using namespace std;

int main() {

  std::cout<< "Welcome to the 2D Distance Program!\n"<<std::endl;


    
   double firstpoint1, secondpoint1, firstpoint2, secondpoint2; // get the variables for resistor1 and resistor2 value
    
  
  std::cout << "What is the first point in the plane?: \n"; 
  std::cin >> firstpoint1 >> secondpoint1;
   

  std::cout << "What is the second point in the plane?: \n";
  std:: cin >>firstpoint2 >> secondpoint2;

 
  double distanceformula = std::hypot(firstpoint2-firstpoint1,secondpoint2-secondpoint1);

 std::cout<< "Calculating the distance now...\n"<<std::endl;



 std::cout << "The distance of the line segment between "<<"("<<firstpoint1<<", "<<secondpoint1<<") and" <<" ("<<firstpoint2<<","<<  secondpoint2 << ")" << " is "<<distanceformula<<std::endl; 

 std::cout <<"Thank you for using the 2D Distance Program.\n"<<std::endl;
    


  return 0;
}