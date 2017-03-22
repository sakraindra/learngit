#include<map>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    map<string,int>  m;
    m["a"]=1;
    m["b"]=2;
    m["c"]=3;
    map<string,int>::iterator it;
    for(it=m.begin();it!=m.end();++it)
        cout<<"key: "<<it->first<<" value: "<<it->second<<endl;
    return   0;
}
