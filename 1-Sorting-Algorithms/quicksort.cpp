#pragma once

void swap(int* arr, int a, int b);
void quicksort(int* arr, int low, int high);
int partition(int* arr, int low, int high);

void quicksort(int* arr, int low, int high){
  if(low < high){
    int q = partition(arr, low, high);
    quicksort(arr, low, q-1);
    quicksort(arr, q+1, high);
  }
}

int partition(int* arr, int low, int high){
  int pivot = arr[high];
  int i = low-1;
  for( int j=low; j<=high-1; ++j){
    if(arr[j] <= pivot ){
      ++i;
      swap(arr, i, j);
    }
  }
  swap(arr, i+1, high);
  return i+1;
}

void swap(int* arr, int a, int b){
  int temp = arr[a];
  arr[a] = arr[b];
  arr[b] = temp;
}

