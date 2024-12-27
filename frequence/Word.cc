#include <iostream>
#include <cstring>
#include "Word.h"

using namespace std;


Output::Output(const string& el,int fre)
:_word(el)
,_frequence(fre){}

Word::Word(){}

Word::~Word(){}

void Word::read(const string& fileName){
    ifstream ifs(fileName);
    
    if(!ifs){
        cerr<<"open "<<fileName<<" failed"<<endl;
        return;
    }

    string line;
    while(getline(ifs,line)){
        istringstream iss(line);
        string word;
        while(iss >> word){
            string newword = dealWord(word);
            insert(newword);
        }
    }

    ifs.close();
}

void Word::store(const string& fileName){}

string Word::dealWord(string& word){
    string newword;
    for(int i = 0;i < word.size();++i){
        if(isalpha(word[i])){
           newword += word[i]; 
        }
    }
    return newword;
}

void Word::insert(const string& word){
    if(word == string()) return;
    for (int i = 0;i < _result.size();++i){
        if(word == _result.at(i)._word){
            _result.at(i)._frequence++;
            break;
        } 
    }
    _result.push_back(Output(word,1));
}


void Word::display(){
    for(auto & it : _result){
        printf("|   %50s  %5d  |\n",it._word.c_str(),it._frequence);
    }
}
