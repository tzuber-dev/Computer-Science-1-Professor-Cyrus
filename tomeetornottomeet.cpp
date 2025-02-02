#include <iostream>
#include <cmath>
using namespace std; 





int main() {

    
   int occupancymax, totaloccupiedvalue ;
    
    
   std::cout << "Welcome to the Room Capacity Program!\n"<<std::endl; 

   
  
  std::cout << "How many people can this room hold?: \n"; 
  std::cin >> occupancymax;
  
  

  std::cout << "How many people have arrived for the meeting?: \n";
  std::cin >> totaloccupiedvalue;

  double occupantRate = ((double) totaloccupiedvalue / occupancymax) * 100;
  
  int capacityaftercalculation = occupancymax - totaloccupiedvalue;
 
 //std::cout<< "Calculating the midpoint now...\n"<<std::endl;



 std::cout<<"You have used up " <<ceil(occupantRate)<<"% of your rooms capacity.\n"<<std::endl;
 //std::cout <<"Thank you for using the 2D Midpoint Program.\n"<<std::endl;
    
std::cout << "You still have room for "<< capacityaftercalculation << " more people.";

   if (occupantRate <= 100 && capacityaftercalculation >= 0) {
    cout<<("This meeting is LEGAL - proceed with the congregation!");
    return 0;
} else {
  cout<<("This meeting is ILLEGAL - do not proceed with the congregation!");
}
 
  return 0;
}

