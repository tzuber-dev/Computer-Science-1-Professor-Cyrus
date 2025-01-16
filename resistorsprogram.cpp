#include <iostream> 
using namespace std;

int main() {
    float resistor1, resistor2; 
    
    cout << "Welcome to my Resistor Calculation Program!\n"<<std::endl;
  
    cout << "Please enter your two resistances: "; 
    cin >> resistor1;
    cin >> resistor2;
    

   std::cout<< "Thanks! You have entered "<< resistor1;cout<< " ohms and " << resistor2;cout<<" ohms "<<std::endl;
    
    float in_series = resistor1+resistor2;

    float in_parallel = 1/(1/resistor1 + 1/resistor2);



    

    
   
   cout << "\nIf you're calculating this in series, resistor 1 and resistor 2 values will total to " << in_series;cout<<" ohms ";

   

   cout<<"\nIf you're calculating this in parallel, they will total to " << in_parallel ;cout <<" ohms ";

   cout<<"\nThanks for using the RCP!"<<std::endl;
  return 0;
}
