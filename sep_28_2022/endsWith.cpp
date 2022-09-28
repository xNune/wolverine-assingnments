#include <iostream>
#include <string>
bool endsWith (std::string str1 , std::string str2)
{
    int count = 0;
    int size1 = str2.size();
    int size2= str1.size();
    int flag = false;
    for(int i = size2-1, j=size1-1; j>=0;--i , --j)
    {
if(str1[i] == str2[j])
{
    count++;
}
    }
if(count==size1)
{
    flag = true;
}
return flag;
    }
int main()
{
    std::string  str1 = "hello , world";
    std::string str2 = "world";
   if(endsWith(str1 , str2))
   {
    std::cout << "true " << std::endl;
   }
   else
   {
std::cout << "false " << std::endl;
   }

}