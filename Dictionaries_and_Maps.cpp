#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n;
    cin>>n;
    string name;
    int tel;
    map <string,int> phones;
    for (int i=1;i<=n;i++)
    {
        cin>>name>>tel;
        phones[name]=tel;
    }
    string s;
    while(cin>>s)
    {
        auto search = phones.find(s);
        if (search!=phones.end())
        {cout<<search->first<<"="<<search->second<<endl;}
        else {cout<<"Not found"<<endl;}
    }
    return 0;
}
