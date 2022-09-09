#ifndef FILE_DIR_H
#define FILE_DIR_H

#include <iostream>
//#include <fstream>
//#include <cstdlib>
#include <filesystem>

namespace fs = std::filesystem;

class File_Dir{ //class for handling files and directories
    public:
        File_Dir(const char&);
        File_Dir(const char&, const char&, std::string&, std::string&);


    private:
        char& param1;
        char& param2;
        std::string& path;
        std::string& file;


};

#endif