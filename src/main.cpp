#include <boost/concept_check.hpp>
#include "iostream"
#include "Arr.hpp"

template<typename lambdafunction> 
void example1(int * arr, lambdafunction function, int length){
  for(int i=0;i<length;i++)
    arr[i]=function(arr[i]);
}


void example2(int * arr, int(*a)() , int length){
  for(int i=0;i<length;i++)
    arr[i]=a();
}

void example3(int * arr, std::function<int()> a, int length){
  for(int i=0;i<length;i++)
    arr[i]=a();
}

int functionA(){
    return 9;
}

int functionB(){
    return 91;
}

int main(){

  int* arr;
  arr = new int[3];
  arr[0]=1;
  arr[1]=2;
  arr[2]=3;
  
  std::cout << arr[0] << arr[1] << arr[2] << std::endl;
  
  // Example 1 BEGIN
  example1(arr,[](int a){return 2+a;},3);
  std::cout << arr[0] << arr[1] << arr[2] << std::endl;
  // Example 1 END
  
  // Example 2 Begin
  example2(arr, &functionA , 3);
  std::cout << arr[0] << arr[1] << arr[2] << std::endl;
  // Example 2 END
  
  // Example 3 Begin
  example3(arr, functionB , 3);
  std::cout << arr[0] << arr[1] << arr[2] << std::endl;
  // Example 3 END
  
  return EXIT_SUCCESS;
}
