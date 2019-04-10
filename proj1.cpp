#include "iostream"
#include "iomanip"
#include "cstring"
#include <stdlib.h>
#include"fstream"
using namespace std;
class student
{


double en_no;
string occupation,address,fathername,name;
char birth[10];
char contact[10];
int semester,marksofco,marksofboss,marksofde,marksofdm,marksofesfp,age;



public:


    void setenrollment(double  a)
    {
        en_no=a;
    }
    double getenrollment()
    {
        return en_no;

    }


   string g;
  void setname(string a)
  {
    name=a;
  }

  string getname()
  {
      return name;
  }
 void setage(int z)
{
        age=z;
}
  int getage()
{
 return age;
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

ofstream obj("file5",ios::out);


student ob[10];
double en_roll;
int i,x,sem,co,boss,esfp,dm,de,character,age;
string occupation,fathername,address,name;
char birth[10];
char contact[10];


for(i=0;i<9;i++)
{

              cout<<"------Enter the Details for students-------"<<endl;
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

			cout<<"Your age";
			cin>>age;
			ob[i].setage(age);



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

}
ofstream obj1("file5",ios::out|ios::app);
cout<<"--------Displaying the Database of the student's--------";
 for(i=0;i<9;i++)
{

    double k=ob[i].getenrollment();
    obj<<setw(10)<<"Enrollment No:"<<k<<endl;
    obj<<setw(10)<<"Name:"<<ob[i].getname()<<endl;
    obj<<setw(10)<<"Father,s Name:"<<ob[i].getfathername()<<endl;
    obj<<setw(10)<<"Father,s/Mother,s occupation"<<ob[i].getoccupation()<<endl;
    obj<<setw(10)<<"Address:"<<ob[i].getaddress()<<endl;
    obj<<setw(10)<<"Contact No:"<<ob[i].getcontact()<<endl;
    obj<<setw(10)<<"Semester:"<<ob[i].getsemester()<<endl;
    obj<<setw(10)<<"Date of Birth:"<<ob[i].getdate_of_birth()<<endl;
    obj<<setw(10)<<"Marks of CO:"<<ob[i].getmarks()<<endl;
    obj<<setw(10)<<"Marks of BOSS"<<ob[i].getmarks_of_boss()<<endl;
    obj<<setw(10)<<"Marks of ESFP:"<<ob[i].getmarks_of_esfp()<<endl;
    obj<<setw(10)<<"Marks of DE:"<<ob[i].getmarks_of_DE()<<endl;
    obj<<setw(10)<<"Marks of DM:"<<ob[i].getmarks_of_DM()<<endl;
}
     cout<<"Student's Details"<<endl;
        cout<<"1. Display all the students whose name starts with 's' "<<endl;
        cout<<"2. Display all the students of semester 2,3 and 4. "<<endl;
        cout<<"3.  Display all the name of students who are less than 20 years"<<endl;
        cout<<"4. Display all the students who are less than 20 years and lives in Ahmedabad"<<endl;
        cout<<"5. Display all the students whose father’s name starts with the alphabet their students(child) name’s alphabet. "<<endl;

        cout<<"please enter your choice"<<endl;
        cin>>x;

	switch(x)
	{
			case 1:

			for(int i=0;i<9;i++)
			{
			cout<<ob[i].getname()<<endl;


			}
			cout<<"Names with S"<<endl;
			for(int i=0;i<2;i++)
			{
			if((ob[i].getname()).at(0)=='s')
			{
			cout<<ob[i].getname()<<endl;
			}
			}
			 break;

		case 2:
		int i;
		for(i=0;i<9;i++)
		{
		if(ob[i].getsemester()==2)
		{
		cout<<"Students of semester 2:"<<endl<<ob[i].getname()<<endl;
		}

		else if(ob[i].getsemester()==3)
	 	{
		cout<<"Students of semester 3:"<<endl<<ob[i].getname()<<endl;
		}

		else if(ob[i].getsemester()==4)
		{
		cout<<"Students of semester 4:"<<endl<<ob[i].getname()<<endl;
		}

		}
		break;



		case 3: for(int i=0;i<9;i++)
		{

		    if(ob[i].getage()<=20)
			{
		           cout<<ob[i].getname()<<endl;
			}
		}
	        break;
		 case 4: for(int i=0;i<9;i++)
			  {
			if(ob[i].getaddress()=="Ahmedabad" && (ob[i].getage()<=20) )
			{

				cout<<ob[i].getname()<<endl;

			}
			else if(ob[i].getaddress()=="ahmedabad" && (ob[i].getage()<=20))
			{

				cout<<ob[i].getname()<<endl;
			}
			else
			{
			}
			}
			break;

	         case 5:

				for(int i=0;i<9;i++)
				{
				if((ob[i].getname()).at(0)=='s' && (ob[i].getfathername()).at(0)=='s')
				{
				cout<<ob[i].getname()<<endl;
				}
				}
				 break;


			}
			}












