## pytorch in C++
1. Defining the Neural Network Models
- python:
    torch.nn.Module
    torch.nn.Parameter
- C++:
    torch::nn::Module
    register_parameter
* using struct in C++ instead of a class in python
* Besides a forward() method that implements the algorim the module ecapsulates, a module usually contains any of three kinds of sub-object: parameters, buffers,submodules