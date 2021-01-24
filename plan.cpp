#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <bits/stdc++.h>

using namespace std;

const string planfile = "plan.txt";

enum days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
string dayString[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

struct task{
    int quarters;
    int repeats;
    string name;
};

string dayToString(int day){
switch(day){
    case 0:
        return "Sunday";
        break;
    case 1:
        return "Monday";
        break;
    case 2:
        return "Tuesday";
        break;
    case 3:
        return "Wednesday";
        break;
    case 4:
        return "Thursday";
        break;
    case 5:
        return "Friday";
    case 6:
        return "Saturday";
    }
}

void addOneTask(int day, ofstream & fout){
    struct task newTask;
    string input;
    cout << "Enter the name of your task: "<< endl;
    cin >> input;
    newTask.
    fout << dayString[day] << ": " << input << endl;
    return;
}


int main(){
    ifstream fin;
    ofstream fout;
    fin.open(planfile);
    fout.open(planfile);

    vector <task> Sunday;
    vector <task> Monday;
    vector <task> Tuesday;
    vector <task> Wednesday;
    vector <task> Thursday;
    vector <task> Friday;
    vector <task> Saturday;

    addOneTask(MONDAY, fout);
    addOneTask(TUESDAY, fout);


    struct tm now = *localtime(0);
    fout << now.tm_year;
}
