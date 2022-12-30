#include <iostream>
using namespace std;
 
int main()
{
    int bil, i;
    bool Prima = true;
 
    cout << "Masukan bilangan bulat positif: ";
    cin >> bil;
 
    for(i = 2; i <= bil / 2; ++i)
    {
        if(bil % i == 0)
        {
            Prima = false;
            break;
        }
    }
     
    if (Prima)
        cout << "Bilangan tersebut adalah bilangan prima.";
    else
        cout << "Bilangan tersebut bukan bilangan prima.";
 
    return 0;
}