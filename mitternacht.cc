#include <iostream>
#include <cmath>


int main(int argc, char** argv)
{
double a;
double b;
double c;
std::cout << "a = " << std::flush;
std::cin >> a;
std::cout << "b = " << std::flush;
std::cin >> b;
std::cout << "c = " << std::flush;
std::cin >> c;

std::cout << std::endl << a << "x^2+" << b << "x+" << c <<  "=" << std::endl << std::endl;

if (a == 0 and b == 0)
{ 
std::cout << "keine Lösung" << std::endl << std::endl ;
}


else if ((b*b-4*a*c) < 0)
{
std::cout << "Lösung ist komplex" << std::endl << std::endl ;
}


else
{ 
double x = (-b+(std::sqrt(b*b-4*a*c)))/2*a;
double y = (-b-(std::sqrt(b*b-4*a*c)))/2*a;
std::cout << "x1 = " << x <<std::endl;
std::cout << "x2 = " << y <<std::endl;
}
}
