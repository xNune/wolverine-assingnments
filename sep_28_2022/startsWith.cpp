#include <iostream>
#include <string>
bool startsWith(std::string str1 , std::string str2)
{
    bool flag = false;
    int count = 0;
    int nx = str2.size();
    for(int i = 0; i < str2.size() ; ++i)
    {
if(str1[i] == str2[i])
{
    count++;
}
    }
if(count==nx)
{
    flag = true;
}
return flag;
}
int main()
{
   std::string str1 = "hello world ";
   std::string str2 = "hell";
   if(startsWith (str1 , str2))
   {
    std::cout << "true " << std::endl;
   }
   else
   {
std::cout << "false " << std::endl;
   }

}