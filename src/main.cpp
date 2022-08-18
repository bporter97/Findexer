#include <iostream>
#include "../lib/TutorialConfig.h"

using namespace std;

int main(){

    string hello = "Hello Function!";

    cout << "Hello World!" << endl;

    test(hello);
    
    return 0;
}

void test(string h){
    cout << h << endl;
}