#include<map> // {Key Value} Pair -> Similar To Dictionary in Python 
#include<iostream>
using namespace std;
int main(){
    map<string, string> stateLanguages;
    stateLanguages.insert(pair<string, string>("Karnataka", "Kannada"));
    stateLanguages.insert(pair<string, string>("Kerala", "Malayalam"));
    stateLanguages.insert(pair<string, string>("Rajasthan", "Marwadi"));
    stateLanguages.insert(pair<string, string>("Goa", "Konakani"));
    stateLanguages.insert(pair<string, string>("Bihar", "Bhojpuri"));
    stateLanguages["Assam"] = "Assamese";
    stateLanguages.erase("Kerala");
    // stateLanguages.clear(); // Delete Everything
    for(auto data : stateLanguages){
        cout << "State: " << data.first << ", Language: " << data.second << "\n";
    }

}