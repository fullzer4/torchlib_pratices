#include <iostream>
#include <torch/torch.h>

int main(){
  torch::Tensor x = torch::randn({3,3}); 
  std::cout << x;
}
