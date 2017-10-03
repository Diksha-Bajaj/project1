

#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
class grain
{
	int gcode;
	char name_of_grain_g[50];
	char season[50];
	char climate[50];
	char soil[50];
	public:
	void graingetdata();
	void grainputdata();
	int graingetcode();
};
class worker
{
	int wcode;
	char name[50];
	char address[100];
	char phoneno[20];
	char experience[50];
	float salary;
	public:
	void workergetdata();
	void workerputdata();
	int workergetcode();
};
class input
{
	int icode;
	char material[50];
	char ans[50];
	char cost[40];
	char efficiency[50];
	public:
	void inpgetdata();
	void inpputdata();
	int inpgetcode();
};
class stock
{
	int scode;
	int year;
	char name_of_grain[40];
	int production;
	int  sold_out;
	int leftover;
	int  wasted;

	void calculate1()
	{
		wasted = production -( sold_out + leftover);









		cout<<"Wasted- "<<wasted<<endl;
	}
	public:
	void sgetdata();
	void sputdata();
	int getscode();
};
class finance
{
	int fcode;
	long capital;
	long revenue;
	long investment;
	long expense;
	long profit_loss;
	void calculate()
	{
		capital= investment + expense ;
		cout<<"Capital ="<<capital<<endl;
		profit_loss= revenue - capital;
		if(profit_loss>0)
		{
			cout<<"Profit = "<<profit_loss;
		}
		else if (profit_loss<0)
		{
			cout<<"Loss ="<<profit_loss;
		}
		else
		{
			cout<<"no profit no loss";
		}
	}
	public:
	void fgetdata();
	void fputdata();
	int fgetcode();
};
class rate
{
	int rcode;
	char name_of_grainr[40];
	char purchasing_rate[20];
	char subsidy[20];
	public:
	void rgetdata();
	void rputdata();
	int getrcode();
};
void grain :: graingetdata()
{
	cout<<"\n Enter grain code \n";
	cin>>gcode;
	cout<<"\n Enter name of the grain \n";
	gets(name_of_grain_g);
	cout<<"\n Enter season of the grain \n";
	gets(season);
	cout<<"\n Enter the type of climate required \n";
	gets(climate);
	cout<<"\n Enter the type of soil required \n";
	gets(soil);
}
void grain :: grainputdata()
{
	cout<<endl;
	cout<<gcode<<"\t"<<name_of_grain_g<<endl;
	cout<<"Season-"<<season<<endl;
	cout<<"Climate-"<<climate<<endl;
	cout<<"Type of Soil-"<<soil<<endl;
}
int grain :: graingetcode()
{
	return (gcode);
}
void worker :: workergetdata()
{
	cout<<"\n Enter worker code \n";
	cin>>wcode;
	cout<<"\n Enter name of worker \n";
	gets(name);
	cout<<"\n Enter the address of the worker \n";
	gets(address);
	cout<<"\n Enter the phone no of the worker \n";
	cin>>phoneno;
	cout<<"\n Enter the past farming experience of the worker \n";
	gets(experience);
	cout<<"\n Enter the salary of the worker \n";
	cin>>salary;
}
void worker :: workerputdata()
{
	cout<<endl;
	cout<<wcode<<"\t"<<name<<endl;
	cout<<"Address-"<<address<<endl;
	cout<<"Phone Number-"<<phoneno<<endl;
	cout<<"Experience-"<<experience<<endl;
	cout<<"Salary-"<<salary<<endl;
}
int worker :: workergetcode()
{
	return (wcode);
}
void input :: inpgetdata()
{
	cout<<"\n Enter input code \n";
	cin>>icode;
	cout<<"\n Enter the material reqired \n";
	gets(material);
	cout<<"\n Given input is eco friendly? (yes/no) \n";
	gets(ans);
	cout<<"\n Enter the cost of the material used \n";
	cin>>cost;
	cout<<"\n Enter the efficiency of the material \n";
	gets(efficiency);
}
void input :: inpputdata()
{
	cout<<endl;
	cout<<icode<<"\t"<<material<<endl;
	if(strcmp(ans,"yes")==0)
	{
		cout<<ans<<" It is ecofriendly."<<endl;
	}
	else
	{
		cout<<ans<<" It is not ecofriendly."<<endl;
	}
	cout<<"Cost-"<<cost<<endl;
	cout<<"Effeciency-"<<efficiency<<endl;
}
int input :: inpgetcode()
{
	return (icode);
}
void stock:: sgetdata()
{
	cout<<"\n Enter stock code \n";
	cin>>scode;
	cout<<"\n Enter year \n";
	cin>>year;
	cout<<"\n Enter name of grain \n";
	gets(name_of_grain);
	cout<<"\n Enter production in that year\n";
	cin>>production;
	cout<<"\n Enter how much grain is sold out in that particular year\n";
	cin>>sold_out;
	cout<<"\n Enter the leftover grain in a particular year\n";
	cin>>leftover;
}
void stock :: sputdata()
{
cout<<endl;
	cout<<scode<<"\t"<<year<<"\t"<<name_of_grain<<"\t"<<endl;
	cout<<"Production-"<<production<<endl;
	cout<<"Sold out-"<<sold_out<<endl;
	cout<<"Left over-"<<leftover<<endl;
	calculate1();
}
int stock :: getscode()
{
	return (scode);
}
void finance :: fgetdata()
{
	cout<<"\n Enter finance code \n";
	cin>>fcode;
	cout<<"\n Enter investment \n";
	cin>>investment;
	cout<<"\n Enter expense \n";
	cin>>expense;
	cout<<"\n Enter revenue \n";
	cin>>revenue;
}
void finance :: fputdata()
{
	cout<<endl;
	cout<<fcode<<endl;
	cout<<"Investment ="<<investment<<endl;
	cout<<"Expense ="<<expense<<endl;
	cout<<"Revenue ="<<revenue<<endl;
	calculate();
}
int finance :: fgetcode()
{
	return (fcode);
}
void rate :: rgetdata()
{
	cout<<"\n Enter rate code \n";
	cin>>rcode;
	cout<<"\n Enter name of grain \n";
	gets(name_of_grainr);
	cout<<"\n Enter purchasing rate of that grain\n";
	gets(purchasing_rate);
	cout<<"\n Enter how much subsidy they get on each grain \n";
	gets(subsidy);
}
void rate :: rputdata()
{
	cout<<endl;
	cout<<rcode<<"\t"<<name_of_grainr<<endl;
	cout<<"Purchasing rate-"<<purchasing_rate<<endl;
	cout<<"Subsidy-"<<subsidy<<endl;
}
int rate :: getrcode()
{
	return (rcode);
}

grain g;
worker w;
input i;
stock s;
finance f;
rate r;
void grain_resc()
{
	clrscr();
	textbackground(6);
	textcolor(0);
	void enter_file();
	void display_file();
	void search();
	void modify();
	void Delete();
	int c;
	do
	{
		cout<<"\n\t ***************************** Grain  Menu *************************\n";
		cout<<"\n 1. Add grain record \n";
		cout<<"\n 2. Display record \n";
		cout<<"\n 3. Search a record \n";
		cout<<"\n 4. Modify a record \n";
		cout<<"\n 5. Delete a record \n";
		cout<<"\n 6. Do you want to exit from grain menu? \n";
		cout<<"\n Please enter your choice \n";
		cin>>c;
		if (c==1)
		{
			enter_file();
		}
		else if (c==2)
		{
			display_file();
		}
		else if (c==3)
		{
			search();
		}
		else if (c==4)
		{
			modify();
		}
		else if (c==5)
		{
			Delete();
		}
	}
	while (c!=6);
	cout<<endl;
	getche();
}
void enter_file()
{
	ofstream afile("grains.dat",ios::binary|ios::app);
	g.graingetdata();
	afile.write((char*)&g,sizeof(g));
	afile.close();
	cout<<endl;
	getche();
}
void display_file()
{
	ifstream bfile("grains.dat",ios::binary);
	while(bfile.read((char*)&g,sizeof(g)))
	{
		g.grainputdata();
	}
	bfile.close();
	cout<<endl;
	getche();
}
void search()
{
	int p=-1,z;
	ifstream cfile("grains.dat",ios::binary);
	cout<<"\n Please enter the grain code to be searched \n";
	cin>>z;
	while(cfile.read((char*)&g,sizeof(g)))
	{
		if(g.graingetcode()==z);
		{
			g.grainputdata();
			p++;
		}
	}
	if (p==-1)
	cout<<"\n sorry! record not found \n";
	cout<<endl;
	cfile.close();
	getche();
}
void modify()
{
	int q=-1,a=0,t;
	cout<<"\n Please enter the grain code to be modified \n";
	cin>>t;
	fstream dfile("grains.dat",ios::binary|ios::in|ios::out);
	while(dfile.read((char*)&g,sizeof(g)))
	{
		a++;
		if(g.graingetcode()==t)
		{
			g.graingetdata();
			dfile.seekp((a-1)*sizeof(g),ios::beg);
			dfile.write ((char*)&g,sizeof(g));
			q++;
		}
	}
	if(q==-1)
	cout<<"\n sorry! record not found \n";
	dfile.close();
	getche();
}
void Delete()
{
	int b;
	ifstream efile("grains.dat",ios::binary);
	ofstream ffile("temp.dat",ios::binary);
	cout<<"\n Please enter the grain code to be deleted \n";
	cin>>b;
	while (efile.read((char*)&g,sizeof(g)))
	{
		if(g.graingetcode()!=b)
		{
			ffile.write((char*)&g,sizeof(g));
		}
	}
	remove ("grains.dat");
	rename("temp.dat","grains.dat");
	efile.close();
	ffile.close();
	cout<<endl;
	getche();
}
void worker_resc()
{
	clrscr();
	textbackground(1);
	textcolor(0);
	void enter_filew();
	void display_filew();
	void searchw();
	void modifyw();
	void Deletew();
	int c;
	do
	{
		cout<<"\n\t ************************* Worker Menu *************************\n";
		cout<<"\n 1. Add worker record \n";
		cout<<"\n 2. Display record \n";
		cout<<"\n 3. Search a record \n";
		cout<<"\n 4. Modify a record \n";
		cout<<"\n 5. Delete a record \n";
		cout<<"\n 6. Do you want to exit from worker menu? \n";
		cout<<"\n Please enter your choice \n";
		cin>>c;
		if (c==1)
		{
			enter_filew();
		}
		else if (c==2)
		{
			display_filew();
		}
		else if (c==3)
		{
			searchw();
		}
		else if (c==4)
		{
			modifyw();
		}
		else if (c==5)
		{
			Deletew();
		}
	}
	while (c!=6);
	cout<<endl;
	getche();
}
void enter_filew()
{
	ofstream afile("work.dat",ios::binary|ios::app);
	w.workergetdata();
	afile.write((char*)&w,sizeof(w));
	afile.close();
	cout<<endl;
	getche();
}
void display_filew()
{
	ifstream bfile("work.dat",ios::binary);
	while(bfile.read((char*)&w,sizeof(w)))
	{
		w.workerputdata();
	}
	bfile.close();
	cout<<endl;
	getche();
}
void searchw()
{
	int p=-1,z;
	ifstream cfile("work.dat",ios::binary);
	cout<<"\n Please enter the worker code to be searched \n";
	cin>>z;
	while(cfile.read((char*)&w,sizeof(w)))
	{
		if(w.workergetcode()==z);
		{
			w.workerputdata();
			p++;
		}
	}
	if (p==-1)
	cout<<"\n sorry! record not found \n";
	cout<<endl;
	cfile.close();
	getche();
}
void modifyw()
{
	int q=-1,a=0,t;
	cout<<"\n Please enter the worker code to be modified \n";
	cin>>t;
	fstream dfile("work.dat",ios::binary|ios::in|ios::out);
	while(dfile.read((char*)&w,sizeof(w)))
	{
		a++;
		if(w.workergetcode()==t)
		{
			w.workergetdata();
			dfile.seekp((a-1)*sizeof(w),ios::beg);
			dfile.write ((char*)&w,sizeof(w));
			q++;
		}
	}
	if(q==-1)
	cout<<"\n sorry! record not found \n";
	dfile.close();
	getche();
}
void Deletew()
{
	int b;
	ifstream efile("work.dat",ios::binary);
	ofstream ffile("work.dat",ios::binary);
	cout<<"\n Please enter the worker code to be deleted \n";
	cin>>b;
	while (efile.read((char*)&w,sizeof(w)))
	{
		if(w.workergetcode()!=b)
		{
			ffile.write((char*)&w,sizeof(w));
		}
	}
	remove ("work.dat");
	rename("temp.dat","work.dat");
	efile.close();
	ffile.close();
	cout<<endl;
	getche();
}
void input_resc()
{
	clrscr();
	textbackground(4);
	textcolor(7);
	void enter_filei();
	void display_filei();
	void searchi();
	void modifyi();
	void Deletei();
	int c;
	do
	{
		cout<<"\n \t************************* Input Menu ************************\n";
		cout<<"\n 1. Add input record \n";
		cout<<"\n 2. Display record \n";
		cout<<"\n 3. Search a record \n";
		cout<<"\n 4. Modify a record \n";
		cout<<"\n 5. Delete a record \n";
		cout<<"\n 6. Do you want to exit from input menu \n";
		cout<<"\n Please enter your choice \n";
		cin>>c;
		if (c==1)
		{
			enter_filei();
		}
		else if (c==2)
		{
			display_filei();
		}
		else if (c==3)
		{
			searchi();
		}
		else if (c==4)
		{
			modifyi();
		}
		else if (c==5)
		{
			Deletei();
		}
	}
	while (c!=6);
	cout<<endl;
	getche();
}
void enter_filei()
{
	ofstream afile("input1.dat",ios::binary|ios::app);
	i.inpgetdata();
	afile.write((char*)&i,sizeof(i));
	afile.close();
	cout<<endl;
	getche();
}
void display_filei()
{
	ifstream bfile("input1.dat",ios::binary);
	while(bfile.read((char*)&i,sizeof(i)))
	{
		i.inpputdata();
	}
	bfile.close();
	cout<<endl;
	getche();
}
void searchi()
{
	int p=-1,z;
	ifstream cfile("input1.dat",ios::binary);
	cout<<"\n Please enter the input code to be searched \n";
	cin>>z;
	while(cfile.read((char*)&i,sizeof(i)))
	{
		if(i.inpgetcode()==z);
		{
			i.inpputdata();
			p++;
		}
	}
	if (p==-1)
	cout<<"\n sorry! record not found \n";
	cout<<endl;
	cfile.close();
	getche();
}
void modifyi()
{
	int q=-1,a=0,t;
	cout<<"\n Please enter the input code to be modified \n";
	cin>>t;
	fstream dfile("input1.dat",ios::binary|ios::in|ios::out);
	while(dfile.read((char*)&i,sizeof(i)))
	{
		a++;
		if(i.inpgetcode()==t)
		{
			i.inpgetdata();
			dfile.seekp((a-1)*sizeof(i),ios::beg);
			dfile.write ((char*)&i,sizeof(i));
			q++;
		}
	}
	if(q==-1)
	cout<<"\n sorry! record not found \n";
	dfile.close();
	getche();
}
void Deletei()
{
	int b;
	ifstream efile("input1.dat",ios::binary);
	ofstream ffile("temp.dat",ios::binary);
	cout<<"\n Please enter the input code to be deleted \n";
	cin>>b;
	while (efile.read((char*)&i,sizeof(i)))
	{
		if(i.inpgetcode()!=b)
		{
			ffile.write((char*)&i,sizeof(i));
		}
	}
	remove ("input1.dat");
	rename("temp.dat","input1.dat");
	efile.close();
	ffile.close();
	cout<<endl;
	getche();
}
void stock_resc()
{
	clrscr();
	textbackground(2);
	textcolor(0);
	void enter_sfile();
	void display_sfile();
	void search_s();
	void modify_s();
	void Delete_s();
	int c;
	do
	{
		cout<<"\n\t ************************* Stock Menu ************************* \n";
		cout<<"\n 1. Add stock record \n";
		cout<<"\n 2. Display  record \n";
		cout<<"\n 3. Search a  record \n";
		cout<<"\n 4. Modify a  record \n";
		cout<<"\n 5. Delete a  record \n";
		cout<<"\n 6. Do you want to exit from stock menu \n";
		cout<<"\n Please enter your choice \n";
		cin>>c;
		if (c==1)
		{
			enter_sfile();
		}
		else if (c==2)
		{
			display_sfile();
		}
		else if (c==3)
		{
			search_s();
		}
		else if (c==4)
		{
			modify_s();
		}
		else if (c==5)
		{
			Delete_s();
		}
	}
	while (c!=6);
	cout<<endl;
	getche();
}
void enter_sfile()
{
	ofstream afile("stock1.dat",ios::binary|ios::app);
	s.sgetdata();
	afile.write((char*)&s,sizeof(s));
	afile.close();
	cout<<endl;
	getche();
}
void display_sfile()
{
	ifstream bfile("stock1.dat",ios::binary);
	while(bfile.read((char*)&s,sizeof(s)))
	{
		s.sputdata();
	}
	bfile.close();
	cout<<endl;
	getche();
}
void search_s()
{
	int p=-1,z;
	ifstream cfile("stock1.dat",ios::binary);
	cout<<"\n Please enter the stock code to be searched \n";
	cin>>z;
	while(cfile.read((char*)&s,sizeof(s)))
	{
		if(s.getscode()==z);
		{
			s.sputdata();
			p++;
		}
	}
	if (p==-1)
	cout<<"\n sorry! record not found \n";
	cout<<endl;
	cfile.close();
	getche();
}
void modify_s()
{
	int q=-1,a=0,t;
	cout<<"\n Please enter the stock code to be modified \n";
	cin>>t;
	fstream dfile("stock1.dat",ios::binary|ios::in|ios::out);
	while(dfile.read((char*)&s,sizeof(s)))
	{
		a++;
		if(s.getscode()==t)
		{
			s.sgetdata();
			dfile.seekp((a-1)*sizeof(s),ios::beg);
			dfile.write ((char*)&s,sizeof(s));
			q++;
		}
	}
	if(q==-1)
	cout<<"\n sorry! record not found \n";
	dfile.close();
	getche();
}
void Delete_s()
{
	int b;
	ifstream efile("stock1.dat",ios::binary);
	ofstream ffile("temp.dat",ios::binary);
	cout<<"\n Please enter the stock code of the record to be deleted \n";
	cin>>b;
	while (efile.read((char*)&s,sizeof(s)))
	{
		if(s.getscode()!=b)
		{
			ffile.write((char*)&s,sizeof(s));
		}
	}
	remove ("stock1.dat");
	rename("temp.dat","stock1.dat");
	efile.close();
	ffile.close();
	cout<<endl;
	getche();
}
void finance_resc()
{
	clrscr();
	textbackground(9);
	textcolor(7);
	void enter_filef();
	void display_filef();
	void searchf();
	void modifyf();
	void Deletef();
	int c;
	do
	{
		cout<<"\n \t************************* Finance Menu *************************\n";
		cout<<"\n 1. Add finance record \n";
		cout<<"\n 2. Display record \n";
		cout<<"\n 3. Search a record \n";
		cout<<"\n 4. Modify a record \n";
		cout<<"\n 5. Delete a record \n";
		cout<<"\n 6. Do you want to exit from finance menu \n";
		cout<<"\n Please enter your choice \n";
		cin>>c;
		if (c==1)
		{
			enter_filef();
		}
		else if (c==2)
		{
			display_filef();
		}
		else if (c==3)
		{
			searchf();
		}
		else if (c==4)
		{
			modifyf();
		}
		else if (c==5)
		{
			Deletef();
		}
	}
	while (c!=6);
	cout<<endl;
	getche();
}
void enter_filef()
{
	ofstream afile("finan.dat",ios::binary|ios::app);
	f.fgetdata();
	afile.write((char*)&f,sizeof(f));
	afile.close();
	cout<<endl;
	getche();
}
void display_filef()
{
	ifstream bfile("finan.dat",ios::binary);
	while(bfile.read((char*)&f,sizeof(f)))
	{
		f.fputdata();
	}
	bfile.close();
	cout<<endl;
	getche();
}
void searchf()
{
	int p=-1,z;
	ifstream cfile("finan.dat",ios::binary);
	cout<<"\n Please enter the finance code to be searched \n";
	cin>>z;
	while(cfile.read((char*)&f,sizeof(f)))
	{
		if(f.fgetcode()==z);
		{
			f.fputdata();
			p++;
		}
	}
	if (p==-1)
	cout<<"\n sorry! record not found \n";
	cout<<endl;
	cfile.close();
	getche();
}
void modifyf()
{
	int q=-1,a=0,t;
	cout<<"\n Please enter the finance code to be modified \n";
	cin>>t;
	fstream dfile("finan.dat",ios::binary|ios::in|ios::out);
	while(dfile.read((char*)&f,sizeof(f)))
	{
		a++;
		if(f.fgetcode()==t)
		{
			f.fgetdata();
			dfile.seekp((a-1)*sizeof(f),ios::beg);
			dfile.write ((char*)&f,sizeof(f));
			q++;
		}
	}
	if(q==-1)
	cout<<"\n sorry! record not found \n";
	dfile.close();
	getche();
}
void Deletef()
{
	int b;
	ifstream efile("finan.dat",ios::binary);
	ofstream ffile("temp.dat",ios::binary);
	cout<<"\n Please enter the finance code to be deleted \n";
	cin>>b;
	while (efile.read((char*)&f,sizeof(f)))
	{
		if(f.fgetcode()!=b)
		{
			ffile.write((char*)&f,sizeof(f));
		}
	}
	remove ("finan.dat");
	rename("temp.dat","finan.dat");
	efile.close();
	ffile.close();
	cout<<endl;
	getche();
}
void rate_resc()
{
	clrscr();
	textbackground(5);
	textcolor(0);
	void enter_rfile();
	void display_rfile();
	void search_r();
	void modify_r();
	void Delete_r();
	int c;
	do
	{
		cout<<"\n\t************************* Rate Menu ************************* \n";
		cout<<"\n 1. Add rate  record \n";
		cout<<"\n 2. Display  record \n";
		cout<<"\n 3. Search a record \n";
		cout<<"\n 4. Modify a record \n";
		cout<<"\n 5. Delete a record \n";
		cout<<"\n 6. Do you want to exit from rate menu \n";
		cout<<"\n Please enter your choice \n";
		cin>>c;
		if (c==1)
		{
			enter_rfile();
		}
		else if (c==2)
		{
			display_rfile();
		}
		else if (c==3)
		{
			search_r();
		}
		else if (c==4)
		{
			modify_r();
		}
		else if (c==5)
		{
			Delete_r();
		}
	}
	while (c!=6);
	cout<<endl;
	getche();
}
void enter_rfile()
{
	ofstream afile("rate1.dat",ios::binary|ios::app);
	r.rgetdata();
	afile.write((char*)&r,sizeof(r));
	afile.close();
	cout<<endl;
	getche();
}
void display_rfile()
{
	ifstream bfile("rate1.dat",ios::binary);
	while(bfile.read((char*)&r,sizeof(r)))
	{
		r.rputdata();
	}
	bfile.close();
	cout<<endl;
	getche();
}
void search_r()
{
	int p=-1,z;
	ifstream cfile("rate1.dat",ios::binary);
	cout<<"\n Please enter the rate code to be searched \n";
	cin>>z;
	while(cfile.read((char*)&r,sizeof(r)))
	{
		if(r.getrcode()==z);
		{
			r.rputdata();
			p++;
		}
	}
	if (p==-1)
	cout<<"\n sorry! record not found \n";
	cout<<endl;
	cfile.close();
	getche();
}
void modify_r()
{
	int q=-1,a=0,t;
	cout<<"\n Please enter the rate code to be modified \n";
	cin>>t;
	fstream dfile("rate1.dat",ios::binary|ios::in|ios::out);
	while(dfile.read((char*)&r,sizeof(r)))
	{
		a++;
		if(r.getrcode()==t)
		{
			r.rgetdata();
			dfile.seekp((a-1)*sizeof(r),ios::beg);
			dfile.write ((char*)&r,sizeof(r));
			q++;
		}
	}
	if(q==-1)
	cout<<"\n sorry! record not found \n";
	dfile.close();
	getche();
}
void Delete_r()
{
	int b;
	ifstream efile("rate1.dat",ios::binary);
	ofstream ffile("temp.dat",ios::binary);
	cout<<"\n Please enter the rate code of the record to be deleted \n";
	cin>>b;
	while (efile.read((char*)&r,sizeof(r)))
	{
		if(r.getrcode()!=b)
		{
			ffile.write((char*)&r,sizeof(r));
		}
	}
	remove ("rate1.dat");
	rename("temp.dat","rate1.dat");
	efile.close();
	ffile.close();
	cout<<endl;
	getche();
}
void main()
{
	clrscr();

		int ch;
		void grain_resc();
		void worker_resc();
		void input_resc();
		void stock_resc();
		void stock_resc();
		void finance_resc();
		void rate_resc();
		do
		{
			cout<<"\nMANAGEMENT OF RECORDS IN AGRICULTURAL INDUSTRY  \n \t\t\t\tWELCOME TO MENU\n\n";
			cout<<"\n\t ************************* Main Menu ************************\n";
			cout<<"\n 1. Grain record \n";
			cout<<"\n 2. Worker record \n";
			cout<<"\n 3. Input record \n";
			cout<<"\n 4. Stock record \n";
			cout<<"\n 5. Finance record \n";
			cout<<"\n 6. Rate record \n";
			cout<<"\n 7. Do you want to exit\n";
			cout<<"\n Please enter your choice \n";
			cin>>ch;
			if (ch==1)
			{
				grain_resc();
			}
			else if (ch==2)
			{
				worker_resc();
			}
			else if (ch==3)
			{
				input_resc();
			}
			else if (ch==4)
			{
				stock_resc();
			}
			else if (ch==5)
			{
				finance_resc();
			}
			else if(ch==6)
			{
				rate_resc();
			}
			else if (ch==7)
			{

				cout<<"\n \t\t Exiting from project \t\t \n"<<"\n \t\t   \t\t \n";
			}
		}
		while (ch!=7);
		cout<<endl;
		getche();


}












