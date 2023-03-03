#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> numbers;
    for(int i=1;i<11;i++){
        numbers.push_back(i);
    }
    for(auto n:numbers){
        cout<<n<<endl;
    }
    cout<<"vector size:"<<numbers.size()<<endl;
    numbers.resize(5);
    cout<<"vector size after resize:"<<numbers.size()<<endl;
    for(auto n:numbers){
        cout<<n<<endl;
    }
    //iterator
    cout<<"using iterator to print elements"<<endl; 
    for(auto itr=numbers.begin();itr !=numbers.end();itr++){
        cout<<*itr<<endl;
    }
    cout<<"vector fornt element:"<<numbers.front()<<endl;
    cout<<"vector last element:"<<numbers.back()<<endl;
    //inserting elements
    cout<<"after inserting elements"<<endl;
    numbers.insert((numbers.begin()+5),6);
    numbers.insert((numbers.begin()+6),7);
    numbers.insert((numbers.begin()+7),8);
    numbers.insert((numbers.begin()+8),9);
    numbers.insert((numbers.begin()+9),10);
    for(auto n:numbers){
        cout<<n<<endl;
    }
}