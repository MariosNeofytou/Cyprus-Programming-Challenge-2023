#include<iostream>

using namespace std;

int main()
{
    int laptops, sockets=1;
    cout<<"Input how many laptops are available: ";
    cin>>laptops;
    if( laptops>5) // If the number of laptops is above 5 ex: 6, 7, 8.
    {
        laptops -= 5; // The last socket in the row has 5 plugs
        sockets += laptops/4;
        if(laptops%4!=0) // Finds the whether an extra socket is needed depending on the remaining laptops.
        {
            sockets++;
        }
    }
    else if( laptops>1 && laptops<=5) // If the number of laptops is above 1 and lower than 6 ex: 2, 3, 4, 5.
    {
        sockets=1;
    }
    else // If the laptop is 1 no socket is needed.
    {
        sockets=0;
    }
    cout<<"The number of sockets required is: "<<sockets;
}
