#include<iostream>
using namespace std;

int main() {
    int num_words = 0;
    string previous, current, odieu = "Thanks\n";
    //while loops run untill the condition match.
    while(cin>>current){
        if(current == "exit"){
            break;
        }
        ++num_words;
        if(previous == current){
            cout<<"Word Number "<<num_words<<" repeated "<<current<<endl;
        }
        previous = current;
    }
    odieu+="Bye Bye";
    cout<<odieu<<endl;

    return 0;
}