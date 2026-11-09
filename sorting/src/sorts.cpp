#include "sorts.h"
#include <algorithm>

using namespace std;

//冒泡排序
void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        bool swapped = 0;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j]< arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = 1;
            }
        }
        if(!swapped) break;
    }
}


//插入排序
void insertionSort(vector<int>& arr){
    int n = arr.size();
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}


//归并排序
void mergeHelper(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;
    
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];
    
    for (int p = 0; p < k; ++p) arr[left + p] = temp[p];
}

void mergeSortHelper(vector<int>& arr, int left, int right){
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSortHelper(arr, left, mid);
    mergeSortHelper(arr, mid + 1, right);
    mergeHelper(arr, left, mid, right);
}

void mergeSort(vector<int>& arr){
    mergeSortHelper(arr, 0, arr.size() - 1);
}


//快速排序
int partition(vector<int>& a, int left, int right) {
    int pivot = a[left];
    int i = left, j = right;

    while (i < j) {
        //必须先j再i
        while (i < j && a[j] >= pivot) j--;
        while (i < j && a[i] <= pivot) i++;
        
        if (i < j) {
            swap(a[i], a[j]);
        }
    }
    swap(a[left], a[i]);
    return i;
}


void quickSortHelper(vector<int>& a, int left, int right){
    if (left >= right) return;

    int mid = partition(a, left, right);
    
    quickSortHelper(a, left, mid - 1); 
    quickSortHelper(a, mid + 1, right); 
}

void quickSort(vector<int>& arr) {
    quickSortHelper(arr, 0, arr.size() - 1);
}