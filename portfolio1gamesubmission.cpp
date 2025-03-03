#include <iostream>
#include <random>
#include <ctime>
#include <cstdlib>
#include <limits>
#include <string>

using  namespace std;






int main(){


 

srand(time(NULL));


  
 

int choicesduringgamemade = 0;

int menuselection;


cout<<"\n***********************************************************\n";
std::cout<<"\033[1;32m                     << THE JOURNEY >> \033[0m"<<std::endl;
cout<<"\n***********************************************************\n";



std::cout << R"(
                        ___
 o__        o__     |   |\
/|          /\      |   |X\
/ > o        <\     |   |XX\
)" << '\n';




cout<<"";
cout<<"1. PLAY\n"<<std::endl;
cout<<"_________________________\n"<<std::endl;



cout<<"";


while (!(cin>>menuselection)|| (menuselection != 1)){
       cout<<"Erroneous input. Type 1 only: ";
}  





string entername;
int jerseynumber;
if ( menuselection == 1 ){

  

    
    cout<<"1) ENTER A NAME: ";
    



    cin>>entername;
    cout<<"2) ENTER A JERSEY NUMBER: ";
  
    while (!(cin>>jerseynumber) || (jerseynumber < 1 || jerseynumber > 99)){
       cout<<"Erroneous input! You must type a number between 1-99: ";
       
    


 
}   
 

 
 

  int fullmatch = 90;
   

  
   

   int question1;

   

   for (int time = 50; time <= 90; time++){
   cout<<"-------------";
   cout<<"Game clock: "<<time;
   cout<<"-------------"<<std::endl;
   cout<<"\n"<<std::endl;

   if (time ==50){
    
    
   cout<<" It is the 50th minute in the game! So far, Manchester City is loosing against their rivals, Manchester United!\n"<<std::endl;
   cout<<" "<<std::endl;
   cout<<" "<<std::endl;
   cout<<"The referee stops the time for a quick substitution, it appears that "<<entername<<" with the number "<<jerseynumber <<" is in!\n"<<std::endl;
   cout<<"SUBSTITUTION CALLED! You entered the field!";
   cout<<" You can choose to pass the ball to De Bruyne (1) and Foden (2), who do you choose?\n"<<std::endl;

   
   cout<<"1) De Bruyne"<<std::endl;
   cout<<"2) Foden"<<std::endl;
   
   

   
   }
   while (!(cin>>question1) || (question1 != 1 && question1 != 2)){
       cout<<"Erroneous input! You must type 1 or 2: ";
       

}  

   
   int chances = rand() % 100+1;

   

  
  
      
   if (chances <= 70){
          cout<<"";
          cout<<" [ PASS ] Pass successful! Possession still remains.";
        
        
          
   } else if (chances > 70 && chances <=85)
   {
          cout<<"";
          cout<<"[ PASS ] -> Bad pass, the enemies take control of the ball!";
        
          
   } else if (chances > 85 && chances <=90)
   {
           cout<<"";
           cout<<"[ INJURY ] -> The referee stops the game to allow substitution to be made.";
          
         
           
   } else if (chances > 90 && chances <=100)
   {
     cout<<"";
     cout<<" [ REFEREE ] Player penalized. Due to this action, the referee selects the red card!";
    
   

   
   } 
   


   cout<<"\n";
   cout<<"--------------------\n";
   cout<<"It is the 78th minute on the game clock and you're taking the free kick! Do you want to shoot left or right?\n";
   cout<<"\n";
   cout<<"1) Shoot left\n";
   cout<<"2) Shoot right\n";
   int question2;
  


   while (!(cin>>question2) || (question2 != 1 && question2 != 2)){
       cout<<"Erroneous input! You must type 1 or 2: ";
       
   }

   int chancesq2 = rand() % 100+1;

   

  
  
      
   if (chancesq2 <= 70){
          cout<<"";
          cout<<" [ COMPUTER ] You scored!";
          cout<<" Thanks for playing the game "<<entername<<"!";

      break; 
        
        
          
   } else if (chancesq2 > 70 && chances <=85)
   {
          cout<<"";
          cout<<"[ COMPUTER ] -> You scored!";
          cout<<" Thanks for playing the game "<<entername<<"!";
      break; 
        
          
   } else if (chancesq2 > 85 && chances <=90)
   {
           cout<<"";
           cout<<"[ COMPUTER ] -> You missed!";
           cout<<" Thanks for playing the game "<<entername<<"!";
      break;
          
         
           
   } else if (chancesq2 > 90 && chances <=100)
   {
     cout<<"";
     cout<<" [ USER CHOICE ] -> You missed!";
     cout<<" Thanks for playing the game "<<entername<<"!";

     
    
     break;
   
   
   
   } 
}
   

   
     
   
      
      

      


       
    
      

       
      
      
       
      
      
      
      
   
      
   }

   

 





 
   

   
}


    




