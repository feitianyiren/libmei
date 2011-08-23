/*
 Copyright (c) 2011 Andrew Hankinson, Alastair Porter, Jamie Klassen, Mahtab Ghamsari-Esfahani
 
 Permission is hereby granted, free of charge, to any person obtaining
 a copy of this software and associated documentation files (the
 "Software"), to deal in the Software without restriction, including
 without limitation the rights to use, copy, modify, merge, publish,
 distribute, sublicense, and/or sell copies of the Software, and to
 permit persons to whom the Software is furnished to do so, subject to
 the following conditions:
 
 The above copyright notice and this permission notice shall be
 included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef MEI_XMLEXPORT_IMPL_H_
#define MEI_XMLEXPORT_IMPL_H_

#include <string>

#include "xmlexport.h"
#include "meidocument.h"

namespace mei {
    
    class XmlExportImpl {
    private:
        friend class mei::XmlExport;
        XmlExportImpl(MeiDocument *doc);
        virtual ~XmlExportImpl();
        void init();
        xmlNode* meiElementToXmlNode(MeiElement *el);
        void outputToFile(const char* filename);
        
        /** public interfaces for importing. Each of these will convert their input
         *  into an xmlNode for processing by the _MeiXmlStruct class.
         */
        bool meiDocumentToFile(string filename);
        std::string meiDocumentToText();
        
        MeiDocument* meiDocument;
        xmlDocPtr xmlDocOutput;
    };
}


#endif // MEI_XMLEXPORT_IMPL_H_