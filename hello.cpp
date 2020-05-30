#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void hello();
std::vector<long long> fibonacci(int seq);

int main() {

hello();
}

void hello(){

  std::cout << "Hello World!" << std::endl;

  std::vector<long long> fibbo = fibonacci(100);

  for(int i = 0; i < fibbo.size(); i++)
  {
    std::cout << fibbo[i] << std::endl;
  }
  
}

std::vector<long long> fibonacci(int seq)
{
  std::vector<long long> fib_sequence;
  int i = 2;
  fib_sequence.push_back(0);
  fib_sequence.push_back(1);

  while (i < seq) 
  {
    fib_sequence.push_back(fib_sequence[i-2] + fib_sequence[i-1]);
    ++i;
  }

  return fib_sequence;

}