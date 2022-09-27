#include <iostream>
#include <string>
std::string trim (std::string str)
{
 int count;
  for(int i = str.size()-1,j = 0; i >=0&&j<str.size(); )
	 
  {
   if(str[i] == ' ')
   {
     str.pop_back();
     i--;
    }
   else
   if(str[j]==' ')
   {
	   count++;  j++;
  }
   else
	   break;
  }
   str.erase(0,count);
return str;

}

int main()
{
 std::string str = "     h e l l    o     " ;
    std::cout << trim(str) << std::endl;
    return 0;
}