//Գրել ծրագիր, որը կգտնի զանգվածի տարրերի գումարը։

#include <iostream>
int sum_arr (int* arr , int size)
{
int sum = 0;
for(int i = 0 ; i < size ; ++i)
{
    sum += arr[i];
}
return sum;
}
int main()
{
    int size;
    std::cout << "Enter array size " << std::endl;
    std::cin >> size;
    int* arr = new int [size];
    for (int i = 0; i < size ; ++i)
    {
        std::cout << "Enter the array numbers " << std::endl;
        std::cin >> arr[i];
    }
    std::cout << sum_arr(arr, size);
    delete[] arr;
}