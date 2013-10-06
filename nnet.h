#ifndef NNET_H
#define NNET_H

#include <vector>
using std::size_t;

class NNet
{
public:
    typedef std::vector<float> float_vector_t;
    NNet(size_t sz, size_t layers);

    size_t pos(size_t neuron) const;
    void set(size_t neuron, float val);

    void teach(float importance = 0.1f);
    void eval();

    float get(size_t neuron);


    float_vector_t m_nn;

    size_t m_sz;
    size_t m_layers;
};

#endif // NNET_H
