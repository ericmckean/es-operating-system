// Generated by esidl (r1745).
// This file is expected to be modified for the Web IDL interface
// implementation.  Permission to use, copy, modify and distribute
// this file in any software license is hereby granted.

#ifndef ORG_W3C_DOM_BOOTSTRAP_FLOAT64ARRAYIMP_H_INCLUDED
#define ORG_W3C_DOM_BOOTSTRAP_FLOAT64ARRAYIMP_H_INCLUDED

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <org/w3c/dom/typedarray/Float64Array.h>
#include "ArrayBufferViewImp.h"

#include <org/w3c/dom/typedarray/ArrayBuffer.h>
#include <org/w3c/dom/typedarray/ArrayBufferView.h>
#include <org/w3c/dom/typedarray/Float64Array.h>

namespace org
{
namespace w3c
{
namespace dom
{
namespace bootstrap
{
class Float64ArrayImp : public ObjectMixin<Float64ArrayImp, ArrayBufferViewImp>
{
public:
    // Float64Array
    unsigned int getLength() __attribute__((weak));
    double get(unsigned int index) __attribute__((weak));
    void set(unsigned int index, double value) __attribute__((weak));
    void set(typedarray::Float64Array array) __attribute__((weak));
    void set(typedarray::Float64Array array, unsigned int offset) __attribute__((weak));
    void set(ObjectArray<double> array) __attribute__((weak));
    void set(ObjectArray<double> array, unsigned int offset) __attribute__((weak));
    typedarray::Float64Array subarray(int start, int end) __attribute__((weak));
    // Object
    virtual Any message_(uint32_t selector, const char* id, int argc, Any* argv)
    {
        return typedarray::Float64Array::dispatch(this, selector, id, argc, argv);
    }
    static const char* const getMetaData()
    {
        return typedarray::Float64Array::getMetaData();
    }
};

}
}
}
}

#endif  // ORG_W3C_DOM_BOOTSTRAP_FLOAT64ARRAYIMP_H_INCLUDED
