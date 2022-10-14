#include <iostream>
using namespace std;

main() 
{
   unsigned int a = 60;	  // 60 = 0011 1100  
   unsigned int b = 13;	  // 13 = 0000 1101
   int c = 0;           

   c = a & b;             // 12 = 0000 1100
   cout << "Line 1 - Value of c is : " << c << endl ;

   c = a | b;             // 61 = 0011 1101
   cout << "Line 2 - Value of c is: " << c << endl ;

   c = a ^ b;             // 49 = 0011 0001  (XOR)
   cout << "Line 3 - Value of c is: " << c << endl ;

   c = ~a;                // -61 = 1100 0011
   cout << "Line 4 - Value of c is: " << c << endl ;

   c = a << 2;            // 240 = 1111 0000        // 60*2^2
   cout << "Line 5 - Value of c is: " << c << endl ;

   c = a >> 2;            // 15 = 0000 1111         //60/2^2
   cout << "Line 6 - Value of c is: " << c << endl ;

   c = b << 2;            // 110100 = 52  // its like 13*2^2 ie 2^(shift number)
   cout << "Line 7 - Value of c is: " << c << endl ;

   c = b >> 2;            // 0011 = 3  (01 at right is cut)  // its like 13/2^2
   cout << "Line 8 - Value of c is: " << c << endl ;

    c = b >> 0;            // no shift will occur  // 13/2^0
    cout << "Line 8 - Value of c is: " << c << endl ;

    c = b >> 3;            // 13/2^3       // do b>>4 if shift 4 then zero will come,see in binary form
   cout << "Line 9 - Value of c is: " << c << endl ;

    c = b <<1;            //  13*2^1
   cout << "Line 10 - Value of c is: " << c << endl ;





   return 0;
}
