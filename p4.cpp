//220130318038
//Bhavy Bhuva
#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
        string name;
        int age;

    public:
        void get_details()
        {
            cout<<"Enter your good name :: ";
            getline(cin,name);
            cout<<"Enter your age :: ";
            cin>>age;
        }
         void display_details()
        {
            cout<<"\nName is :: " <<name <<endl;
            cout<<"Age is :: "<< age<<" years"<<endl;
        }
};
int main()
{
    student s1;
    s1.get_details();
    s1.display_details();
    return 0;
    
}
