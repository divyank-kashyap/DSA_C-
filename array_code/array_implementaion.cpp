# include <iostream>
using namespace std;

int sum(int x, int y)
{
    return (x + y);
}


void arr(int arr_name[], int size)
{
    cout << "Visiting array elements : " << endl;
    for (int i=0; i<size; i++)
    {
        cout << arr_name[i] << " ";
    }
}



int main()
{
    
    int number[15] = {10,20,30,40};             // declared an array

    number[0] = 10;
    
    cout << "\n" << "Array '0' location: " << number[0] << endl;

    cout << "Array: "<< number[15];


    cout << "Array : "; 
    for (int i=0; i<15; i++)
    {
        cout << number[i] << " ";
    }
    cout << endl;


    cout << "sum of a + b = " << sum(10,20) << endl;


    arr(number,15);
    
}