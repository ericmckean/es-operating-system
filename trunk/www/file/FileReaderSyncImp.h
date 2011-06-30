// Generated by esidl (r1745).
// This file is expected to be modified for the Web IDL interface
// implementation.  Permission to use, copy, modify and distribute
// this file in any software license is hereby granted.

#ifndef ORG_W3C_DOM_BOOTSTRAP_FILEREADERSYNCIMP_H_INCLUDED
#define ORG_W3C_DOM_BOOTSTRAP_FILEREADERSYNCIMP_H_INCLUDED

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <org/w3c/dom/file/FileReaderSync.h>

#include <org/w3c/dom/file/Blob.h>
#include <org/w3c/dom/file/FileReaderSync.h>
#include <org/w3c/dom/typedarray/ArrayBuffer.h>

namespace org
{
namespace w3c
{
namespace dom
{
namespace bootstrap
{
class FileReaderSyncImp : public ObjectMixin<FileReaderSyncImp>
{
public:
    // FileReaderSync
    typedarray::ArrayBuffer readAsArrayBuffer(file::Blob blob) __attribute__((weak));
    std::u16string readAsBinaryString(file::Blob blob) __attribute__((weak));
    std::u16string readAsText(file::Blob blob) __attribute__((weak));
    std::u16string readAsText(file::Blob blob, std::u16string encoding) __attribute__((weak));
    std::u16string readAsDataURL(file::Blob blob) __attribute__((weak));
    // Object
    virtual Any message_(uint32_t selector, const char* id, int argc, Any* argv)
    {
        return file::FileReaderSync::dispatch(this, selector, id, argc, argv);
    }
    static const char* const getMetaData()
    {
        return file::FileReaderSync::getMetaData();
    }
};

}
}
}
}

#endif  // ORG_W3C_DOM_BOOTSTRAP_FILEREADERSYNCIMP_H_INCLUDED
