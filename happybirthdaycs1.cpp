#include <iostream> // accesses the library input output stream
#include <format> // accesses the library format

using namespace std;

int main() {
string entername;
  
    cout << "What is your name: "; // enter name
    cin >> entername;
    cout << "Happy birthday to you!\n";
    cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday dear " << entername <<  "!\n"; 
    cout<< "Happy birthday to you!\n";
    
    

    std::cout << R"(
             ~                  ~
     *                   *                *       *
                  *               *
  ~       *                *         ~    *
              *       ~        *              *   ~
                  )         (         )              *
    *    ~     ) (_)   (   (_)   )   (_) (  *
           *  (_) # ) (_) ) # ( (_) ( # (_)       *
              _#.-#(_)-#-(_)#(_)-#-(_)#-.#_
  *         .' #  # #  #  # # #  #  # #  # `.   ~     *
           :   #    #  #  #   #  #  #    #   :
    ~      :.       #     #   #     #       .:      *
        *  | `-.__                     __.-' | *
           |      `````"""""""""""`````      |         *
     *     |         | ||\ |~)|~)\ /         |
           |         |~||~\|~ |~  |          |       ~
   ~   *   |                                 | *
           |      |~)||~)~|~| ||~\|\ \ /     |         *
   *    _.-|      |~)||~\ | |~|| /|~\ |      |-._
      .'   '.      ~            ~           .'   `.  *
   :      `-.__                     __.-'      :
       `.         `````"""""""""""`````         .'
         `-.._                             _..-'
              `````""""-----------""""`````



  
  )" << '\n';  // this is used to format the ASCII characters to display the cale in order so it wont look deformed

 return 0; 
}