#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void selectionSort(vector<int>&arr) {
    int start = 0;
    while(start<arr.size())
    {
        int min =  min_element(arr.begin()+start, arr.end()) - arr.begin();
        swap(arr[min], arr[start]);
        start++;
    }
}

void bubbleSort(vector<int>& arr) {
     int n = arr.size();
    for(int i=0; i<n-1; i++)
    {
        int flag = 0;
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag = 1;
                swap(arr[j], arr[j+1]);
            }
        }
        if(flag==0)
            break;
    }
}

void insertionSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); ++i) 
    {
        int pivot = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > pivot) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = pivot;
    }
}

int main()
{
     vector<int> array{1,2,3,4,5,6,7,1,5,9,8};
     selectionSort(array);
     for(int x: array)
          cout << x << " ";
     cout << "\n";

     vector<int> array1{1,2,3,4,5,6,7,1,5,9,8};
     bubbleSort(array1);
     for(int x: array1)
          cout << x << " ";
     cout << "\n";

     vector<int> array2{1,2,3,4,5,6,7,1,5,9,8};
     insertionSort(array2);
     for(int x: array2)
          cout << x << " ";
     cout << "\n";
     return 0;
}