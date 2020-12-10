#include <iostream>

using namespace std;

//Display Class
class ChoiceDisplay {
public:
    void choiceMethod(){
    cout << "(1) Weight " << endl;
    cout << "(2) Efficiency " << endl;
    cout << "(3) Centripetal Force " << endl;
    cout << "(4) Potential Energy " << endl;
    cout << "(5) Work " << endl;
    cout << "(6) Frequency " << endl;
    cout << "(7) Kinetic Energy " << endl;
    cout << "(8) Impulse " << endl;
    cout << "(9) Voltage " << endl;
    cout << "(10) Power " << endl;

    }

};

//Weight Calculations Class
class Weight{
public:

    double mass, weight;
    double gravity = 9.807;

    Weight(double m, double g, double w){

    mass = m;
    gravity = g;
    weight = w;

    cout <<"Enter the mass of the object" << endl;
    cin >> m;

    cout <<"The weight of the object is " << endl;
    w = m * g;

    }
};

//Efficiency Calculations Class
class Efficiency {
public:

    int joules, joulesTwo;
    double efficiency;

    Efficiency(int Wout, int Win){

    cout <<"Enter the work output" << endl;
    cout <<"Enter the work input" << endl;

    }

};

//Centripetal Force Class
class CentripetalForce {
public:

    double mass, centripetalForce;
    double centripetalForceAnswer;

    CentripetalForce(double fc, double m, double ac){

    }
};

//PotentialEnergy Calculations Class
class PotentialEnergy {
public:

    double mass, height;
    double gravity = 9.807;

    PotentialEnergy(double m, double g, double h){

    }
};

//Work Calculations Class
class Work{
public:

    double force, distance;

    Work(double f, double d){

    }

};


int main()
{
    Weight weightSelection();
    Efficiency efficiencySelection();
    CentripetalForce centripetalForceSelection();

    //Choice Variables
    int choice;

    //User Display
    cout << "Welcome! Here is a program that calculates different formulas in physics" << endl;
    cout << "\nWhat do you want to calculate? " << endl;
    cout << "\n\n" << endl;

    //Displays Choices
    ChoiceDisplay displayChoices;
    displayChoices.choiceMethod();

    cin >> choice;

    //Finds what option the user inputed
    switch (choice) {
case 1:

break;
case 2:

break;
case 3:

break;
case 4:

break;
case 5:

break;
default:
    cout <<"Incorrect Choice. Try again";
    }




    return 0;
}
