#include <cassert>
#include <iostream>


using namespace std;
 
bool valid_password(string password) {

    //check 1
  
   if (password.length() < 8 ){
      return false;

   } else {
    return true;
   }

 // check 2

 char x = 2

 if (password)



  
}
 
int main() {

    //check 1
  assert(!valid_password("a"));
  cout<<"The password must be at least 8 characters."<< endl;
  assert(valid_password("abcdefgtt"));

  // check 2

  assert(!valid_password("1"));
  cout<<"The password must contain at least 2 numbers"<< endl;
  assert(valid_password("12"));


  

  


   
  
  
}