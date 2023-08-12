
//                      *--Array from -MAX to +MAX, we have to search whether an element is present in--*
//                                  *--is present in that array or not using hashing--* 

//                         **Plz read READ.ME file to clear your confusion regarding this explanation**
#include <iostream>
#include <cmath>
using namespace std;
#define MAX 1000 


bool hashtable[MAX+1][2] ={0};

//search function to check if there is key present in table or not
bool search(int key)
{
    if (key >= 0)
    {
        if (hashtable[key][0]==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        key= abs(key);
        if (hashtable[key][1] == 1) { return true; }
        else
        {
            return false;
        }
    }
}


//putting array value in hash table to have their keys 
void insert(int a[], int size)
{
    for (int i = 0; i < size; i++)
        //if a[i] is +ive it is place in 1st row
        if (a[i] >= 0)
        {
            hashtable[a[i]][0] = 1;
        }
        //else put it in 2nd row
        else
        {
            hashtable[abs(a[i])][1] = 1;
        }
}

int main()
{
    //creating the array
    int arr[] = { 1, -2, 10, 11, -99, 67 };

    int n = sizeof(arr) / sizeof(arr[0]);
    insert(arr, n);

    int find = -2;
    if (search(find))
    {
        cout << "Element is present in the array" << endl;
    }
    else
    {
        cout << "Element is not present in the array" << endl;
    }

    return 0;
}
