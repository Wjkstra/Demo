#include <iostream>
#include "Word.h"

using namespace std;

void test0(){
    string source;
    string result;
    Word w;
    cout<<"Please input your source filename:";
    cin>>source;
    w.read(source);
    cout<<"Please input your result filename:";
    cin>>result;
    w.store("result.txt");
    w.display();

}

int main(int argc,char* argv[])
{
    test0();
    return 0;
}

