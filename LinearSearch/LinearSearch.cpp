#include <iostream>
using namespace std;

int arr[20]; //array to be searched
int n;       //number of elements in the array
int i;       //index of array element

void input()
{
    while (true)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximun 20 elements.\n\n";
    }

    //accept array elements
    cout << "\n--------------------\n";
    cout << "\n Enter array element \n";
    cout << " --------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << "> ";
    }
}
int main()
{
    std::cout << "Hello World!\n";
}

