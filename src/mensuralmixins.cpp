

#include "mensuralmixins.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::LigatureLogMixIn::LigatureLogMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::LigatureLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::LigatureLogMixIn::setForm(std::string _form) {
    if (!b->hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        b->addAttribute(a);
    }
};

bool mei::LigatureLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::LigatureLogMixIn::removeForm() {
    b->removeAttribute("form");
};


mei::MensurLogMixIn::MensurLogMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::MensurLogMixIn::getModusmaior() {
    if (!b->hasAttribute("modusmaior")) {
        throw AttributeNotFoundException("modusmaior");
    }
    return b->getAttribute("modusmaior");
};

void mei::MensurLogMixIn::setModusmaior(std::string _modusmaior) {
    if (!b->hasAttribute("modusmaior")) {
        MeiAttribute *a = new MeiAttribute("modusmaior", _modusmaior);
        b->addAttribute(a);
    }
};

bool mei::MensurLogMixIn::hasModusmaior() {
    return b->hasAttribute("modusmaior");
};

void mei::MensurLogMixIn::removeModusmaior() {
    b->removeAttribute("modusmaior");
};

MeiAttribute* mei::MensurLogMixIn::getModusminor() {
    if (!b->hasAttribute("modusminor")) {
        throw AttributeNotFoundException("modusminor");
    }
    return b->getAttribute("modusminor");
};

void mei::MensurLogMixIn::setModusminor(std::string _modusminor) {
    if (!b->hasAttribute("modusminor")) {
        MeiAttribute *a = new MeiAttribute("modusminor", _modusminor);
        b->addAttribute(a);
    }
};

bool mei::MensurLogMixIn::hasModusminor() {
    return b->hasAttribute("modusminor");
};

void mei::MensurLogMixIn::removeModusminor() {
    b->removeAttribute("modusminor");
};

MeiAttribute* mei::MensurLogMixIn::getProlatio() {
    if (!b->hasAttribute("prolatio")) {
        throw AttributeNotFoundException("prolatio");
    }
    return b->getAttribute("prolatio");
};

void mei::MensurLogMixIn::setProlatio(std::string _prolatio) {
    if (!b->hasAttribute("prolatio")) {
        MeiAttribute *a = new MeiAttribute("prolatio", _prolatio);
        b->addAttribute(a);
    }
};

bool mei::MensurLogMixIn::hasProlatio() {
    return b->hasAttribute("prolatio");
};

void mei::MensurLogMixIn::removeProlatio() {
    b->removeAttribute("prolatio");
};

MeiAttribute* mei::MensurLogMixIn::getTempus() {
    if (!b->hasAttribute("tempus")) {
        throw AttributeNotFoundException("tempus");
    }
    return b->getAttribute("tempus");
};

void mei::MensurLogMixIn::setTempus(std::string _tempus) {
    if (!b->hasAttribute("tempus")) {
        MeiAttribute *a = new MeiAttribute("tempus", _tempus);
        b->addAttribute(a);
    }
};

bool mei::MensurLogMixIn::hasTempus() {
    return b->hasAttribute("tempus");
};

void mei::MensurLogMixIn::removeTempus() {
    b->removeAttribute("tempus");
};


mei::MensurVisMixIn::MensurVisMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::MensurVisMixIn::getDot() {
    if (!b->hasAttribute("dot")) {
        throw AttributeNotFoundException("dot");
    }
    return b->getAttribute("dot");
};

void mei::MensurVisMixIn::setDot(std::string _dot) {
    if (!b->hasAttribute("dot")) {
        MeiAttribute *a = new MeiAttribute("dot", _dot);
        b->addAttribute(a);
    }
};

bool mei::MensurVisMixIn::hasDot() {
    return b->hasAttribute("dot");
};

void mei::MensurVisMixIn::removeDot() {
    b->removeAttribute("dot");
};

MeiAttribute* mei::MensurVisMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        throw AttributeNotFoundException("form");
    }
    return b->getAttribute("form");
};

void mei::MensurVisMixIn::setForm(std::string _form) {
    if (!b->hasAttribute("form")) {
        MeiAttribute *a = new MeiAttribute("form", _form);
        b->addAttribute(a);
    }
};

bool mei::MensurVisMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::MensurVisMixIn::removeForm() {
    b->removeAttribute("form");
};

MeiAttribute* mei::MensurVisMixIn::getOrient() {
    if (!b->hasAttribute("orient")) {
        throw AttributeNotFoundException("orient");
    }
    return b->getAttribute("orient");
};

void mei::MensurVisMixIn::setOrient(std::string _orient) {
    if (!b->hasAttribute("orient")) {
        MeiAttribute *a = new MeiAttribute("orient", _orient);
        b->addAttribute(a);
    }
};

bool mei::MensurVisMixIn::hasOrient() {
    return b->hasAttribute("orient");
};

void mei::MensurVisMixIn::removeOrient() {
    b->removeAttribute("orient");
};

MeiAttribute* mei::MensurVisMixIn::getSign() {
    if (!b->hasAttribute("sign")) {
        throw AttributeNotFoundException("sign");
    }
    return b->getAttribute("sign");
};

void mei::MensurVisMixIn::setSign(std::string _sign) {
    if (!b->hasAttribute("sign")) {
        MeiAttribute *a = new MeiAttribute("sign", _sign);
        b->addAttribute(a);
    }
};

bool mei::MensurVisMixIn::hasSign() {
    return b->hasAttribute("sign");
};

void mei::MensurVisMixIn::removeSign() {
    b->removeAttribute("sign");
};


mei::MensurationLogMixIn::MensurationLogMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::MensurationLogMixIn::getMensurDot() {
    if (!b->hasAttribute("mensur.dot")) {
        throw AttributeNotFoundException("mensur.dot");
    }
    return b->getAttribute("mensur.dot");
};

void mei::MensurationLogMixIn::setMensurDot(std::string _mensurdot) {
    if (!b->hasAttribute("mensur.dot")) {
        MeiAttribute *a = new MeiAttribute("mensur.dot", _mensurdot);
        b->addAttribute(a);
    }
};

bool mei::MensurationLogMixIn::hasMensurDot() {
    return b->hasAttribute("mensur.dot");
};

void mei::MensurationLogMixIn::removeMensurDot() {
    b->removeAttribute("mensur.dot");
};

MeiAttribute* mei::MensurationLogMixIn::getMensurOrient() {
    if (!b->hasAttribute("mensur.orient")) {
        throw AttributeNotFoundException("mensur.orient");
    }
    return b->getAttribute("mensur.orient");
};

void mei::MensurationLogMixIn::setMensurOrient(std::string _mensurorient) {
    if (!b->hasAttribute("mensur.orient")) {
        MeiAttribute *a = new MeiAttribute("mensur.orient", _mensurorient);
        b->addAttribute(a);
    }
};

bool mei::MensurationLogMixIn::hasMensurOrient() {
    return b->hasAttribute("mensur.orient");
};

void mei::MensurationLogMixIn::removeMensurOrient() {
    b->removeAttribute("mensur.orient");
};

MeiAttribute* mei::MensurationLogMixIn::getMensurSign() {
    if (!b->hasAttribute("mensur.sign")) {
        throw AttributeNotFoundException("mensur.sign");
    }
    return b->getAttribute("mensur.sign");
};

void mei::MensurationLogMixIn::setMensurSign(std::string _mensursign) {
    if (!b->hasAttribute("mensur.sign")) {
        MeiAttribute *a = new MeiAttribute("mensur.sign", _mensursign);
        b->addAttribute(a);
    }
};

bool mei::MensurationLogMixIn::hasMensurSign() {
    return b->hasAttribute("mensur.sign");
};

void mei::MensurationLogMixIn::removeMensurSign() {
    b->removeAttribute("mensur.sign");
};

MeiAttribute* mei::MensurationLogMixIn::getMensurSlash() {
    if (!b->hasAttribute("mensur.slash")) {
        throw AttributeNotFoundException("mensur.slash");
    }
    return b->getAttribute("mensur.slash");
};

void mei::MensurationLogMixIn::setMensurSlash(std::string _mensurslash) {
    if (!b->hasAttribute("mensur.slash")) {
        MeiAttribute *a = new MeiAttribute("mensur.slash", _mensurslash);
        b->addAttribute(a);
    }
};

bool mei::MensurationLogMixIn::hasMensurSlash() {
    return b->hasAttribute("mensur.slash");
};

void mei::MensurationLogMixIn::removeMensurSlash() {
    b->removeAttribute("mensur.slash");
};


mei::MensurationVisMixIn::MensurationVisMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::MensurationVisMixIn::getMensurForm() {
    if (!b->hasAttribute("mensur.form")) {
        throw AttributeNotFoundException("mensur.form");
    }
    return b->getAttribute("mensur.form");
};

void mei::MensurationVisMixIn::setMensurForm(std::string _mensurform) {
    if (!b->hasAttribute("mensur.form")) {
        MeiAttribute *a = new MeiAttribute("mensur.form", _mensurform);
        b->addAttribute(a);
    }
};

bool mei::MensurationVisMixIn::hasMensurForm() {
    return b->hasAttribute("mensur.form");
};

void mei::MensurationVisMixIn::removeMensurForm() {
    b->removeAttribute("mensur.form");
};

MeiAttribute* mei::MensurationVisMixIn::getMensurLoc() {
    if (!b->hasAttribute("mensur.loc")) {
        throw AttributeNotFoundException("mensur.loc");
    }
    return b->getAttribute("mensur.loc");
};

void mei::MensurationVisMixIn::setMensurLoc(std::string _mensurloc) {
    if (!b->hasAttribute("mensur.loc")) {
        MeiAttribute *a = new MeiAttribute("mensur.loc", _mensurloc);
        b->addAttribute(a);
    }
};

bool mei::MensurationVisMixIn::hasMensurLoc() {
    return b->hasAttribute("mensur.loc");
};

void mei::MensurationVisMixIn::removeMensurLoc() {
    b->removeAttribute("mensur.loc");
};

MeiAttribute* mei::MensurationVisMixIn::getMensurSize() {
    if (!b->hasAttribute("mensur.size")) {
        throw AttributeNotFoundException("mensur.size");
    }
    return b->getAttribute("mensur.size");
};

void mei::MensurationVisMixIn::setMensurSize(std::string _mensursize) {
    if (!b->hasAttribute("mensur.size")) {
        MeiAttribute *a = new MeiAttribute("mensur.size", _mensursize);
        b->addAttribute(a);
    }
};

bool mei::MensurationVisMixIn::hasMensurSize() {
    return b->hasAttribute("mensur.size");
};

void mei::MensurationVisMixIn::removeMensurSize() {
    b->removeAttribute("mensur.size");
};


mei::NoteLogMensuralMixIn::NoteLogMensuralMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::NoteLogMensuralMixIn::getLig() {
    if (!b->hasAttribute("lig")) {
        throw AttributeNotFoundException("lig");
    }
    return b->getAttribute("lig");
};

void mei::NoteLogMensuralMixIn::setLig(std::string _lig) {
    if (!b->hasAttribute("lig")) {
        MeiAttribute *a = new MeiAttribute("lig", _lig);
        b->addAttribute(a);
    }
};

bool mei::NoteLogMensuralMixIn::hasLig() {
    return b->hasAttribute("lig");
};

void mei::NoteLogMensuralMixIn::removeLig() {
    b->removeAttribute("lig");
};


mei::RestVisMensuralMixIn::RestVisMensuralMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::RestVisMensuralMixIn::getSpaces() {
    if (!b->hasAttribute("spaces")) {
        throw AttributeNotFoundException("spaces");
    }
    return b->getAttribute("spaces");
};

void mei::RestVisMensuralMixIn::setSpaces(std::string _spaces) {
    if (!b->hasAttribute("spaces")) {
        MeiAttribute *a = new MeiAttribute("spaces", _spaces);
        b->addAttribute(a);
    }
};

bool mei::RestVisMensuralMixIn::hasSpaces() {
    return b->hasAttribute("spaces");
};

void mei::RestVisMensuralMixIn::removeSpaces() {
    b->removeAttribute("spaces");
};


mei::StaffdefLogMensuralMixIn::StaffdefLogMensuralMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::StaffdefLogMensuralMixIn::getProportNum() {
    if (!b->hasAttribute("proport.num")) {
        throw AttributeNotFoundException("proport.num");
    }
    return b->getAttribute("proport.num");
};

void mei::StaffdefLogMensuralMixIn::setProportNum(std::string _proportnum) {
    if (!b->hasAttribute("proport.num")) {
        MeiAttribute *a = new MeiAttribute("proport.num", _proportnum);
        b->addAttribute(a);
    }
};

bool mei::StaffdefLogMensuralMixIn::hasProportNum() {
    return b->hasAttribute("proport.num");
};

void mei::StaffdefLogMensuralMixIn::removeProportNum() {
    b->removeAttribute("proport.num");
};

MeiAttribute* mei::StaffdefLogMensuralMixIn::getProportNumbase() {
    if (!b->hasAttribute("proport.numbase")) {
        throw AttributeNotFoundException("proport.numbase");
    }
    return b->getAttribute("proport.numbase");
};

void mei::StaffdefLogMensuralMixIn::setProportNumbase(std::string _proportnumbase) {
    if (!b->hasAttribute("proport.numbase")) {
        MeiAttribute *a = new MeiAttribute("proport.numbase", _proportnumbase);
        b->addAttribute(a);
    }
};

bool mei::StaffdefLogMensuralMixIn::hasProportNumbase() {
    return b->hasAttribute("proport.numbase");
};

void mei::StaffdefLogMensuralMixIn::removeProportNumbase() {
    b->removeAttribute("proport.numbase");
};


