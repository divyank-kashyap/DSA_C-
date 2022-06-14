#include <iostream>
using namespace std;

bool linear(int arr[], int size, int element)
{
    for (int i=0; i<size; i++)
    {
        if (arr[i] ==  element)
        {
            return 1;
        }
    }
    return 0;
}


int main()
{
    int arr[10] = {10,20,30,40,50,60,70};
    int element;  
    cin >> element;                          // element to  be compared

    bool found = linear(arr, 10, element);
    
    if (found)
    {
        cout << "Element " << element << " is present in Array ";
    }
    else 
    {
        cout << "Element " << element << " is absent ";
    }


}