#include <iostream>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;

int main() {

    
 float ignoreairresistance, includeairresistance, enterheight;
    
  
   
  
  std::cout << "What is the starting height of your squirrel (in meters)?: \n"; 
  std::cin >> enterheight;
   

 ignoreairresistance = sqrt(2*9.8*enterheight);

 includeairresistance = sqrt(0.450*9.8/0.24);
 
 



 std::cout<<"Without air resistance, the terminal velocity of the squirrel is "<< fixed << setprecision(2) << ignoreairresistance<<" m/s."<<std::endl; 

 std::cout<<"With air resistance, the terminal velocity of the squirrel is "<< fixed << setprecision(2) << includeairresistance<<" m/s."<<std::endl; 
 
 

 std::cout<<"And I'm freeeeee... free faaaaaaalling..."<<std::endl;
    


  return 0;
}