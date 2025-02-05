#include <iostream>
#include <cmath>

using namespace std; 

int main() {

    int yesorno;
    cout<<"==========================================================================="<<std::endl;

    cout<<"Welcome to the ASCII Shapes program! Would you like to draw a (1) square or (2) triangle?"<<std::endl;

    cout<<"==========================================================================="<<std::endl;
    

    
    cin >> yesorno;
   
   
   if (yesorno == 2){




     
    int i, j, k, n;
    cout << "Please enter number of rows you want to see: \n";
    cin >> n;

    cout<<"Here is your triangle:"<<std::endl;
    for (k = 1; k <= n; k++)
    {
       for(j = 1; j <= n-k; j++)
            cout << ' ';
       for (i = 1; i <= 2*k-1; i++)
            cout << '*';
       cout << endl;
    }
    
   

        
         
 



    
}


if (yesorno == 1) 
    {

     int i, j, k, n;
     cout << "Please enter number of rows you want to see: \n";
     cin >> n;
        for (int i = 0; i < n; i++) {
            cout << "* ";
        }
        cout << endl;

        
        for (int i = 0; i < n - 2; i++) {
            cout << "*";
            for (int j = 0; j < n - 2; j++) {
                cout << "  ";
            }
            cout << " *" << endl;
        }

        
        for (int i = 0; i < n; i++) {
            cout << "* ";
        }
        cout << endl;

        return 0;

    }

    
    return 0;

}