// Generated by esidl (r1745).
// This file is expected to be modified for the Web IDL interface
// implementation.  Permission to use, copy, modify and distribute
// this file in any software license is hereby granted.

#ifndef ORG_W3C_DOM_BOOTSTRAP_CSSCHARSETRULEIMP_H_INCLUDED
#define ORG_W3C_DOM_BOOTSTRAP_CSSCHARSETRULEIMP_H_INCLUDED

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <org/w3c/dom/css/CSSCharsetRule.h>
#include "CSSRuleImp.h"

#include <org/w3c/dom/css/CSSRule.h>
#include <org/w3c/dom/DOMException.h>

namespace org
{
namespace w3c
{
namespace dom
{
namespace bootstrap
{
class CSSCharsetRuleImp : public ObjectMixin<CSSCharsetRuleImp, CSSRuleImp>
{
public:
    // CSSCharsetRule
    std::u16string getEncoding() __attribute__((weak));
    void setEncoding(std::u16string encoding) throw(DOMException) __attribute__((weak));
    // Object
    virtual Any message_(uint32_t selector, const char* id, int argc, Any* argv)
    {
        return css::CSSCharsetRule::dispatch(this, selector, id, argc, argv);
    }
    static const char* const getMetaData()
    {
        return css::CSSCharsetRule::getMetaData();
    }
};

}
}
}
}

#endif  // ORG_W3C_DOM_BOOTSTRAP_CSSCHARSETRULEIMP_H_INCLUDED
