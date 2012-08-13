// Generated by esidl (r1745).
// This file is expected to be modified for the Web IDL interface
// implementation.  Permission to use, copy, modify and distribute
// this file in any software license is hereby granted.

#ifndef ORG_W3C_DOM_BOOTSTRAP_UINT32ARRAYIMP_H_INCLUDED
#define ORG_W3C_DOM_BOOTSTRAP_UINT32ARRAYIMP_H_INCLUDED

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <org/w3c/dom/typedarray/Uint32Array.h>
#include "ArrayBufferViewImp.h"

#include <org/w3c/dom/typedarray/ArrayBuffer.h>
#include <org/w3c/dom/typedarray/ArrayBufferView.h>
#include <org/w3c/dom/typedarray/Uint32Array.h>

namespace org
{
namespace w3c
{
namespace dom
{
namespace bootstrap
{
class Uint32ArrayImp : public ObjectMixin<Uint32ArrayImp, ArrayBufferViewImp>
{
public:
    // Uint32Array
    unsigned int getLength();
    unsigned int get(unsigned int index);
    void set(unsigned int index, unsigned int value);
    void set(typedarray::Uint32Array array);
    void set(typedarray::Uint32Array array, unsigned int offset);
    void set(ObjectArray<unsigned int> array);
    void set(ObjectArray<unsigned int> array, unsigned int offset);
    typedarray::Uint32Array subarray(int start, int end);
    // Object
    virtual Any message_(uint32_t selector, const char* id, int argc, Any* argv)
    {
        return typedarray::Uint32Array::dispatch(this, selector, id, argc, argv);
    }
    static const char* const getMetaData()
    {
        return typedarray::Uint32Array::getMetaData();
    }
};

}
}
}
}

#endif  // ORG_W3C_DOM_BOOTSTRAP_UINT32ARRAYIMP_H_INCLUDED