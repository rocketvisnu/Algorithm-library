#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    int a;
    for(auto i=0;i<7;i++){
        scanf("%d",&a);
        v1.push_back(a);
    }
    cout<<"SIZE :"<<v1.size()<<"\n";
    //reversing a vector array
    for(auto i=v1.rbegin();i<v1.rend();i++){
        cout<<*i<<" ";
    }
    cout<<"\n";
    for(auto i=v1.begin();i<v1.end();i++){
        cout<<*i<<" ";
    }
    cout<<"\n";
    //resizing the vector
    v1.resize(5);
    for(auto i=v1.begin();i<v1.end();i++){
        cout<<*i<<" ";
    }
    cout<<"\nFront element : "<<v1.front()<<"\nEnd Element : "<<v1.back();
    cout<<"\n3 rd Element :"<<v1.at(2);
}