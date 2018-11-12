#include <iostream>
#include <cmath>

void folgen (int zahl)
{

while (zahl != 1 and zahl != 0 and zahl != -1 and zahl != -5 and zahl != -17)
{
	std::cout << zahl << std::endl;
	if (zahl % 2 == 0)
	{
	zahl = zahl/2;
	}
	else
	{
	zahl = zahl*3+1;
	}
}
 std::cout << zahl <<std::endl;
}


int main(int argc, char** argv)
{
int x;
std::cin >> x;
std::cout << std::endl << std::endl;
folgen (x);
}
