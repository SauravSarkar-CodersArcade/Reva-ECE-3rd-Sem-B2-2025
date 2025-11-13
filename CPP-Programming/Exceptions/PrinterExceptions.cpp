#include<iostream>
using namespace std;
class Printer {
public:
    string _name;
    int _availablePaper;
    Printer(string name, int paper){
        _name = name;
        _availablePaper = paper;
    } 
    void PrintDocument(string txtDocument){
        // Suppose a page can print 10 characters only.
        // And there are a total of 40 characters in my string.
        // How many pages? 40/10 = 4 pages
        int requiredPaper = txtDocument.length() / 10; 
        if(requiredPaper > _availablePaper){
            // throw 404;
            throw "Printer is out of paper. Add more paper before printing!";
        }
        cout << "Printing......!!!!!! " << txtDocument << endl;
        _availablePaper -= requiredPaper;
    }
};
int main(){
    Printer myPrinter("HP-LaserJet-3050ti", 10);
    try{
        myPrinter.PrintDocument("Gourish is a SDT at Bosch.");
        myPrinter.PrintDocument("Aziz is a SDE at Wipro.");
        myPrinter.PrintDocument("Shiva is a SDI at Capgemini.");
        myPrinter.PrintDocument("Laxmi is a Data Engineer at TCS.");
        myPrinter.PrintDocument("Nikhil is a Data Analyst at IBM.");
    }catch(int erroCode){
        cout << "Error: " << erroCode << " Out Of Paper."<< endl;
    }catch(const char * txtException){
        cout << txtException << endl;
    }catch(...){
        cout << "Something unexpected happened!" << endl;
    }
    cout << myPrinter._availablePaper << endl;
    return 0;
}
