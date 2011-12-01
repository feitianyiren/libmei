/*
    Copyright (c) 2011 Andrew Hankinson, Alastair Porter, Jamie Klassen, Mahtab Ghamsari-Esfahani, Gregory Burlet
    
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

#ifndef MENSURAL_H_
#define MENSURAL_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "mensuralmixins.h"
#include "analysismixins.h"
#include "linkalignmixins.h"


namespace mei {
/** \brief ligature ― A mensural notation symbol that combines two or more notes into a
 *  single sign.
 * 
 *  The rhythmic meaning of the components of a ligature is typically contextual,
 *  not absolute; therefore, an interpretative duration may be encoded on each of
 *  the components using either the dur.ges attribute or the num and numbase
 *  attribute pair. The <ligature> element should *not* be used for brackets in
 *  modern notation that indicate notes that were part of a ligature in the original
 *  source.
 */
class MEI_EXPORT Ligature : public MeiElement {
    public:
        Ligature();
        Ligature(const Ligature& other);
        virtual ~Ligature();

/* include <ligature> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        LigatureLogMixIn    m_LigatureLog;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Ligature);
};

/** \brief mensuration ― The <mensur> element is provided for the encoding of mensural
 *  notation.
 * 
 *  It collects information about the metrical relationship between a note value and
 *  the next smaller value; that is, either triple or duple. The slash attribute
 *  indicates the number lines added to the mensuration sign. For example, one slash
 *  is added for what we now call 'alla breve'.
 */
class MEI_EXPORT Mensur : public MeiElement {
    public:
        Mensur();
        Mensur(const Mensur& other);
        virtual ~Mensur();

/* include <mensur> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        MensurLogMixIn    m_MensurLog;
        DurationRatioMixIn    m_DurationRatio;
        MensurVisMixIn    m_MensurVis;
        ColorMixIn    m_Color;
        RelativesizeMixIn    m_Relativesize;
        SlashcountMixIn    m_Slashcount;
        StafflocMixIn    m_Staffloc;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Mensur);
};

/** \brief proportion ― The <proportion> element is provided for the encoding of mensural
 *  notation.
 * 
 *  It allows the description of note durations as arithmetic ratios. While
 *  mensuration refers to the normal relationships between note durations,
 *  proportion affects the relations of the note durations to the tactus.
 */
class MEI_EXPORT Proport : public MeiElement {
    public:
        Proport();
        Proport(const Proport& other);
        virtual ~Proport();

/* include <proport> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        DurationRatioMixIn    m_DurationRatio;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Proport);
};
}
#endif  // MENSURAL_H_
