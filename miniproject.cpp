#include<bits/stdc++.h>
using namespace std;
int i=0;
int counte=0;
class a
{
	public:
	string name[50];
	int rollno[50];
	int age[50];
	string branch[50];
	string year[50];
	long long mobile[50];
	double cgpa[50];
		void getdata(void);
		void displayall(void);
		void displayspec(void);
		void modify(void);
		void deleteall(void);
		void deletee(void);
};
void a::getdata()
{
	cout<<"\t\tEnter the following student details :-\n";
	cout<<"\t\tName      : ";
	cin.ignore(100, '\n');
	getline(cin,name[i]);
	cout<<"\t\tRoll no   : ";
	cin>>rollno[i];
	cout<<"\t\tAge       : ";
	cin>>age[i];
	cout<<"\t\tBranch    : ";
	cin>>branch[i];
	cout<<"\t\tYear      : ";
	cin>>year[i];
	cout<<"\t\tMobile No : ";
	cin>>mobile[i];
	cout<<"\t\tCGPA      : ";
	cin>>cgpa[i];
	cout<<"\n";
	i++;
}
void a ::displayall()
{
	cout<<"##################################### STUDENT DATABASE MANAGEMENT #####################################\n";
	cout<<"-------------------------------------------------------------------------------------------------------\n";
	cout<<setw(10)<<left<<"S.NO"<<setw(18)<<left<<setw(20)<<"NAME OF STUDENT"<<setw(25)<<"ROLL NO"<<setw(18)<<left<<setw(10)<<"AGE"<<setw(18)<<left<<setw(10)<<"BRANCH"<<setw(18)<<left<<setw(10)<<"YEAR"<<setw(18)<<left<<setw(13)<<"MOBILE NO"<<setw(18)<<left<<setw(10)<<"CGPA"<<"\n";
	cout<<"-------------------------------------------------------------------------------------------------------\n";
	for(int x=0;x<i;x++)
	{
		cout<<setw(10)<<left<<x+1<<setw(18)<<left<<setw(20)<<name[x]<<setw(25)<<rollno[x]<<setw(18)<<left<<setw(10)<<age[x]<<setw(18)<<left<<setw(10)<<branch[x]<<setw(18)<<left<<setw(10)<<year[x]<<setw(18)<<left<<setw(13)<<mobile[x]<<setw(18)<<left<<setw(10)<<cgpa[x]<<"\n";
	}
	cout<<"-------------------------------------------------------------------------------------------------------\n";
}
void a ::displayspec()
{
	cout<<"\t\tEnter Rollno of student : ";
	int xrollno;cin>>xrollno;
	for(int x=0;x<i;x++){
	if(xrollno==rollno[x]){
	cout<<"\n";
	cout<<"##################################### STUDENT DATABASE MANAGEMENT #####################################\n";
	cout<<"-------------------------------------------------------------------------------------------------------\n";
	cout<<setw(10)<<left<<"S.NO"<<setw(18)<<left<<setw(20)<<"NAME OF STUDENT"<<setw(25)<<"ROLL NO"<<setw(18)<<left<<setw(10)<<"AGE"<<setw(18)<<left<<setw(10)<<"BRANCH"<<setw(18)<<left<<setw(10)<<"YEAR"<<setw(18)<<left<<setw(13)<<"MOBILE NO"<<setw(18)<<left<<setw(10)<<"CGPA"<<"\n";
	cout<<"-------------------------------------------------------------------------------------------------------\n";
	cout<<setw(10)<<left<<x+1<<setw(18)<<left<<setw(20)<<name[x]<<setw(25)<<rollno[x]<<setw(18)<<left<<setw(10)<<age[x]<<setw(18)<<left<<setw(10)<<branch[x]<<setw(18)<<left<<setw(10)<<year[x]<<setw(18)<<left<<setw(13)<<mobile[x]<<setw(18)<<left<<setw(10)<<cgpa[x]<<"\n";
	cout<<"-------------------------------------------------------------------------------------------------------\n";
	}
}
}
void a ::deleteall()
{
	i=0;

	cout<<"\t\tALL DATA IS DELETED \n";

}
void a::deletee()
{
	cout<<"\t\tEnter Rollno of student : ";
	int xrollno;cin>>xrollno;
	for(int x=0;x<i;x++){
	if(xrollno==rollno[x]){
	for(int y=x;y<i;y++)
	{
	name[y]=name[y+1];
	rollno[y]=rollno[y+1];
	age[y]=age[y+1];
	branch[y]=branch[y+1];
	year[y]=year[y+1];
	mobile[y]=mobile[y+1];
	cgpa[y]=cgpa[y+1];
	i--;
		}
	}}
}
void a::modify()
{
	cout<<"\t\tEnter Rollno of student : ";
	int xrollno;cin>>xrollno;
	for(int x=0;x<i;x++){
	if(xrollno==rollno[x]){
	cout<<"\n";
	cout<<"##################################### PREVIOUS DATA OF STUDENT #####################################\n";
	cout<<"-------------------------------------------------------------------------------------------------------\n";
	cout<<setw(10)<<left<<"S.NO"<<setw(18)<<left<<setw(20)<<"NAME OF STUDENT"<<setw(25)<<"ROLL NO"<<setw(18)<<left<<setw(10)<<"AGE"<<setw(18)<<left<<setw(10)<<"BRANCH"<<setw(18)<<left<<setw(10)<<"YEAR"<<setw(18)<<left<<setw(13)<<"MOBILE NO"<<setw(18)<<left<<setw(10)<<"CGPA"<<"\n";
		cout<<"-------------------------------------------------------------------------------------------------------\n";
	cout<<setw(10)<<left<<x+1<<setw(18)<<left<<setw(20)<<name[x]<<setw(25)<<rollno[x]<<setw(18)<<left<<setw(10)<<age[x]<<setw(18)<<left<<setw(10)<<branch[x]<<setw(18)<<left<<setw(10)<<year[x]<<setw(18)<<left<<setw(13)<<mobile[x]<<setw(18)<<left<<setw(10)<<cgpa[x]<<"\n";
		cout<<"-------------------------------------------------------------------------------------------------------\n";
	cout<<"##################################### ENTER NEW DATA OF STUDENT #####################################\n";
	cout<<"\t\tName      : ";
	cin.ignore(100, '\n');
	getline(cin,name[x]);
	cout<<"\t\tRoll no   : ";
	cin>>rollno[x];
	cout<<"\t\tAge       : ";
	cin>>age[x];
	cout<<"\t\tBranch    : ";
	cin>>branch[x];
	cout<<"\t\tYear      : ";
	cin>>year[x];
	cout<<"\t\tMobile No : ";
	cin>>mobile[x];
	cout<<"\t\tCGPA      : ";
	cin>>cgpa[x];
	cout<<"\n";
	}
}
}
void login()
{
	string username,password;

	cout<<"\t\t----------------------------------------------\t\t\n";
	cout<<"\t\t|        	   ADMIN  LOGIN              |\t\t\n";
	cout<<"\t\t----------------------------------------------\t\t\n";
	cout<<"\t\t|  USERNAME     :  ";cin>>username;cout<<"\t";
	cout<<"\t|  PASSWORD     :  ";cin>>password;cout<<"\t";
	cout<<"\t----------------------------------------------\t\t\n";
	if(username=="ANUSHKA")
	{
		if(password=="AGARWAL")
			counte=1;
		else
		{cout<<"\t\t-------------------\t\t\n";
		cout<<"\t\t| INVALID PASSWORD |\t\t\n";
		cout<<"\t\t-------------------\t\t\n";}
	}
	else
	{
	cout<<"\t\t|-----------------|\t\t\n";
	cout<<"\t\t INVALID LOGIN \t\t\n";
	cout<<"\t\t|-----------------|\t\t\n";}
	}
int main()
{
	a s1;

	login();
	if(counte==1)
	{
		while(true)
		{
			int choice;
			cout<<"\t\t################## WELCOME ##################\t\t\n";
			cout<<"\t\t[1] Add Details\t\t\n";
			cout<<"\t\t[2] View Details\t\t\n";
			cout<<"\t\t[3] Edit Details\t\t\n";
			cout<<"\t\t[4] Delete Details\t\t\n";
			cout<<"\t\t[5] EXIT Details\t\t\n";
			cout<<"\t\tChoice : ";
			cin>>choice;
			switch(choice)
			{
				case 1:
					s1.getdata();
					cout<<"\n";
					break;
				case 2:
					cout<<"\t\t[1] View all Details\t\t\n";
					cout<<"\t\t[2] Specific Details\t\t\n";
					cout<<"\t\tChoice : ";
					int v;cin>>v;
					if(v==1)
					s1.displayall();
					else
					s1.displayspec();
					cout<<"\n";
					break;
				case 3:
					s1.modify();
					cout<<"\n";
					break;
				case 4:
					cout<<"\t\t[1] Delete all Details\t\t\n";
					cout<<"\t\t[2] Specific Deleltion\t\t\n";
					cout<<"\t\tChoice : ";
					int e;cin>>e;
					if(e==1)
					s1.deleteall();
					else
					s1.deletee();
					cout<<"\n";
					break;
				case 5:
					exit(0);
					break;
			}
		}
	}
	else
	cout<<"";
}
