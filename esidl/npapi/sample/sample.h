/*
 * Copyright 2009 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ESNPAPI_SAMPLE_H_INCLUDED
#define ESNPAPI_SAMPLE_H_INCLUDED

#include "esnpapi.h"

#include <any.h>
#include <reflect.h>
#include <org/w3c/dom.h>

class PluginInstance
{
    NPP npp;
    org::w3c::dom::html::Window* window;

    void test();

public:
    PluginInstance(NPP npp) :
        npp(npp),
        window(0)
    {
        NPObject* npWindow;
        NPN_GetValue(npp, NPNVWindowNPObject, &npWindow);
        std::string name = getInterfaceName(npp, npWindow);
        printf("'%s'\n", name.c_str());
        window = dynamic_cast<org::w3c::dom::html::Window*>(createProxy(npp, npWindow));
        test();
    }

    ~PluginInstance()
    {
        if (window)
        {
            window->release();
        }
    }

    NPObject* getScriptableInstance()
    {
        return 0;
    }
};

#endif // ESNPAPI_SAMPLE_H_INCLUDED
