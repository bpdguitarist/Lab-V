//  Lab V
//
//  Created by Edgar Esparza on 6/17/15.
//

#include <iostream>
using namespace std;


class measurement
{
public:
    // Constructors
    measurement(void);
    measurement(int y, int f, int i);
    
    
    // Mutator Functions
    void setYards(int);
    void setFeet(int);
    void setInches(int);
    
    // Accessor Functions
    int getYards(void);
    int getFeet(void);
    int getInches(void);
    
    // Other Functions
    
    void advanceOneInch();
    // increase the inches amount by 1
    // NOTE: you may have to advance the feet
    // you may have to advance the yards
    
    void output(ostream &);
    void zeroOut(void); // set yards, feet and inches to 0
    
private:
    
    int yards;
    int feet;
    int inches;
    
};

int main()
{
    measurement stackOfLumber(3,2,5);
    
    for( int i = 1; i <= 200; i++)
    {
        stackOfLumber.advanceOneInch();
        stackOfLumber.output(cout);
    }
    
    stackOfLumber.zeroOut();
    stackOfLumber.output(cout);
    
    stackOfLumber.setYards(6);
    stackOfLumber.setFeet(2);
    stackOfLumber.setInches(3);
    cout << stackOfLumber.getYards() << ' ' 
    << stackOfLumber.getFeet() << ' '
    << stackOfLumber.getInches() << endl;
    
    return 0;
}


// WRITE THE measurement FUNCTIONS BELOW

void measurement::output(ostream & Write){
    Write<<yards<<endl;
    Write<<feet<<endl;
    Write<<inches<<endl;
}

measurement::measurement(){
    yards=0;
    feet=0;
    inches=0;
}

void measurement::zeroOut(void)
{
    inches=0;
    feet=0;
    yards=0;
}

measurement::measurement (int y, int f, int i)
{
    yards=y;
    feet=f;
    inches=i;
}


void measurement::setYards (int y)
{
    yards=y;
}
void measurement::setFeet (int f)
{
    feet=f;
}
void measurement::setInches (int i)
{
    inches=i;
}
int measurement::getYards(){
    return yards;
}

int measurement::getFeet(){
    return feet;
}

int measurement::getInches(){
    return inches;
}

void measurement::advanceOneInch()
{
    inches++;
    if (inches>11)
    {
        feet++;
        inches=0;
    }
    if (feet>2)
    {
        yards++;
        feet=0;
    }
}


