/*
     Store 1 to N in vector without any loop
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> generateNumbers_asc(int n) {
    // Base case: If n is 0, return an empty vector
    if (n == 0) {
        return vector<int>();
    }
    
    // Recursive case: Generate numbers from 1 to n-1 and add n to the result
    vector<int> result = generateNumbers_asc(n - 1);
    result.push_back(n);
    
    return result;
}

vector<int> generateNumbers_desc(int x) {
    // Write Your Code Here
    if(x==0)
    {
        vector<int> arr;
        return arr;
    }
    vector<int> arr1, arr2;
    arr1.push_back(x);
    arr2 = generateNumbers_desc(x-1);
    arr1.insert(arr1.end(), arr2.begin(), arr2.end());
    return arr1;
}

int main() {
    int n = 10;
    vector<int> numbers = generateNumbers_asc(n);
    vector<int> numbers1 = generateNumbers_desc(n);
    
    // Print the generated numbers
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    for (int num : numbers1) {
        cout << num << " ";
    }
    return 0;
}
