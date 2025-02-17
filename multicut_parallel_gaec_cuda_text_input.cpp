#include "parallel_gaec_cuda.h"
#include "multicut_text_parser.h"
#include<stdexcept>

int main(int argc, char** argv)
{
    if(argc != 2)
        throw std::runtime_error("no filename given");
    std::vector<int> i;
    std::vector<int> j;
    std::vector<float> costs;
    std::tie(i,j,costs) = read_file(argv[1]);
    parallel_gaec_cuda(i,j,costs); 
}
