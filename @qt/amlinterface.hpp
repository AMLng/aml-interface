#ifndef AMLINTERFACE_HPP
#define AMLINTERFACE_HPP
#include <QByteArray>

#include <functional>

namespace aml {
typedef std::function<void(const QByteArray &)> sinkfunction;

class Uplooking
{
public:
    virtual ~Uplooking();
    virtual sinkfunction uplookingSink() = 0;
    virtual void connectUplookingSource(sinkfunction toUpperSink) = 0;
};

class Downlooking
{
public:
    virtual ~Downlooking();
    virtual sinkfunction downlookingSink() = 0;
    virtual void connectDownlookingSource(sinkfunction toLowerSink) = 0;
};

}
#endif // AMLINTERFACE_HPP
