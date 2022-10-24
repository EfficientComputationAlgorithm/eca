#pragma once
#include <iostream>

int* mergesort(int* arr, int low, int high){
  //Stop Condition
  //std::cout << "enter->"<<high-low<<"="<<high<<"-"<<low<< std::endl;
  if((high-low)<2){
    //std::cout << "stop-condition->"<<high-low<<"="<<high<<"-"<<low<< std::endl;
    for(int i = low;i<=high;++i){
      ////std::cout << arr[i];
    }
    //std::cout << std::endl;

    if( (high-low)==1 && arr[low] > arr[high]){
      int temp = arr[low];
      arr[low] = arr[high];
      arr[high] = temp;
    }
    int *array = new int[(high-low)+1];
    int a = 0;
    for(int i=low;i<=high;++i){
      array[a] = arr[i];
      ++a;
    }
    //std::cout << "stop-condition(after)->"<<high-low<<"="<<high<<"-"<<low<< std::endl;
    for(int i = low;i<=high;++i){
      //std::cout << arr[i];
    }
    //std::cout << std::endl;

    return array;
  }

  //int nl = middle-l+1
  int middle = low +((high-low)/2);
  int *arr_1 = mergesort(arr, low, middle);
  int *arr_2 = mergesort(arr, middle+1, high);

  //std::cout << "arr_1-condition: ";//<< std::endl;
  //std::cout << low <<"<- low/ middle->";
  //std::cout << middle<< ' '<<std::endl;
  for(int i = 0;i<=middle-low;++i){
    //std::cout << arr_1[i]<< ' ';
  }
  //std::cout << std::endl;

  //std::cout << "arr_2-condition: ";//<< std::endl;
  for(int i = 0;i<(high-middle);++i){
    //std::cout << arr_2[i]<< ' ';
  }
  //std::cout << std::endl;

  int k = 0;
  int l = 0;

  int *array = new int[high-low+1];

  while( k<=middle-low && l<(high-middle) ){
    if(arr_1[k]<=arr_2[l]){
      array[k+l] = arr_1[k];
      ++k;
    }else{
      array[k+l] = arr_2[l];
      ++l;
    }
  }

  while(k<=middle-low){
    array[k+l] = arr_1[k];
    ++k;
  }

  while(l<high-middle){
    array[k+l] = arr_2[l];
    ++l;
  }

  return array;
}
