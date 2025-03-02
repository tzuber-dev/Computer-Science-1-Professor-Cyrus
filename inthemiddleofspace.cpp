#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;



void cartesiantospherical(double x, double y, double z){

    double radius = sqrt(x*x + y*y + z*z);
    double theta = atan2(sqrt(x*x + y*y),z);
    double phi = atan2(y,x);
    cout<<"Spherical Coordinates: ("<<fixed<<setprecision(1)<< radius<<", "<<phi<<", " << theta<<")\n";
    

}

void sphericaltocartesian(double radius, double theta, double phi){

    theta *= M_PI / 100;
    phi *= M_PI/100;
    double x = radius * cos(theta) * sin(phi);
    double y = radius * sin(theta) * sin(phi);
    double z = radius * cos(phi);
    cout<<"The coordinates for the Cartesian system are: ("<<fixed <<setprecision(1)<<x<<", "<<y<<", "<<z <<")";
}




int main(){

 cout<<"Welcome to the PCP!\n"<<std::endl;

 cout<<"Do you want to enter your coordinate in: \n"<<std::endl;
 cout<<"1) Provide Cartesian coordinates\n";
 cout<<"2) Provide Spherical coordinates\n";
 int userselection;
 cin>>userselection;

 if (userselection == 1){

    double X;
    double Y;
    double Z;

    cout<<"Cartesian coordinates input: "<<std::endl;
    cout<<"X: ";
    cin>> X;
    cout<<"Y: ";
    cin>>Y;
    cout<<"Z: ";
    cin>>Z;


    cout<<"Your point is as follows. Angles are in radians.\n"<<std::endl;

    cout<<"Cartesian Coordinates: ("<<X<<", "<<Y<<", "<<Z<<")\n";

    cartesiantospherical(X,Y,Z);
 } else if (userselection == 2)
 {
    double radius, phi, theta; 

    cout<<"Spherical coordinates input: ";

    cout<<"Radius: ";
    cin>>radius;
    cout<<"Theta: ";
    cin>>theta;
    cout<<"Phi: ";
    cin>>phi;
    cout<<"Points entered: ("<<radius <<", "<< theta<<", "<<phi<< ")"<<std::endl; 
    sphericaltocartesian(radius, theta, phi);
    
 } else{
    cout<<"Wrong input. Forced to leave program"; 

    
 }
 cout<<"\n";

 cout<<"Thank you for using the PCP program! Have a wonderful day.\n"<<std::endl;
 return 0;
 

}