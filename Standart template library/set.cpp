#include<iostream>
#include<utility>
#include<set>
using namespace std;

int main(){
   set <int> set1;
   set1.insert(1);
   set1.insert(2);
   set1.insert(3);
   set1.insert(4);
   set1.insert(5);
   set1.insert(6);
   set<int,char> :: iterator it;
   for(it=set1.begin();it!=set1.end();it++){
       cout<<*it<<" ";
   }
   cout<<"\n"<<set1.size()<<"\n";  
   set1.erase(set1.begin(),set1.find(3));
    for(it=set1.begin();it!=set1.end();it++){
       cout<<*it<<" ";
   }
   cout<<"\n";
   set1.erase(3);
     for(it=set1.begin();it!=set1.end();it++){
       cout<<*it<<" ";
   }
   cout<<"\n"<<set1.count(4); //To check the presense of an element
}