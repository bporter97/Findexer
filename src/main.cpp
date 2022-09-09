#include<iostream>
#include<filesystem>
//#include "../libs/File_Dir.hpp"

std::string param1; 
std::string param2;    
std::string param3;
std::string param4;

int main(int argc, char* argv[]){

    //switch statement for processing command arguments; starts at 2 since the program accepts findex.exe as the first arg 
    switch (argc){
        case 2: //only -h
            param1 = argv[1]; //-h
            if(param1 == "-h"){
                std::cout << "\nUsage: findex [-f or -d] <path-to-directory or file name> [-f] <filename>\n" 
                    << std::endl << "-d: Specify directory to search\n"
                    << "-f: Specify file name\n" //as of right now, program will only search file name and not extenstion type
                    << "-h: help\n" << std::endl;

                std::cout << param1;
            }
            else{
                std::cout << "Could not execute. Use findex -h for usage directions" << std::endl;
            }

            break;

        case 3: //two args entered, can only be -f and <filename>
            param1 = argv[1]; //--f
            param2 = argv[2]; // file name
            if (param1 == "-f"){ // take param2, return path(s) file-name is located at
                //fs::current_path()
            }
            else{
                std::cout << "Could not execute. Use findex -h for usage directions" << std::endl;
            }
            
            break;

        case 4: // three args entered: invalid
            std::cout << "Could not execute. Use findex -h for usage directions" << std::endl;
            break;

        case 5: // four args entered
            param1 = argv[1]; // -d
            param2 = argv[2]; // directory
            param3 = argv[3]; // -f           
            param4 = argv[4]; // filename

            if (param1 == "-d"){ // move on to directory

            }
            else{
                std::cout << "Could not execute. Use findex -h for usage directions" << std::endl;
            }
            break;

    default:
        std::cout << "Could not execute. Use findex -h for usage directions" << std::endl;
        break;
    }

    return 0;
}