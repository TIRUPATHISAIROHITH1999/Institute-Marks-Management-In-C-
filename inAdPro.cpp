#include<iostream>
#include<string>
#include<algorithm>
#include<fstream>
#include<cstdio>
using namespace std;
class student
{
    public:
    void newUser();
    void oldUser();
    void admin();
    void createdadmin();
    void adminInterface();
    void userInterface();

};
void student::newUser()
{
    cout<<"NOTE:File name must me same as your college registration number via roll-number!"<<endl;
    string fileName;
    string fname;
    string lname;
    string surname;
    int age;
    float tel,hin,eng,math,sci,soc,total,percentage;
    cout<<"Enter filename:";
    cin>>fileName;
    ofstream file;
    file.open(fileName+".txt");
    cout<<"Enter the first name   :";
    cin>>fname;
    cout<<"Enter the last name    :";
    cin>>lname;
    cout<<"Enter the surname      :";
    cin>>surname;
    cout<<"Enter the age :";
    cin>>age;
    cout<<"Telugu  :";
    cin>>tel;
    cout<<"Hindi   :";
    cin>>hin;
    cout<<"English :";
    cin>>eng;
    cout<<"Maths   :";
    cin>>math;
    cout<<"Science :";
    cin>>sci;
    cout<<"Social  :";
    cin>>soc;
    total=tel+hin+eng+math+sci+soc;
    percentage=(total/600)*100;
    file<<fname<<endl;
    file<<lname<<endl;
    file<<surname<<endl;
    file<<age<<endl;
    file<<tel<<endl;
    file<<hin<<endl;
    file<<eng<<endl;
    file<<math<<endl;
    file<<sci<<endl;
    file<<soc<<endl;
    file<<total<<endl;
    file<<percentage<<endl;
    file.close();
    cout<<"Successfully created!!!!"<<endl;
    userInterface();
};
void student::oldUser()
{
    cout<<"NOTE:File name must me same as your college registration number via roll-number!"<<endl;
    string fileName;
    string fname;
    string lname;
    string surname;
    int age;
    float tel,hin,eng,math,sci,soc,total,percentage;
    cout<<"Enter filename:";
    cin>>fileName;
    ifstream file;
    file.open(fileName+".txt");
    file>>fname>>lname>>surname>>age>>tel>>hin>>eng>>math>>sci>>soc>>total>>percentage;
    cout<<"NAME   :"<<fname<<" "<<lname<<" "<<surname<<endl;
    cout<<"AGE    :"<<age<<"years"<<endl;
    cout<<"MARK -- LIST"<<endl;
    cout<<"Telugu  :"<<tel<<endl;
    cout<<"Hindi   :"<<hin<<endl;
    cout<<"English :"<<eng<<endl;
    cout<<"Maths   :"<<math<<endl;
    cout<<"Science :"<<sci<<endl;
    cout<<"Social  :"<<soc<<endl;
    cout<<"TOTAL MARKS     :"<<total<<" marks"<<endl;
    cout<<"PERCENTAGE      :"<<percentage<<" %"<<endl;
    file.close();
    userInterface();
};
void student::admin()
{
    string adminUsername;
    int passcode;
    cout<<"ADMIN loading....."<<endl;
    cout<<"Enter Username :"<<endl;
    cin>>adminUsername;
    cout<<"Enter password :"<<endl;
    cin>>passcode;
    ofstream file(adminUsername+".txt");
    file<<passcode;
};
void student::createdadmin()
{
    string adminUsername;
    int passcode;
    int x;
    cout<<"ADMIN loading....."<<endl;
    cout<<"Enter username:";
    cin>>adminUsername;
    ifstream file(adminUsername+".txt");
    file>>passcode;
    cout<<"Enter password:";
    cin>>x;
    //cout<<passcode<<endl;
    if(x==passcode)
    {
        int i;
        cout<<"success"<<endl;
        cout<<"<><><><><><>REGISTRATION-PANEL<><><><><><><>"<<endl;
        cout<<"<><><><>    1.New student  <><><><><>"<<endl;
        cout<<"<><><><><><>RECORDS-PANEL<><><><><><><>"<<endl;
        cout<<"<><><><>    2.Student data  <><><><><>"<<endl; 
        cout<<"<><><><><><><><> 3.EXIT <><><><><><><><><>"<<endl;
        cout<<"Enter the choice:";
        cin>>i;
        switch(i)
        {
            case 1:
            newUser();
            adminInterface();
            break;

            case 2:
            oldUser();
            adminInterface();
            break;

            case 3:
            exit;
            break;

            default:
            cout<<"Invalid "<<endl;
        };
    }
    else
    {
        cout<<"\nThe username and password MIS-MATCH :(\n\n";
    }
};
 void student::adminInterface()
 {
     int i;
    cout<<"<><><>1.For New-Admin creation <><><>"<<endl;
    cout<<"<><><>2.For Admin Login        <><><>"<<endl;
    cout<<"<><><>3.EXIT<><><><>"<<endl;
    cout<<"\n\n<><><><><><><><><><><><><><><><><><><><><><><><><>\n"<<endl;
    cout<<"Enter the option:";
    cin>>i;
    switch(i)
    {
        case 1:
        admin();
        break;

        case 2:
        createdadmin();
        break;

        case 3:
        exit;
        break;

        default:
        cout<<"Invalid choice"<<endl;
        break;
    };
 };
 void student::userInterface()
 {
     int i;
    cout<<"<><><>1.For New-user creation <><><>"<<endl;
    cout<<"<><><>2.For user-data records <><><>"<<endl;
    cout<<"<><><>3.EXIT<><><><>"<<endl;
    cout<<"\n\n<><><><><><><><><><><><><><><><><><><><><><><><><>\n"<<endl;
    cout<<"Enter the option:";
    cin>>i;
    switch(i)
    {
        case 1:
        newUser();
        break;

        case 2:
        oldUser();
        break;

        case 3:
        exit;
        break;

        default:
        cout<<"Invalid choice"<<endl;
        break;
    };
 };
int main()
{
    system("cls");
    int i;
    cout<<"<><><><><><>CREDENTIAL-PANEL<><><><><><><>"<<endl;
    cout<<"<><><><>    1.USER  PANAL    <><><><><>"<<endl;
    cout<<"<><><><>    2.ADMIN PANAL    <><><><><>"<<endl;
    cout<<"<><><><><><><><><><><><><><><><><><><><><><>"<<endl;
    cout<<"\n<><><><><><><><><><>  WELCOME  <><><><><><><><><><>\n"<<endl;
    cout<<"Enter the options:";
    cin>>i;
    switch(i)
    {
        case 1:
        student newer;
        newer.userInterface();
        break;

         case 2:
        student admin;
        newer.adminInterface();
        break;

        default:
        cout<<"Invalid choice"<<endl;
        break;
    };
  
    // cout<<INTMAX_MAX<<endl;
    // cout<<INTMAX_MIN<<endl;
};
