#include <iostream>
using namespace std;



int sum_arr(int arr_name[], int size)
{
    int sum =0;
    for (int i=0; i<size; i++)
    {
        sum = sum + arr_name[i];
    }
    return sum;
}


int main()
{
    int size;                                                          // size of array
    cin >> size;                                                       
    int arr[size]={};                                                  // 
    for (int i=0; i<size; i++)
    {
        int input;
        cin >> input;
        arr[i] = input;
    }
    

    cout << sum_arr(arr,size);


}