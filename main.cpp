#include <iostream>

using namespace std;
class a
{
public:
    int m1,m2,m3;
    string sub1,sub2,sub3;
    float average;
    void display()
    {
        cout<<endl;
        cout<<"Sub 1 : "<<sub1<<" Marks is : "<<m1<<endl;
        cout<<"Sub 2 : "<<sub2<<" Marks is : "<<m2<<endl;
        cout<<"Sub 3 : "<<sub3<<" Marks is : "<<m3<<endl;
    }

   //without return type and with marks parameters
    void result(int ma1,int ma2, int ma3)
    {
        cout<<"Enter the Subject 1 : ";
        cin>>sub1;



        cout<<"Enter the Subject 2 : ";
        cin>>sub2;



        cout<<"Enter the Subject 3 : ";
        cin>>sub3;

        m1=ma1;
        m2=ma2;
        m3=ma3;

        display();

        average=(m1+m2+m3)/3;

        cout<<"Average is : "<<average<<endl;
    }

   //with return type
    int result()
    {
        cout<<"Enter the Subject 1 : ";
        cin>>sub1;
        cout<<"Enter the Marks 1 : ";
        cin>>m1;

        cout<<"Enter the Subject 2 : ";
        cin>>sub2;
        cout<<"Enter the Marks 2 : ";
        cin>>m2;

        cout<<"Enter the Subject 3 : ";
        cin>>sub3;
        cout<<"Enter the Marks 3 : ";
        cin>>m3;
        display();

        average=(m1+m2+m3)/3;

        cout<<"Average is : "<<average<<endl;
        return average;
    }

  //with return type and with Subject and marks parameters
    int result(string s1,string s2,string s3, int ma1,int ma2,int ma3)
    {
        sub1=s1;
        sub2=s2;
        sub3=s3;
        m1=ma1;
        m2=ma2;
        m3=ma3;
        display();

        average=(m1+m2+m3)/3;
        cout<<"Average is : "<<average<<endl<<endl;
        return average;
    }

}obj1;

int main()
{
    cout<<"Normal method \n";
    obj1.result();
    cout<<"Method with marks parameters \n";
    obj1.result(45,60,80);
    cout<<"Method with Subject and marks parameters \n";
    obj1.result("Maths","Science","S.S.T",75,60,35);


    return 0;
}
