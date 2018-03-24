#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    pair<string, int> p;
    p.first = "haha";
    p.second = 5;
    cout<<p.first<<" "<<p.second<<endl;
    p=make_pair("xixi",55);
    cout<<p.first<<" "<<p.second<<endl;
    p =pair<string, int>("hihi",5);
    cout<<p.first<<" "<<p.second<<endl;
    
    mao<string, int> mp;
    mp.insert(make_pair("heihei",555);
    mp.insert(pair<string, int<("hh",10);
    for(map<string int>::iterator it = mp.begin();it!=mp.end();it++){
         cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
