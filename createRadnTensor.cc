#include <torch/torch.h>
#include <iostream>
#include <std.h>

void randTensor(){

    torch::Tensor tensor;
    tensor = torch::rand({2, 3});
    std::cout << tensor << std::endl;
    
}

int main() {
    randTensor();
}