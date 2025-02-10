#include <iostream>

using namespace std;

int main() {

srand(time(0));

int dicestotal, sidestotal;

cout<<"Welcome to the Dice Statistics Program!"<<std::endl;

cout<<"How many dices are in your roll?\n"<<std::endl;

cin>>dicestotal;

cout<<"How many sides are on a dice in your roll?\n"<<std::endl;

cin>>sidestotal;

cout<<"Thank you, when rolling a "<<dicestotal<< "d"<< sidestotal<<" your statistics will be"<<std::endl;


double average_logic = dicestotal * (sidestotal + 1)/2.0;

int max_logic = dicestotal * sidestotal;
int min_logic = dicestotal *1;

cout<<"Minimum: "<< min_logic<<std::endl;

cout<<"Average: "<< average_logic<<std::endl;

cout<<"Maximum: "<<max_logic<<std::endl;





int rolledvalue = rand () % sidestotal+ 1;

cout<<"You rolled a " << rolledvalue<<"!.\n"<<std::endl;

std::cout<<"Thank you for using the DCP!\n"<<std::endl;




return 0;

};
















