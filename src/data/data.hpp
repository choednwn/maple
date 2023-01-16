#ifndef DATA_DATA_HPP
#define DATA_DATA_HPP

/*
    Stores and manages data (settings, file, temp_saves, etc)
*/

#include <iostream>

#include "font.hpp"

class Data {
public:
    Data(const Data &) = delete;
    static Data &instantiate() {
        static Data _instance;
        return _instance;
    }

private:
    Data() {
        // VERY TEMPORARY
        _temp_font.regular = "";
        _temp_font.italic = "";
        _temp_font.bold = "";
        _temp_font.bold_italic = "";
        _font.set_font(_temp_font);
    }

    // VERY TEMPORARY
    ProgramFont &_font = ProgramFont::instantiate();
    Font _temp_font;
};

#endif
