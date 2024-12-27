#include <iostream>
#include "Word.h"

using namespace std;

void test0(){
    string filename("Word.cc");
    Word w;
    w.read(filename);
    w.display();

}

int main(int argc,char* argv[])
{
    test0();
    return 0;
}

