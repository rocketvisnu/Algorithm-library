#include<iostream>
#include<utility>
using namespace std;

int main(){
    pair<int,char> pair1(0,'a');
    pair<int,char> pair2;
    pair<int,char> pair3(pair1);
    pair2 = make_pair(1,'b');
    cout<<"Before Swapping\n";
    cout<<pair1.first<<" ";
    cout<<pair1.second<<"\n";
    cout<<pair2.first<<" ";
    cout<<pair2.second<<"\n";
    cout<<"after Swapping\n";
    pair1.swap(pair2); 
     cout<<pair1.first<<" ";
    cout<<pair1.second<<"\n";
    cout<<pair2.first<<" ";
    cout<<pair2.second<<"\n";
   // pair3 = pair1 + pair2;
    cout<<pair3.first<<" ";
    cout<<pair3.second<<"\n";
    return 0;
}