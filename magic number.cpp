#include <iostream>
#include <cstdlib>
using namespace std;
void play(int s);
int main()
{ 
 int option,magic;
 magic = rand();
 do {
        cout << "1.Recieve new magic number.\n";
        cout << "2.Play the game.\n";
        cout << "3.Exit.\n";
        do {
            cout << "Enter your variant: \n";
            cin >> option;
            } while(option<1 || option>3);
        switch (option)
        {
        case 1:
            magic =rand();
            break;
        case 2:
            play(magic);
            break;
        case 3:
            cout << "Bye!";
            break;
            }
         } while(option != 3);
    
         return 0;   
    }


void play (int s)
{
    int t,x;
    
    for(t = 0;t < 30;t ++){
    cout << "Guess magic number: ";
    cin >> x;
    
    if (x == s){
        cout << "***Right!!!***.\n";
            return;
    }
    else 
        if (x < s) cout << "Too less.\n";
        else cout << "Too much.\n";
       }
    
    cout << "U spent all chances to guess the number."
    << "Try again.\n";
}         
