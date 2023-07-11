#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void print(vector<int> arr)
{
    cout << "\n";
    for(auto x: arr)
        cout << x << " ";
    cout << "\n";
}

int partitionArray(vector<int> &input, int start, int end) {
	int l = start, r = end, pivot = input[start];

	while(l<r)
	{
		while(input[l]<=pivot)l++;
		while(input[r]>pivot)r--;
		if(l<r)
			swap(input[l], input[r]);
	}
	swap(input[start], input[r]);
	return r;
}

void quickSort(vector<int> &input, int start, int end) {
	if(start<end)
	{
		int loc = partitionArray(input, start, end);
		quickSort(input, start, loc-1);
		quickSort(input, loc+1, end);
	}
}


void merge(vector<int>& arr, int l, int mid, int r){
    int i = l, j = mid+1;
    vector<int> temp_arr;
    while(i<=mid && j<=r)
    {
        if(arr[i]<=arr[j])
            temp_arr.push_back(arr[i++]);
        else
            temp_arr.push_back(arr[j++]);
    }
    while(i<=mid)
        temp_arr.push_back(arr[i++]);
    while(j<=r)
        temp_arr.push_back(arr[j++]);

    int c = 0;
    for(int i=l; i<=r; i++)
        arr[i] = temp_arr[c++];
}

void mergeSort(vector<int>& arr, int l, int r) {
    if(l<r)
    {
        int mid = (l + r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
}

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
     print(array);
     vector<int> array1{1,2,3,4,5,6,7,1,5,9,8};
     bubbleSort(array1);
     print(array1);

     vector<int> array2{1,2,3,4,5,6,7,1,5,9,8};
     insertionSort(array2);
     print(array2);

     vector<int> array3{1,2,3,4,5,6,7,1,5,9,8};
     mergeSort(array3, 0, 10);
     print(array3);

     vector<int> array4{1,2,3,4,5,6,7,1,5,9,8};
     quickSort(array4, 0, 10);
     print(array4);
     return 0;
}