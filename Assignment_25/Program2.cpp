#include<iostream>
using namespace std;

void ToUprx(char arr[])
{
    int i = 0;

    while(arr[i] != '\0')
    {
        if(arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 32;
        }

        i++;
    }

    cout<<"The String after conversion into uppercase is : "<<arr;
}

int main()
{
    char arr[50];

    cout<<"Enter the string\n";

    cin.getline(arr,50);

    ToUprx(arr);

    return 0;
}