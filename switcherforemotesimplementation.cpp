#include "switcherforemots.h"
#include <string>


void replace_first_word(std::string& str,
    const std::string& from,
    const std::string& to)
{
   
    size_t pos = str.find(from);
    if (pos == std::string::npos) {
        return; 
    }

  
    size_t end_pos = pos + from.size();

    bool boundary_left = (pos == 0) || (str[pos - 1] == ' ');
    bool boundary_right = (end_pos == str.size()) || (str[end_pos] == ' ');

   
    if (boundary_left && boundary_right) {
        str.replace(pos, from.size(), to);
    }
}

std::string replace_words(const std::string& input) {
    std::string result = input;

   
    replace_first_word(result, "cat", "/ᐠ｡ꞈ｡ᐟ\\");
    replace_first_word(result, "kitty", "(•ㅅ•)");
    replace_first_word(result, "kitten", "(•ㅅ•)");
    replace_first_word(result, "yarn", "o~");
    replace_first_word(result, "angry", "(=ಠᆽಠ=)");
    replace_first_word(result, "dance", "~( ˘▾˘ ~)");

    return result;
}



#cout << "ignore";
