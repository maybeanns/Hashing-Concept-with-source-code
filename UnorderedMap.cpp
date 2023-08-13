//                                    **Unordered Map : Hashing Concept**
//                              *-diff b/w set and map is; set stores certain elements-* 
//                                      *-while map stores key-value pairs-* 

#include <iostream>
#include <unordered_map>

using namespace std;
int main()
{
    unordered_map<string, int> umap;
    umap["anns"] = 510;
    umap["ali"] = 299;
    umap["alena"] = 696;
    cout << "The size of the map is: " << umap.size() << endl;

    for (auto itr = umap.begin(); itr != umap.end(); itr++)
    {
        cout << itr->first << " : " << itr->second << endl;
    }

    // Finding a key in a unordered map
    string key = "anns";
    if (umap.find(key) != umap.end())
    {
        auto temp = umap.find(key);
        cout << "Key Found at " << temp->second << endl;
    }
    else
    {
        cout << "Key Not Found" << endl;
    }

    //Inserting in map 
    umap.insert(make_pair("ahmed", 002));
    cout << "The size of the map is: " << umap.size() << endl;

    for (auto itr = umap.begin(); itr != umap.end(); itr++)
    {
        cout << itr->first << " : " << itr->second << endl;
    }

//                                    ***EXAMPLE # 2***
//                                  **counting repeatition of elements**

    int arr[] = {3,4,6,7,2,3,4,5,4,5,6,7,5,6,4,5};
    unordered_map<int, int> umap2;

    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i <= n; i++)
    {
        int ki = arr[i];
        umap2[ki]++;
    }


    for (auto itr = umap2.begin(); itr != umap2.end(); itr++)
    {
        cout << itr->first << " : " << itr->second << endl;
    }

}