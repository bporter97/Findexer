#ifndef FILE_DIR_H
#define FILE_DIR_H

#include <iostream>
//#include <fstream>
//#include <cstdlib>
#include <filesystem>

namespace fs = std::filesystem;

class File_Dir{ //class for handling files and directories
    public:
        File_Dir(const std::string&);
        File_Dir(const std::string&, const std::string&);


    private:
        char& param1;
        char& param2;



};

#endif