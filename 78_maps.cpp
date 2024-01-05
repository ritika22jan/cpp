#include<bits/stdc++.h>
#include <map>
#include <set>
#include <unordered_map>
using namespace std;

int main(){
    map<int,int> m;
    // insertion
    pair<string,int> p=make_pair("babbar",3);
    m.insert(p);

    pair<string,int> pair2("love",2);
    m.insert(pair2);
    m["mera"]=1; 
    

    cout<<m["love"]<<endl;
    cout<<m.at("love")<<endl;
    
    cout<<m["unknownkey"]<<endl;
    cout<<m.at("unknownkey")<<endl;
    
    // size
    cout<<m.size()<<endl;

    // to check presence
    cout<<m.count("bro")<<endl;

    // erase
    // m.erase("love");
    cout<<m.size()<<endl;

    // iterator
    map<int,int> :: iterator it =m.begin();
    while(it!=m.end()){
        cout<<it->first<<"  "<<it->second<<endl;
        it++;
    }

    set<int> mySet;
    // iterator for set
    for (auto it = mySet.begin(); it != mySet.end(); ++it) {
        std::cout << *it << " ";
    }
}