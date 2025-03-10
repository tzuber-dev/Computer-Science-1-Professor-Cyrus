#include "switcherforemots.h"
#include <cassert>
#include <iostream>


#ifdef RUN_TESTS
int main() {
    
    assert(replace_words("The cat and the neighbors kitty are playing with a yarn.")
        == "My /ᐠ｡ꞈ｡ᐟ\\ and (•ㅅ•) are playing with o~.");

    assert(replace_words("An angry cat is starting to dance! What a show!")
        == "The (=ಠᆽಠ=) cat dances!");

    assert(replace_words("Aw! The kitty wants to dance!")
        == "Dance, (•ㅅ•), dance!");

    
    assert(replace_words("Hello world!") == "Hello world!");

    std::cout << "All tests passed!\n";
    return 0;
}
#endif
