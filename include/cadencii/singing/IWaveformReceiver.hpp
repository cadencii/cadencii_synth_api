#pragma once

namespace cadencii {
namespace singing {

class IWaveformReceiver
{
public:
    virtual ~IWaveformReceiver()
    {}

protected:
    virtual void operator () (double * left, double * right, size_t length) = 0;
};

}
}
