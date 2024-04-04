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
    cout << "\n Enter array element \n"; //memasukkan element array
    cout << " --------------------\n";
    for (i = 0; i < n; i++) //mencetak nomor urut elemen array
    {
        cout << "<" << (i + 1) << "> ";
        cin >> arr[i];
    }
}
void linearSearch()
{
    char ch;
    int ctr; //number of comparison
    int item; //menyimpan nilai array dalam pencarian linear

    do
    {
        //accept the number to be searched
        cout << "\nEnter the lement you want to search: "; //step 1
        cin >> item;

        ctr = 0;
        i = 0; //step 2
        while (i < n) //step 3
        {
            ctr++;
            if (arr[i] == item)
            {
                cout << "\n " << item << " found at position " << (i + 1)
                    << endl; //step 6
                break;
            }
            i++; //step 4
        }

        if (i == n) //step 5
            cout << "\n" << item << " not found in the array\n";
        cout << "\nNumber of comparisons: " << ctr << endl;

        cout << "nContinue search (y/n): "; //melanjutkan program atau tidak
        cin >> ch;

    } while ((ch == 'y') || (ch == 'Y'));
}

void display()
{
    cout << "Array elements are: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    input();
    linearSearch();
    display();
}

