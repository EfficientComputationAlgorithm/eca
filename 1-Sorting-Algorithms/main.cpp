#include "quicksort.cpp"
#include "mergesort.cpp"
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <ctime>
using namespace std;

int main(int argc, char *argv[])
{

  // load set with first file

  std::ifstream count_me(argv[1]);
  std::string line;
  int n = std::count(std::istreambuf_iterator<char>(count_me), std::istreambuf_iterator<char>(), '\n');
  count_me.close();
  int size = n;
  int *arr = new int[n+1];

  std::ifstream sort_me(argv[1]);
  while( getline(sort_me,line) ){
    arr[n] = stoi(line);
    --n;
  }

  int* s_ar = new int[size];
  // Getting Time 4 Mergesort
  clock_t begin_time = clock();
  s_ar = mergesort(arr,0,size);
  std::cout << (float( clock () - begin_time ) /  CLOCKS_PER_SEC);

  delete[] s_ar;
  cout<< ' ';
  // Getting Time 4 quicksort
  begin_time = clock();
  quicksort(arr,0,size);
  std::cout << (float( clock () - begin_time ) /  CLOCKS_PER_SEC);
  cout << endl;
  delete[] arr;
  sort_me.close();
  return 0;
}

/*
int main(){




  int size = 7;
  int arr[] = {0,  123, 3, 4, 2,  8, 1, -3};
  int* aar = new int[size];
  aar = mergesort(arr,0,size);
  for(int i = 0;i<=size;++i){
    cout << aar[i] << " ";
  }
  cout << endl;
}


void quicksort_test(int* arr,int size){
  //int arr[] = { 9, 3, 4, 2, 1, 8 };
  quicksort(arr,0,5);
  for(int i = 0;i<6;++i){
    cout << arr[i] << " ";
  }
  cout << endl;
}

*/
