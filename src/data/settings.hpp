#ifndef DATA_SETTINGS_HPP
#define DATA_SETTINGS_HPP

/*
    Reads and sets settings
*/

#include <fstream>
#include <iostream>
#include <string>

class Settings {
public:
    Settings(const Settings &) = delete;
    static Settings &instantiate() {
        static Settings _instance;
        return _instance;
    }

private:
    Settings() {}

};

#endif
