#include <iostream>
using namespace std;

//Template
template <typename A>
A swap_no(A x, A y)
{
    A t;
    t = x;
    x = y;
    y = t;
    cout << endl;
    return x, y;
    cout << endl;
};



//operator overloading 

class count{
    private:
    int c;
    public:
    count(){c=0;}
    count operator ++()
    {
        count temp;
        temp.c=++c;
        return temp;
    }
    count operator--(){
        count temp;
        temp.c=c--;
        return temp;
    }
    int get()
    {
        return c;
    }
};

//constructor, distructor, inheritance
class bank{

    private:
        long int acc_no;
    
    protected:
        long int balance;

        
    public:
        char name[20];
        void get(){
            cout<<"enter acc no - ";
            cin>>acc_no;
            cout<<"enter initial balance - ";
            cin>>balance;
        }
        void show(){
            cout<<"account number - "<<acc_no<<endl;
            
               
        }
};
class saving : public bank{

    private:
        int min_balance;
        
    
    public:
        int withdraw;
        long int deposit;

        int c=0;int x;
        saving(){
            min_balance=5000;
        }
        void withdraw1(){
            cout<<"enter the amount you want to withdraw - ";
            cin>>withdraw;
            
            if((balance + deposit - withdraw)>min_balance){

                cout<<"transaction successful"<<endl;
                c++;
            }
            else    cout<<"insufficient funds"<<endl;


        }
        void deposit1(){
            cout<<"how much u wanna deposit - ";
            cin>>deposit;
        }
        
        void input(); void output();
};
class current : public saving{

    protected:
        long int curr_balance;

    public:
        current(){
            
            cout<<"Current balance - "<<x;
        }

};
void saving :: input(){

    cout<<"enter customer name - ";
    cin.getline(name,20);
    get();
    deposit1();
    withdraw1();
    
    if(c>0)
        x=balance+deposit-withdraw;
    else    x=balance+deposit;
}
void saving :: output(){
    cout<<"\n\ncustomer name - "<<name<<endl;
    show();
    cout<<"deposited amount - "<<deposit<<endl;
    if(c>0)
        cout<<"withdrawed amount - "<<withdraw<<endl;
    
}

int main(){
    saving b;
    b.input();
    b.output();
    current c;
    
    cout << swap_no<int>(4, 5);

    count a;
    cout<<"Initial number of people inside the bank="<<a.get()<<endl;
    ++a;
    ++a;
    ++a;
    ++a;
    cout<<"No. of people in the bank="<<a.get()<<endl;
    --a;
    --a;
    --a;
    cout<<"No. of people in the bank after people left the bank="<<a.get()<<endl;
    
    return 0;
}