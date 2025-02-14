#include <iostream>
#include <iomanip>

using namespace std;
int main() {

    cout<<"Welcome to the Payroll Program! \n"<<std::endl;
    
    
    double hourlyrate,hoursworked;
    float numberofchildren;
    

    
    hourlyrate = 16.78 * 1;

    

    


    cout<<"How many hours did you work this week? "<<std::endl;
    cin>>hoursworked;
    cout<<"How many children do you have? "<<std::endl;
    cin>>numberofchildren;


    
    double gross = hourlyrate *hoursworked;

    

    double socsec = gross * 0.06;

    

    double fedtax = gross *0.14;

     

    double sttax = gross *0.05;

    

    double unionlogic = 10;

    


    
     double insurancevalue;

     if (numberofchildren >= 3){
        insurancevalue = 35.00;
     } else {
        insurancevalue = 15.00;
     }; 

     
     double sumofdeductionslogic = socsec + fedtax + sttax + unionlogic + insurancevalue ;
   

     double netlogic = gross - sumofdeductionslogic;

   

    
 string wagesign = " $/hr";
    cout<<"Payroll Stub: \n";
    std::cout<<"*****************************\n"<<std::endl;
    std::cout<<std::fixed << std::setprecision(1) << "Hours: $ "<<hoursworked<<std::endl;  
    std::cout<<"-----------------------------\n"<<std::endl;
    std::cout<<std::fixed << std::setprecision(2) <<"Rate: "<<hourlyrate<<wagesign<<std::endl;
    std::cout<<"-----------------------------\n"<<std::endl;
    std::cout<<std::fixed << std::setprecision(2) <<"Gross: $ "<<gross<<std::endl;
    std::cout<<"-----------------------------\n"<<std::endl;
    std::cout<<std::fixed << std::setprecision(2)<<"SocSec: $ "<<socsec<<std::endl;
    std::cout<<"-----------------------------\n"<<std::endl;
    std::cout<<std::fixed << std::setprecision(2)<<"FedTax: $ "<<fedtax<<std::endl;
    std::cout<<"-----------------------------\n"<<std::endl;
    std::cout<<std::fixed << std::setprecision(2)<<"StTax: $ "<<sttax<<std::endl;
    std::cout<<"-----------------------------\n"<<std::endl;
    std::cout<<std::fixed << std::setprecision(2)<<"Union: $ "<<unionlogic<<std::endl;
    std::cout<<"-----------------------------\n"<<std::endl;
    std::cout<<std::fixed << std::setprecision(2)<<"Ins: $ "<<insurancevalue<<std::endl;
    std::cout<<"-----------------------------\n"<<std::endl;
    std::cout<<std::fixed << std::setprecision(2)<<"Net: $ "<<netlogic<<std::endl;
    std::cout<<"-----------------------------\n"<<std::endl;
    std::cout<<"Thank you for using the Payroll Program!";
    
 return 0;

    
    

}