#include<iostream>

#include <map>
#include<unordered_map>
using namespace std;
int main()
{
    //creation
    map<string,int> m;

    //insertion
    pair<string,int>p=make_pair("niroop",3);
    m.insert(p);

    //2nd way

    pair<string,int>pair("is",2);
    m.insert(pair);

    //3rd way
    m["how"]=4;
    
    m["how"]=1;

    cout<<m["how"]<<endl;
    cout<<m.at("niroop")<<endl;
   
    
    cout<<m["hello"]<<endl;
    cout<<m.at("hello")<<endl;

    //size
    cout<<m.size()<<endl;
    
    //check if present
    cout<<m.count("boi")<<endl;

    //erase

    m.erase("is");
    cout<<m.size()<<endl;
/*one way
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }*/
//second
    map<string,int>:: iterator it=m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }


    return 0;
    
}