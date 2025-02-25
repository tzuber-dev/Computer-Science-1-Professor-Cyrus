#include <iostream>
#include <unistd.h>
#include <random>
#include <ctime>
#include <cstdlib>
#include <string>

using  namespace std;

int main(){
 //seeding random number generator

 srand(time(0));
  // loading menu

 std::cout<< "-" << std::flush;
 for (;;) {
  sleep(1);
  std::cout<< "\b\\" << std::flush;
  sleep(1);
  std::cout<< "\b/" << std::flush;
  sleep(1);
  std::cout<< "\b-" << std::flush;
  break;
 }

 

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
cout<<"2. CREDITS\n"<<std::endl;
cout<<"_________________________\n"<<std::endl;
cout<<"3. ABOUT\n"<<std::endl;



cin>> menuselection;



 // credits (option 2)

 if (menuselection == 2){
    cout<<" ";
    cout<<"GAME CREATOR: Tomasz Zuber\n"<<std::endl;
    cout<<"**GAME DESIGNED FOR PROFESSOR CYRUS COMPUTER SCIENCE 121\n"<<std::endl;
}

// about (option 3)

 if (menuselection == 3){

  cout<<" -- PROPERTY OF TOMASZ ZUBER --\n"<<std::endl;

  cout<<"| ABOUT\n"<<std::endl;

  cout<<"It is the 50th minute into the game between the rivals Manchester United and Manchester City. Manchester city are down 2-0 and its the FA cup final, winner gets all. After an out of bounds play, the head coach of Manchester City, Pep Guardiola, makes a crucial change of substituting you on the field. You get to take the throw in, where you're presented a question of who to throw the ball to that is the closest within your perimeter (choices are Haaland or Rodri). After choosing a player, each choice will contain different outcomes (randomness) of whether or not the player will successfully put the ball in the net or fail. If the player manages to equalize and go to penalties, the outcomes will also be randomized.";


 }

 // open up game (option 1)

string entername, jerseynumber;
if ( menuselection == 1 ){

  

    // registration player info
    cout<<"1) ENTER A NAME: ";
    cin>>entername;
    cout<<"2) ENTER A JERSEY NUMBER: ";
    cin>>jerseynumber;
    


 
}   
 

 
  //variable declarations

  int fullmatch = 90;
   

   // game loop 

   cout<<" It is the 50th minute in the game! So far, Manchester City is loosing 0-1 with their rivals, Manchester United!\n"<<std::endl;
         cout<<" "<<std::endl;
         cout<<" "<<std::endl;
        cout<<"Pep Guardiola calls on his substitute, "<<entername<<" with the number "<<jerseynumber <<"!\n"<<std::endl;
        cout<<"SUBSTITUTION CALLED! You entered the field!";

   for (int time = 50; time <= fullmatch; time++){

    int chances = rand() % 100+1;
     
      
      if (chances <= 25){
             cout<<"Pass successful! Possession still remains. 📜";
             return 0;
      }else if (chances > 5 && chances <=15)
      {
             cout<<"Pass unsuccessful! Possession lost.";
             return 0;
      } else if (chances > 20 && chances <=23)
      {
              cout<<"Injury occurred! The referee paused the game.";
              return 0;
      } else if (chances > 18 && chances <=29)
      {
        cout<<"Player penalized. Red card given!";
      } else (time == 50);{
        cout<<"You can choose to pass the ball to Rodri (1) and Haaland (2), who do you choose?\n"<<std::endl;
        cout<<"1) Rodri"<<std::endl;
        cout<<"2) Haaland"<<std::endl;
        int selectoption;
        cin >> selectoption;
      }
      
       
      
      
      
      
   
      
   }

 





 
   

   
}


    




