//program for calculator with limite functionality
#include"iostream"
#include<conio.h>

using namespace std;

//creating class with meaningful name as functionality
class Calculator
{
    private:
        long result;
    
    public:
        //intialing value from construtor
        Calculator(short intial_value)
        {
            this->result = (long)intial_value;
        }
        void calculateAddition(long number)
        {
            this->result = this->result + number;
        }
        void calculateSubtration(long number)
        {
            this->result = this->result - number;            
        }
        long showResule()
        {
            return this->result;
        }
        //destrator
        ~Calculator()
        {
            
        }
};

int main()
{
    int operation = 0;
    long number = 0;
    Calculator calculator(0); 
    
    while(1)
    {
        cout<<"Enter next operation"<<endl<<endl;
        
        cout<<"Enter 1 for plus operation"<<endl;
        cout<<"Enter 2 for minus operation"<<endl;
        cout<<"Enter 3 for multiply operation"<<endl;
        cout<<"Enter 4 for divide operation"<<endl;
        cin>>operation;
        
        switch(operation)
        {
            case 1:
                cout<<"Enter number for addition operation"<<endl;
                cin>>number;            
                calculator.calculateAddition(number);
                cout<<"-------------------------- Current Value = -------------------"<<calculator.showResule()<<endl;
                break;
            case 2:
                cout<<"Enter number for subtration operation "<<endl;
                cin>>number;
                calculator.calculateSubtration(number);
                cout<<"-------------------------- Current Value = -------------------"<<calculator.showResule()<<endl;
            default:
                cout<<"Sorry invalid option please enter number from 1 to 4 only"<<endl;
                break;
        }
     }
    return(0);
}

