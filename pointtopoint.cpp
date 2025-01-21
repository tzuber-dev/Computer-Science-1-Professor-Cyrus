#include <iostream>

int main() {

    
   float firstpoint1, secondpoint1, firstpoint2, secondpoint2; // get the variables for resistor1 and resistor2 value
    
    
   std::cout << "Welcome to the 2D Midpoint Program!\n"<<std::endl; // welcome prompt

   
  
  std::cout << "What is the first point in the plane?: \n"; 
  std::cin >> firstpoint1 >> secondpoint1;
   

  std::cout << "What is the second point in the plane?: \n";
  std:: cin >>firstpoint2 >> secondpoint2;

  float sumofxvalues = firstpoint1 +firstpoint2;

  float averageofx = sumofxvalues/2;

  float sumofyvalues = secondpoint1 +secondpoint2;

  float averageofy = sumofyvalues/2;

  
 std::cout<< "Calculating the midpoint now...\n"<<std::endl;
 std::cout << "The midpoint of the line segment between "<<"("<<firstpoint1<<","<<secondpoint1<<") and" <<" ("<<firstpoint2<<","<< secondpoint2 << ")" << " is "<<"("<<averageofx<<","<<averageofy<<")\n"<<std::endl; 

 std::cout <<"Thank you for using the 2D Midpoint Program.\n"<<std::endl;
    


  return 0;
}