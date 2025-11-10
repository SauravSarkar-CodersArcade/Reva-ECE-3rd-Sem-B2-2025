#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {-3, 5, 3, -1, -5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int cmax = arr[0];
    int gmax = arr[0];
    for (int i = 1; i < n; i++)
    {
        cmax = max(arr[i], cmax + arr[i]);
        gmax = max(gmax, cmax);
    }

    cout << gmax << endl;

    return 0;
}