// sort array
#include <bits/stdc++.h>
using namespace std;
class MaxMin
{
public:
    int arr[10] = {6, 7, 5, 8, 5, 4, 3, 2, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int findMax()
    {
        return *max_element(arr, arr + size);
    }
    int findMin()
    {
        return *min_element(arr, arr + size);
    }
};
int main()
{
    MaxMin obj;
    cout << "Max Element is: " << obj.findMax() << endl;
    cout << "Min Element is: " << obj.findMin() << endl;
}