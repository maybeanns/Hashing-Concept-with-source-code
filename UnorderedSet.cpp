
//                                  **Unordered Set: Hashing Data Structure**
//                             **-It is more imp than ordered cz it take O(1) time-**
#include <iostream>
#include <unordered_set>

using namespace std;
int main()
{

    // declaring unordered set
    unordered_set<int> s;
    s.insert(20);
    s.insert(5);
    s.insert(89);
    // 20 will only be shown once in the output because duplicacy is not allowed in unordered set
    s.insert(20);

    // creating an iterator to traverse through the u-set
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    //**the order will be random in the output cz "unordered"

    cout << "Number of elements in the unordered set: " << s.size() << endl;

    // s.clear(); //clear the unordered set
    // s.empty(); //check if the set is empty or not

    int key = 5;
    cout<<"Key (5) status in the set: ";
    if (s.find(key) == s.end())
    {
        cout << "Key not found" << endl;
    }
    else
    {
        cout << "Found Key" << endl;
    }

    cout<<"Erasing 5 from the set: ";
    s.erase(key);
     for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    
    //s.count(key); //give 1 or 0 based on the avaliability of the key in unordered set
    
    
    return 0;

}