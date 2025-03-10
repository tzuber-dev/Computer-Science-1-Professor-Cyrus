#include "switcherforemots.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    std::cout << "Welcome to the Cat Word Processor! Please enter a sentence:\n";

    std::string sentence;
    std::getline(std::cin, sentence);

    std::string modified = replace_words(sentence);

    cout << "State your original sentence:\n" << sentence <<std::endl;
    cout << "\n";
    cout << "\n";
    cout << "Your newly shaped sentence is:\n" << modified <<std::endl;


    cout << "==============\n"<<std::endl;
    cout << "Have a cat-tastic day!\n";

    return 0;
}



#cout << "ignore";