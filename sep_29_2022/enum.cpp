#include <iostream>
#include <map>

enum Color {Red, Green, Blue, Orange};

std::string toString(Color c);
Color toEnum(std::string const&);
int main()
{
    std::cout << toString(Blue) << std::endl;
    std::cout << toEnum("Red") << std::endl;
}
 std::string toString(Color c)
 {
    std::map<Color,std::string>nx;
    nx[Red] = "Red";
    nx[Green] = "Green";
    nx[Blue] = "Blue";
    nx[Orange] = "Orange";

    return nx[c];
 }
 Color toEnum (std::string const& str )
 {
    std::map<Color,std::string>nx;
    nx["Red"] = Red;
    nx["Green"] = Green;
    nx["Blue"] = Blue;
    nx["Orange"] = Orange;
   
    return nx[str];
    
 }