#include <iostream> 
#include <format> 
using namespace std;

int main() {
string entername;
  
    cout << "What is your name: "; 
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



  
  )" << '\n'; 
 return 0; 
}