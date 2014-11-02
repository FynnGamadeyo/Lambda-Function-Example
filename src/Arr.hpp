#ifndef ARR
#define ARR

#include <functional>


class Arr{
public:
  Arr(int,int);
  ~Arr();
  int ** arr;
private:
  int rows;
  int cols;
};

template<typename lambdafunction2> 
void iterateArray(int **, lambdafunction2,int,int,int);

template<typename lambdafunction> 
void iterateArray2(int **, lambdafunction,int,int);

#endif