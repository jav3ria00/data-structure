#include <iostream>
using namespace std;

int main() 
{
   int length, breadth, area;

   cout << "Simple C++ Program : Area Of Rectangle\n";
   cout << "\nEnter the Length of Rectangle : ";
   cin>>length;

   cout << "\nEnter the Breadth of Rectangle : ";
   cin>>breadth;

   area = length * breadth;
   cout << "\nArea of Rectangle : " << area;

   return (0);
}
