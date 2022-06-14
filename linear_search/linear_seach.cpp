#include <iostream>
using namespace std;

int compare(int arr[], int size, int num)
{
    for (int i=0; i<size; i++)
    {
        if (arr[i] == num) 
        {
            cout << "Yes ", num, " is present in the array";
        }
        else
        {
            cout << "No ", num, " is not present in the array"; 
        }
    }
}


int main()
{
    int arr [10] = {10, 1, 0, -45, 10, 43, 26, -4, 100, 23};

    int num;                    // num to be entered and compared by the user
    cin >> num;


    compare(arr, 10, num);



}