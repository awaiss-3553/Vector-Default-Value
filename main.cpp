#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout<<"enter your value";
    cin>>n;
    vector<int> arr(n,8);
    for(int i=0;i<n;i++)
    cout<<arr[i];

    return 0;
}
