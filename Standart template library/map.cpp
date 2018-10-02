#include<iostream>
#include<utility>
#include<map>
using namespace std;

int main(){
 map <int,int> set1;
   set1.insert(pair <int,int> (1,10));
   set1.insert(pair <int,int> (2,20));
   set1.insert(pair <int,int> (3,30));
   set1.insert(pair <int,int> (4,40));
   set1.insert(pair <int,int> (5,50));
   map<int,int> :: iterator it;
   for(it=set1.begin();it!=set1.end();it++){
       cout<<it->first<<" "<<it->second<<"\n";
   }
   
   cout<<"\n"<<set1.size()<<"\n";  
   set1.erase(set1.begin(),set1.find(3));
   for(it=set1.begin();it!=set1.end();it++){
       cout<<it->first<<" "<<it->second<<"\n";
   }
   cout<<"\n";
   set1.erase(3);
    for(it=set1.begin();it!=set1.end();it++){
       cout<<it->first<<" "<<it->second<<"\n";
   }
   cout<<"\n"<<set1.count(4); //To check the presense of an element
}