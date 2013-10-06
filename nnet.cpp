#include "nnet.h"
#include <cmath>


NNet::NNet(size_t sz, size_t layers)
:   m_sz(sz), m_layers(layers)
{
    size_t neurons = m_sz * m_layers;
    m_nn.resize(neurons * neurons + neurons, 0);
}

std::size_t NNet::pos(std::size_t neuron) const
{
    return neuron * m_sz * m_layers + neuron;
}

void NNet::set(std::size_t neuron, float val)
{
    m_nn[pos(neuron)] = val;
}

void NNet::teach(float importance)
{
    size_t neurons = m_sz * m_layers;
    for(size_t neuron = 0; neuron != neurons; ++ neuron)
    {
        size_t neuronPos = pos(neuron);
        float neuronAVal = m_nn[neuronPos];
        for(size_t binding = 0; binding != neurons; ++binding)
        {
            float& bindingVal = m_nn[neuronPos + binding + 1];
            float neuronBVal  = m_nn[pos(binding)];
            float correlation = 1 - abs(neuronAVal - neuronBVal);
            float corrDiff    = correlation - bindingVal;
            bindingVal        += corrDiff * importance;
        }
    }
}

void NNet::eval()
{
    size_t neurons = m_sz * m_layers;
    for(size_t neuron = 0; neuron != neurons; ++ neuron)
    {
        size_t neuronPos  = pos(neuron);
        float& neuronAVal = m_nn[neuronPos];
        for(size_t binding = 0; binding != neurons; ++binding)
        {
            //TODO: Hier iets doen met de neuronen zelf
            float bindingVal  = m_nn[neuronPos + binding + 1];
            float neuronBVal  = m_nn[pos(binding)];
            float correlation = 1 - abs(neuronAVal - neuronBVal);
            float corrDiff    = correlation - bindingVal;
            //bindingVal        += corrDiff * importance;
        }
    }
}
