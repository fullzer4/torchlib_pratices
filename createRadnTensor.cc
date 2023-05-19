#include <torch/torch.h>
#include <iostream>

void randTensor(){
    torch::Tensor tensor = torch::rand({2, 3});
    return tensor;
}

int main() {
    std::cout << randTensor();
}