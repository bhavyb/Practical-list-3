/* Write a C++ program to demonstrate use of class account member isacc_no, balance, branch_code. (*Declare variable in public sectionand initialize the value with object name and display outside the class). */
#include <iostream>
using namespace std;
class Account
{
public:
    int acc_no;
    double balance;
    int branch_code;
};

int main()
{
    Account account1;
    cout<<"Enter the account number :: ";
    cin>>account1.acc_no;
    cout<<"Entre the blance :: ";
    cin>>account1.balance;
    cout<<"Enter the branch code ::";
    cin>>account1.branch_code;

    cout<<"Account Number :: "<<account1.acc_no<<endl;
    cout<<"Balance :: "<<account1.balance<<endl;
    cout<<"Branch Code :: "<<account1.branch_code<<endl;
    
    return 0;
}
