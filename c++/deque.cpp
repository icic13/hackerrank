#include <iostream>
#include <deque>

using namespace std;

int main(){

deque<int> myIntDeque;
deque<string> names;
cout<<myIntDeque.size()<<endl;
cout<<names.size()<<endl;
names.push_back("Rana");
cout<<names.size()<<endl;
cout<<names.front()<<endl;
names.push_front("Nayeem");
cout<<names.front()<<endl;
names.push_back("Taleb");
cout<<names.front()<<endl;
cout<<names.back()<<endl;
cout<<names.size()<<endl;

}
