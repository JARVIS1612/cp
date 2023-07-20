/*
Dutch National Flag algorithm for sorting of array having only 0s, 1s and 2s;

0 0 0 0 ... 0 1 ... 1 1 1 _ _ _ _ _ _ _ _ 2 2 2 ... 2 2 2
|           | |         | |             | |             |
0       low-1 low   mid-1 mid        high high+1       n-1

0 to low-1     => all 0s
low to mid-1   => all 1s
mid to high    => unshorted array of 0s, 1s and 2s
higt+1 to n-1  => all 2s
*/

void sort012(int *arr, int n)
{
    int mid=0, low = 0, high = n-1;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}