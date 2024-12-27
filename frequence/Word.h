#ifndef _Word_H_
#define _Word_H_

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

struct Output{
    string _word;
    int _frequence;
    Output() = default;
    Output(const string& el,int fre);
};

class Word
{
public:
    Word();
    ~Word();

    void read(const string&);
    void store(const string&);

    string dealWord(string&);

    void insert(const string&);

    void display();
private:
    vector<Output> _result;

};

#endif

