#include <iostream>

using namespace std;

int main() {

srand(static_cast<unsigned int>(time(0)));

std::string choices[3] = {"Rock", "Paper", "Scissors"};
int computerChoice = rand() % 3;
std::string userinputmenu;

    



cout<<"Welcome to Rock, Paper, Scissors! You are going to play against a random computer player.\n"<<std::endl;


cout<<"Pick a move:\n"<<std::endl;

cout<<"1) Rock\n"<<std::endl;
cout<<"2) Papers\n"<<std::endl;
cout<<"3) Scissors\n"<<std::endl;


cin>>userinputmenu;


// game logic (USER SIDE)

if (userinputmenu == "Rock"){
    cout<<"Your selection is the rock\n"<<std::endl;
}else if (userinputmenu == "Paper")
{
    cout<<"Your selection is the paper\n"<<std::endl;
}else if (userinputmenu =="Scissors")
{
    cout<<"Your selection is the scissors\n"<<std::endl;
}

char Rock;


// game logic (COMPUTER SIDE)

if (userinputmenu == choices[computerChoice]) {
    std::cout <<"You win"<< std::endl;
} else if ((userinputmenu == "Rock" && choices[computerChoice] == "Scissors") || 
           (userinputmenu == "Paper" && choices[computerChoice] == "Rock") || 
           (userinputmenu == "Scissors" && choices[computerChoice] == "Paper")) {
    std::cout << "You tied!" << std::endl;
} else {
    std::cout << "You lost" << std::endl;
}
    std::cout << "Computer chose: " << choices[computerChoice] << std::endl;
 

    // validation

    while(1) {

        char playerMove;
        cin >> playerMove;
        if (playerMove == 1 && playerMove==2  &&playerMove ==3) {
            break;
        }
        else if (playerMove != 1 || playerMove != 2 || ! 3)
        {
            cout<<"Invalid input!";
        }
        
    }
    
   
}


