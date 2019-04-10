#include "iostream"
#include "iomanip"
#include "cstring"
#include <stdlib.h>
#include<fstream>
using namespace std;
class student
{
double en_no;
string name,occupation,address,fathername,birth[10];
char contact[10];
int semester,marksofco,marksofboss,marksofde,marksofdm,marksofesfp;



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

     void setdate_of_birth(char date[])
      {
          int i;
          for(i=0;i<=9;i++)
          birth[i]=date[i];
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

int save_data(double en_no,string name,string fathername,string birth,string occupation,int sem,string address,char contact[],int co,int boss,int dm,int esfp)
  {
   string str;
   fstream file;
   file.open("main_data.txt",ios::app);
   file<<en_no;
   file<<" ";
   file<<name;
   file<<" ";
   file<<fathername;
   file<<" ";
   file<<birth;
   file<<" ";
   file<<occupation;
   file<<" ";
   file<<address;
   file<<" ";
   file<<contact;
   file<<" ";
   file<<sem;
   file<<" ";
   file<<co;
   file<<" ";
   file<<boss;
   file<<" ";
   file<<dm;
   file<<" ";
   file<<esfp;
   file<<"\n";

   file.close();
   return 0;
  }

int main()
{

student ob[10];
double en_roll;
int i,sem,co,boss,esfp,dm,de;
string name,occupation,fathername,address,birth;
char contact[10];

for(i=0;i<4;i++)
{

              cout<<"------Database for students-------"<<endl;
                  cout<<"Enter Enrollment No:";
           cin>>en_roll;
           ob[i].setenrollment(en_roll);



           cout<<"Enter Name:";
           cin>>name;
          ob[i].setname(name);


           cout<<"Enter Father's Name:";
             cin>>fathername;
             ob[i].setfathername(fathername);

             cout<<"Date-of-birth:";
             cin>>birth;


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


       save_data(en_roll,name,fathername,birth,occupation,sem,address,contact,co,boss,dm,esfp);
}
 for(i=0;i<1;i++)
{
double k=ob[i].getenrollment();
    cout<<setw(10)<<"Enrollment No:"<<en_roll<<endl;
   cout<<setw(10)<<"Name:"<<name<<endl;
    cout<<setw(10)<<"Father,s Name:"<<fathername<<endl;
    cout<<setw(10)<<"Date of Birth:"<<birth<<endl;
    cout<<setw(10)<<"Father,s/Mother,s occupation"<<occupation<<endl;
    cout<<setw(10)<<"Address:"<<address<<endl;
    cout<<setw(10)<<"Contact No:"<<contact<<endl;
    cout<<setw(10)<<"Semester:"<<sem<<endl;
    cout<<setw(10)<<"Marks of CO:"<<co<<endl;
    cout<<setw(10)<<"Marks of BOSS"<<boss<<endl;
    cout<<setw(10)<<"Marks of ESFP:"<<esfp<<endl;
    cout<<setw(10)<<"Marks of DE:"<<de<<endl;
    cout<<setw(10)<<"Marks of DM:"<<dm<<endl;


}
}


CONDITION 1:
#include <fstream>
#include<iomanip>
#include <iostream>
using namespace std;
string find_name()
  {
   int i,count;
   char ss;
   string str;
   fstream file;
   file.open("main_data.txt",ios::in);
   file>>str;
   cout<<str;
  /*do
   {
   file>>str;
   cout<<str;
      while(str[i]==' ')
        {
        ss=str[i];
         if(ss=='a' || ss=='e' || ss=='i' || ss=='o'|| ss=='u')
          {
            count++;
          }
         i++;
        }
   }while(file);
   return "ddd";
  }
*/
}
int main()
{
find_name();
}



CONDITION 2:
#include <fstream>
#include<iomanip>
#include <iostream>
using namespace std;
void teacher(ifstream)
{
   string str;
   fstream file;
   file.open("main_data.txt",ios::in);
   file>>str;
   cout<<str;

     string letters;
     int position =-1;
     string line;
     ifstream readSearch;
     cout<<"enter search word ";
     cin>>letters;
     cout<<"\n";

     	while (getline(file,line))
	{
        	if (line.find(letters) != string::npos)
		{
	            cout << line << endl;
	        }
	}
 }
int main()
{
	void teacher(ifstream);
}

CONDITION 3:
#include <fstream>
#include<iomanip>
#include <iostream>
using namespace std;

void vowelwords()
{
   string str;
   fstream file;
   file.open("main_data.txt",ios::in);
   file>>str;
   cout<<str;
	char word[30];
	while(!file.eof())
	{
		for
		file>>word;
	for(i=0;i<=1;i++)
	{
		if(word[0]=='a'||word[0]=='e'||word[0]=='i'||word[0]=='o'||word[0]=='u')
		cout<<word<<" ";
	}
	}
	file.close();
}
int main()
{
	void vowelwords();
	return 0;
}

CONDITION 4:
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    string txt[10];
    string line;

    int i=0;
    fstream file;
    file.open("main_data.txt",ios::in);
    if (file.is_open())
	{
        while (!file.eof())
	    {
            getline(file,line);
            txt[i]=line[i];
            i++;
             if(i==1)
              {

               cout<<txt[i];
              }
            }
        }
    file.close();

    for (int j=0; txt[j]!="\0"; j++)
{
        cout << txt[j] << endl;
}
    system("pause");
    return 0;
}

