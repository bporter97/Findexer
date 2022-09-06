#include<iostream>
#include<filesystem>

int main(int argc, char* argv[]){

    /*for(int i = 0; i < argc; ++i){
        std::cout << argv[i] << std::endl;
    }*/

    const std::string& file = argv[1];

    std::cout << file;

    return 0;
}