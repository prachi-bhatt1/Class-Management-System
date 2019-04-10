#include "iostream"
#include "iomanip"
#include "cstring"
#include <stdlib.h>
using namespace std;
class student
{
double en_no;
string name,occupation,address,fathername;
char birth[10];
char contact[10];
int semester,marksofco,marksofboss,marksofde,marksofdm,marksofesfp,totalmarks;



public:


    void setenrollment(double a)
    {
        en_no=a;
    }
    double getenrollment()
    {
        return en_no;

    }


    void setname(string n)
    {
        name=n;
    }
    string getname()
    {
        return name;
    }


    void setfathername(string f)
    {
        fathername=f;
    }
     string getfathername()
     {
         return fathername;
     }

     void setoccupation(string o)
   {

        occupation=o;
    }
     string getoccupation()
     {
         return occupation;
     }

       void setaddress(string add)
   {

        address=add;
    }
     string getaddress()
     {
         return address;
     }


          void setcontact(char c[])
        {
for(int k=0;k<=9;k++)
        contact[k]=c[k];
        }
     char  *getcontact()
      {
         return contact;
      }

      void setsemester(int sem)
      {
          semester=sem;
      }

      int getsemester()
      {
          return semester;
      }

      void setdate_of_birth(char date[])
      {
          int i;
          for(i=0;i<=9;i++)
          birth[i]=date[i];
      }
      char * getdate_of_birth()
      {
          return birth;
      }

      void setmarks(int co)
      {
          marksofco=co;
      }

      int getmarks()
    {
        return marksofco;
    }

     void setmarks_of_boss(int boss)
      {
          marksofboss=boss;
      }

      int getmarks_of_boss()
    {
        return marksofboss;
    }

     void setmarks_of_esfp(int esfp)
      {
          marksofesfp=esfp;
      }

      int getmarks_of_esfp()
    {
        return marksofesfp;
    }

     void setmarks_of_DE(int de)
      {
          marksofde=de;
      }

      int getmarks_of_DE()
    {
        return marksofde;
    }

     void setmarks_of_DM(int dm)
      {
          marksofdm=dm;
      }

      int getmarks_of_DM()
    {
        return marksofdm;
    }

};
int main()
{

student ob[10];
double en_roll;
int i,sem;
float co,boss,esfp,dm,de,Total_marks,perc,c,avg1,avg2,avg3,avg4,p1,p2,p3,p4;
string name,occupation,fathername,address;
char birth[10];
char contact[10];

//ofstream obj("yashvi",ios::out);
for(i=0;i<9;i++)
{
                cout<<"\n";
              cout<<"------Database for students-------"<<endl;
                  cout<<"Enter Enrollment No:";
           cin>>en_roll;
           ob[i].setenrollment(en_roll);
//obj<<ob[i].en_roll;

           cout<<"Enter Name:";
           cin>>name;
          ob[i].setname(name);


           cout<<"Enter Father's Name:";
             cin>>fathername;
             ob[i].setfathername(fathername);

             cout<<"Date-of-birth:";
             for(int j=0;j<=9;j++)
                {cin>>birth[i];}

                ob[i].setdate_of_birth(birth);

            cout<<"Enter Father's/Mother's occupation:";
            cin>>occupation;
            ob[i].setoccupation(occupation);

             cout<<"Enter Address(city):";
             cin>>address;
              ob[i].setaddress(address);

               cout<<"Contact No:";
              cin>>contact;
              ob[i].setcontact(contact);

              cout<<"Semester No:";
             cin>>sem;
             ob[i].setsemester(sem);



                cout<<"Enter marks of co:";
                cin>>co;
                ob[i].setmarks(co);

                 cout<<"Marks of BOSS:";
                  cin>>boss;
                   ob[i].setmarks(boss);

                   cout<<"Marks of ESFP:";
                   cin>>esfp;
                    ob[i].setmarks(esfp);

                   cout<<"Marks of DM:";
                    cin>>dm;
                     ob[i].setmarks(dm);

                 cout<<"Marks of DE:";
                  cin>>de;
                ob[i].setmarks(de);
                int i;
                if(de>=33)
                {
                    cout<<"Cleared DE";
                }
                else
                {
                    cout<<"Not Cleared DE";
                }


                cout<<"\n";


    Total_marks = co+boss+dm+de+esfp;
    cout<<"Total marks are:"<<Total_marks<<endl;
    perc=(Total_marks/500)*100;
    cout<<"Percentage:"<<perc<<endl;
    if (Total_marks>=200)
    {
        cout<<"Pass in all sub";
    }
 if (Total_marks<=200)
    {
        cout<<"Fail";
    }


    cout<<"\n";



    if (c=(dm>de)?dm : de)
    {
        cout<<"Highest in DM:"<<c;
    }
    else if(  c = (dm>boss)?dm : boss)
    {
        cout<<"Highest in DM:"<<c;
    }
    else if(  c = (dm>esfp)?dm : esfp)
    {
        cout<<"Highest in DM:"<<c;
    }
    else if(c = (dm>co)?dm : co)
    {
        cout<<"Highest in DM:"<<c;
    }


    cout<<"\n";


    if (perc<=60)
    {
        cout<<"Has less than 60%:"<<name;
    }


    cout<<"\n";


    avg1=co+de+dm;
    avg2=de+dm+boss;
    avg3=dm+boss+esfp;
    avg4=co+esfp+boss;

    p1=(avg1/300)*100;
    p2=(avg2/300)*100;
    p3=(avg3/300)*100;
    p4=(avg4/300)*100;
    cout<<"A1:"<<p1<<endl;
    cout<<"A2:"<<p2<<endl;
     cout<<"A3:"<<p3<<endl;

      cout<<"A4:"<<p4<<endl;
      if (p1==75)
      {
          cout<<name;
      }
      else if(p2==75)
      {
          cout<<name;
      }
      else if(p3==75)
      {
          cout<<name;
      }
      else if(p4==75)
      {
          cout<<name;
      }





}
 for(i=0;i<9;i++)
{
double k=ob[i].getenrollment();
    cout<<setw(10)<<"Enrollment No:"<<k<<endl;
   cout<<setw(10)<<"Name:"<<ob[i].getname()<<endl;
    cout<<setw(10)<<"Father's Name:"<<ob[i].getfathername()<<endl;
    cout<<setw(10)<<"Father's/Mother's occupation"<<ob[i].getoccupation()<<endl;
    cout<<setw(10)<<"Address:"<<ob[i].getaddress()<<endl;
    cout<<setw(10)<<"Contact No:"<<ob[i].getcontact()<<endl;
    cout<<setw(10)<<"Semester:"<<ob[i].getsemester()<<endl;
    cout<<setw(10)<<"Date of Birth:"<<ob[i].getdate_of_birth()<<endl;
    cout<<setw(10)<<"Marks of CO:"<<ob[i].getmarks()<<endl;
    cout<<setw(10)<<"Marks of BOSS"<<ob[i].getmarks_of_boss()<<endl;
    cout<<setw(10)<<"Marks of ESFP:"<<ob[i].getmarks_of_esfp()<<endl;
    cout<<setw(10)<<"Marks of DE:"<<ob[i].getmarks_of_DE()<<endl;
    cout<<setw(10)<<"Marks of DM:"<<ob[i].getmarks_of_DM()<<endl;
}
}

