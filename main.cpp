#include <iostream>
#include <string>


using namespace std;
class Account
{
    int m_accnum;
    string m_accname;
    double m_accbal;

public:
    Account(){
        m_accnum=0;
        m_accname=" ";
        m_accbal=0;
    }
    Account(int x,string y,double z){
        m_accnum=x;
        m_accname=y;
        m_accbal=z;
    }
    Account(int x,string y){
        m_accnum=x;
        m_accname=y;



    }
    Account(const Account &a){
        m_accnum=a.m_accnum;
        m_accname=a.m_accname;
        m_accbal=a.m_accbal;

    }
    void debit (){
    cout<<m_accbal<<endl;}
    void credit (){
    double bal;
    cout << "credited amount"<<endl;
    cin>>bal;
    m_accbal=bal;}
    void getbalance (){
    cout<<m_accbal;}
    void display (){
        cout<<m_accnum<<endl;
        cout<<m_accname<<endl;
        cout<<m_accbal<<endl;
    }

};

int main()
{
   Account();
   Account a1(1,"abcd",2.2);
   Account a2(1,"abcd");
   Account a3=a1;
   a3.debit();
   a3.credit();
   a3.getbalance();
   a3.display();
    return 0;
}
