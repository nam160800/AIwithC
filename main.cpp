#include <torch/torch.h>

struct Net : torch::nn::Module {
  Net(int64_t N, int64_t M)
      : linear(register_module("linear", torch::nn::Linear(N, M))) {
    another_bias = register_parameter("b", torch::randn(M));
  }
  torch::Tensor forward(torch::Tensor input) {
    return linear(input) + another_bias;
  }
  torch::nn::Linear linear;
  torch::Tensor another_bias;
};

int main() {
  torch::Device device(torch::kCPU);
  
  Net net(4, 5);

  for (const auto& pair : net.named_parameters()) {
    std::cout << pair.key() << ": " << pair.value() << std::endl;
  }
}