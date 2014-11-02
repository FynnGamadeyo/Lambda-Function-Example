#include "Arr.hpp"

Arr::Arr(int col, int row)
{
    this->cols=col;
    this->rows=row;
    this->arr = new int *[rows];
  
    
}

Arr::~Arr()
{

}

template<typename lambdafunction2> 
void iterateArray(int* arr, lambdafunction2 function,int start,int end,int a)
{
    for(int i=start;i<=end;i++)
      arr[i]=function(a);
}

template<typename lambdafunction> 
void iterateArray2(int** arr, lambdafunction function, int cols, int rows)
{
    for(int i=0;i<rows;i++)
      for(int x=0;x<cols;x++)
	arr[i][x]=1;
	
}
