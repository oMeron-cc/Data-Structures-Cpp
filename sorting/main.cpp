#include <iostream>
#include <vector>
#include "sorts.h"
using namespace std;


void printArray(const vector<int>& arr) {
    for (int x : arr) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> origin = {5, 2, 9, 1, 5, 6};
    
    vector<int> arr1 = origin;
    bubbleSort(arr1);
    cout << "冒泡排序: "; printArray(arr1);

    vector<int> arr2 = origin;
    insertionSort(arr2);
    cout << "插入排序: "; printArray(arr2);

    vector<int> arr3 = origin;
    mergeSort(arr3);
    cout << "归并排序: "; printArray(arr3);

    vector<int> arr4 = origin;
    quickSort(arr4);
    cout << "快速排序: "; printArray(arr4);

    return 0;
}