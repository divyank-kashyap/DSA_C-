#include <iostream>
using namespace std;

int reverse(int arr[], int size)
{
    for (int i=size; i>=0; i--)
    {
        cout << arr[i] << " ";
    }
}


int main()
{
    int arr[5] = {10,20,30,40,50};

    reverse(arr,5);


    
}