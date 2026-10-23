#include<iostream>
#include<fstream>
using namespace std;
class bill
{
	private:
		int a[20]={220,180,140,160,240,120,250,100,110,180,40,40,20,90,98,80,90,60,95,70};
		int q[20][2];	
	public:
		bill()
		{
			cout<<"===================================================="<<endl;
			cout<<"                    WELCOME TO                      "<<endl;
			cout<<"                 THE HUNGRY SPOT                    "<<endl;
			cout<<"===================================================="<<endl;
			cout<<"----------------SELECT YOUR ROLE--------------------"<<endl;
		}
		~ bill()
		{
			cout<<"\n\n===================================================="<<endl;
			cout<<"\n                     VISIT AGAIN                    "<<endl;
			cout<<"                   HAVE A GREAT DAY                 "<<endl;
			cout<<"                   THE HUNGEY SPOT                  "<<endl;
			cout<<"\n===================================================="<<endl;
		}
		int order()
		{
			while(1)
			{
				string st;
                ifstream in;
                in.open("menu.txt");
    			while(!in.eof())
				{
        			getline(in,st);
        			cout<<st<<endl;
    			} 
    			in.close();	
				cout<<"\n1.ORDER\n2.BILLING"<<endl;
				int ch,i;
				cout<<"\nEnter your choice:";
				cin>>ch;
				switch(ch)
				{
					case 1:
						cout<<"\nEnter item number :";
						cin>>i;
						if(i>20 || i<1)
						{
							cout<<"Enter valid number:"<<endl;
							break;
						}
						q[i-1][0]=i;
						cout<<"Enter quantity :";
						cin>>q [i-1][1];
						break;
					case 2:
						billing();
						return 0;
					default:
						cout<<"Enter valid choice."<<endl;
						
				}
				
			}
		}
		int billing()
		{
			string d,pm;
			int ch5,di;
			while(1)
			{
				cout<<"\n1.CASH\n2.CARD\n3.ONLINE PAYMENT\n4.UPI\n5.CANCEL ORDER\n";
				cout<<"\nEnter your choice:";
				cin>>ch5;
				switch(ch5)
				{
					case 1:
						pm="CASH          ";
						ch5=0;
						break;
					case 2:
						pm="CARD          ";
						ch5=0;
						break;
					case 3:
						pm="ONLINE PAYMENT";
						ch5=0;
						break;
					case 4:
						pm="UPI           ";
						ch5=0;
						break;
					case 5:
						return 0;
					default:
						cout<<"Enter valid choice."<<endl;
				}
				if(ch5==0)
				{
					break;
				}
			}
			cout<<"Enter today's date(DD/MM/YYYY):";
			cin>>d;
			ofstream out;
			out.open("BILL.txt",ios::app);
			cout<<"\n::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
			cout<<"=================THE HUNGRY SPOT===================="<<endl;
			cout<<"---------------------BILL---------------------------"<<endl;
			cout<<"PAYMENT MODE : "<<pm<<"        "<<"DATE:"<<d<<endl;
			cout<<"\nSR.NO|ITEM NAME          |QUANTITY|MONEY|TOTAL MONEY"<<endl;
			out<<"\n---------------------BILL---------------------------"<<endl;
			out<<"PAYMENT MODE : "<<pm<<"        "<<"DATE:"<<d<<endl;
			out<<"\nSR.NO|ITEM NAME          |QUANTITY|MONEY|TOTAL MONEY"<<endl;
			int sum=0;
			float GST,dis=0;
			if(q[0][0]==1)
			{
				cout<<"1.    "<<"PANEER               -> "<<q[0][1]<<"     "<<a[0]<<"      "<<q[0][1]*a[0]<<endl;
				out<<"1.    "<<"PANEER               -> "<<q[0][1]<<"     "<<a[0]<<"      "<<q[0][1]*a[0]<<endl;
				sum=sum+(q[0][1]*a[0]);
			}	
			if(q[1][0]==2)
			{
				cout<<"2.    "<<"VEG BIRYANI          -> "<<q[1][1]<<"     "<<a[1]<<"      "<<q[1][1]*a[1]<<endl;
				out<<"2.    "<<"VEG BIRYANI          -> "<<q[1][1]<<"     "<<a[1]<<"      "<<q[1][1]*a[1]<<endl;
				sum=sum+(q[1][1]*a[1]);
			}
			if(q[2][0]==3)
			{
				cout<<"3.    "<<"DAL TADKA            -> "<<q[2][1]<<"     "<<a[2]<<"      "<<q[2][1]*a[2]<<endl;
				out<<"3.    "<<"DAL TADKA            -> "<<q[2][1]<<"     "<<a[2]<<"      "<<q[2][1]*a[2]<<endl;
				sum=sum+(q[2][1]*a[2]);
			}
		    if(q[3][0]==4)
			{
				cout<<"4.    "<<"MIX VEG              -> "<<q[3][1]<<"     "<<a[3]<<"      "<<q[3][1]*a[3]<<endl;
				out<<"4.    "<<"MIX VEG              -> "<<q[3][1]<<"     "<<a[3]<<"      "<<q[3][1]*a[3]<<endl;
				sum=sum+(q[3][1]*a[3]);
			}
			if(q[4][0]==5)
			{
				cout<<"5.    "<<"SHAHI PANEER         -> "<<q[4][1]<<"     "<<a[4]<<"      "<<q[4][1]*a[4]<<endl;
				out<<"5.    "<<"SHAHI PANEER         -> "<<q[4][1]<<"     "<<a[4]<<"      "<<q[4][1]*a[4]<<endl;
				sum=sum+(q[4][1]*a[4]);
			}
			if(q[5][0]==6)
			{
				cout<<"6.    "<<"VEG BURGER           -> "<<q[5][1]<<"     "<<a[5]<<"      "<<q[5][1]*a[5]<<endl;
				out<<"6.    "<<"VEG BURGER           -> "<<q[5][1]<<"     "<<a[5]<<"      "<<q[5][1]*a[5]<<endl;
				sum=sum+(q[5][1]*a[5]);
			}
			if(q[6][0]==7)
			{
				cout<<"7.    "<<"CHEESE PIZZA         -> "<<q[6][1]<<"     "<<a[6]<<"      "<<q[6][1]*a[6]<<endl;
				out<<"7.    "<<"CHEESE PIZZA         -> "<<q[6][1]<<"     "<<a[6]<<"      "<<q[6][1]*a[6]<<endl;
				sum=sum+(q[6][1]*a[6]);
			}
			if(q[7][0]==8)
			{
				cout<<"8.    "<<"FRENCH FRIES         -> "<<q[7][1]<<"     "<<a[7]<<"      "<<q[7][1]*a[7]<<endl;
				out<<"8.    "<<"FRENCH FRIES         -> "<<q[7][1]<<"     "<<a[7]<<"      "<<q[7][1]*a[7]<<endl;
				sum=sum+(q[7][1]*a[7]);
			}
			if(q[8][0]==9)
			{
				cout<<"9.    "<<"VEG SANDWICH         -> "<<q[8][1]<<"     "<<a[8]<<"      "<<q[8][1]*a[8]<<endl;
				out<<"9.    "<<"VEG SANDWICH         -> "<<q[8][1]<<"     "<<a[8]<<"      "<<q[8][1]*a[8]<<endl;
				sum=sum+(q[8][1]*a[8]);
			}
			if(q[9][0]==10)
			{
				cout<<"10.   "<<"WHITE SAUCE PASTA    -> "<<q[9][1]<<"     "<<a[9]<<"      "<<q[9][1]*a[9]<<endl;
				out<<"10.   "<<"WHITE SAUCE PASTA    -> "<<q[9][1]<<"     "<<a[9]<<"      "<<q[9][1]*a[9]<<endl;
				sum=sum+(q[9][1]*a[9]);
			}
			if(q[10][0]==11)
			{
				cout<<"11.   "<<"COCA-COLA            -> "<<q[10][1]<<"     "<<a[10]<<"       "<<q[10][1]*a[10]<<endl;
				out<<"11.   "<<"COCA-COLA            -> "<<q[10][1]<<"     "<<a[10]<<"       "<<q[10][1]*a[10]<<endl;
				sum=sum+(q[10][1]*a[10]);
			}
			if(q[11][0]==12)
			{
				cout<<"12.   "<<"SPRITE               -> "<<q[11][1]<<"     "<<a[11]<<"       "<<q[11][1]*a[11]<<endl;
				out<<"12.   "<<"SPRITE               -> "<<q[11][1]<<"     "<<a[11]<<"       "<<q[11][1]*a[11]<<endl;
				sum=sum+(q[11][1]*a[11]);
			}
			if(q[12][0]==13)
			{
				cout<<"13.   "<<"MINERAL WATER        -> "<<q[12][1]<<"     "<<a[12]<<"       "<<q[12][1]*a[12]<<endl;
				out<<"13.   "<<"MINERAL WATER        -> "<<q[12][1]<<"     "<<a[12]<<"       "<<q[12][1]*a[12]<<endl;
				sum=sum+(q[12][1]*a[12]);
			}
			if(q[13][0]==14)
			{
				cout<<"14.   "<<"COLD COFFEE          -> "<<q[13][1]<<"     "<<a[13]<<"       "<<q[13][1]*a[13]<<endl;
				out<<"14.   "<<"COLD COFFEE          -> "<<q[13][1]<<"     "<<a[13]<<"       "<<q[13][1]*a[13]<<endl;
				sum=sum+(q[13][1]*a[13]);
			}
			if(q[14][0]==15)
			{
				cout<<"15.   "<<"MANGO SHAKE          -> "<<q[14][1]<<"     "<<a[14]<<"       "<<q[14][1]*a[14]<<endl;
				out<<"15.   "<<"MANGO SHAKE          -> "<<q[14][1]<<"     "<<a[14]<<"       "<<q[14][1]*a[14]<<endl;
				sum=sum+(q[14][1]*a[14]);
			}
			if(q[15][0]==16)
			{
				cout<<"16.   "<<"ICE CREAM            -> "<<q[15][1]<<"     "<<a[15]<<"       "<<q[15][1]*a[15]<<endl;
				out<<"16.   "<<"ICE CREAM            -> "<<q[15][1]<<"     "<<a[15]<<"       "<<q[15][1]*a[15]<<endl;
				sum=sum+(q[15][1]*a[15]);
			}
			if(q[16][0]==17)
			{
				cout<<"17.   "<<"CHOCOLATE BROWNIE    -> "<<q[16][1]<<"     "<<a[16]<<"       "<<q[16][1]*a[16]<<endl;
				out<<"17.   "<<"CHOCOLATE BROWNIE    -> "<<q[16][1]<<"     "<<a[16]<<"       "<<q[16][1]*a[16]<<endl;
				sum=sum+(q[16][1]*a[16]);
			}
			if(q[17][0]==18)
			{
				cout<<"18.   "<<"GULAB JAMUN(2 PCS)   -> "<<q[17][1]<<"     "<<a[17]<<"       "<<q[17][1]*a[17]<<endl;
				out<<"18.   "<<"GULAB JAMUN(2 PCS)   -> "<<q[17][1]<<"     "<<a[17]<<"       "<<q[17][1]*a[17]<<endl;
				sum=sum+(q[17][1]*a[17]);
			}
			if(q[18][0]==19)
			{
				cout<<"19.   "<<"RASMALAI             -> "<<q[18][1]<<"     "<<a[18]<<"       "<<q[18][1]*a[18]<<endl;
				out<<"19.   "<<"RASMALAI             -> "<<q[18][1]<<"     "<<a[18]<<"       "<<q[18][1]*a[18]<<endl;
				sum=sum+(q[18][1]*a[18]);
			}
			if(q[19][0]==20)
			{
				cout<<"20.   "<<"FRUIT CUSTARD        -> "<<q[19][1]<<"     "<<a[19]<<"       "<<q[19][1]*a[19]<<endl;
				out<<"20.   "<<"FRUIT CUSTARD        -> "<<q[19][1]<<"     "<<a[19]<<"       "<<q[19][1]*a[19]<<endl;
				sum=sum+(q[19][1]*a[19]);
				cout<<"        ____________________________________________"<<endl;
				out<<"        ____________________________________________"<<endl;
			}
			else
			{
				cout<<"        ____________________________________________"<<endl;
				out<<"        ____________________________________________"<<endl;
			}
			

			GST=sum*(float)5/100;
			if(sum>=1000)
			{
				dis=sum*(float)15/100;
				di=15;
			}
			else if(sum>=800)
			{
				dis=sum*(float)10/100;
				di=10;
			}
			else if(sum>=500)
			{
				dis=sum*(float)5/100;
				di=5;
			}
			cout<<"                             ACTUAL AMOUNT -> "<<sum<<endl;
			cout<<"                             DISCOUNT("<<di<<"%) -> "<<dis<<endl;
			cout<<"                                   GST(5%) -> "<<GST<<endl;
			cout<<"         TOTAL AMOUNT(WITH GST & DISCOUNT) -> "<<sum+GST-dis<<endl;
			cout<<"\n===================================================="<<endl;
			out<<"                             ACTUAL AMOUNT -> "<<sum<<endl;
			out<<"                             DISCOUNT("<<di<<"%) -> "<<dis<<endl;
			out<<"                                   GST(5%) -> "<<GST<<endl;
			out<<"         TOTAL AMOUNT(WITH GST & DISCOUNT) -> "<<sum+GST-dis<<endl;
			out<<"\n===================================================="<<endl;
			cout<<"\n______________THANK YOU FOR VISITING________________"<<endl;
			cout<<"__________________THE HUNGRY SPOT___________________"<<endl;
			cout<<"\n===================================================="<<endl;
			out.close();
			return 0;
		}
		int prize()
		{
			int i;
			int p;
			while(1)
			{
				cout<<"\nEnter code of item:";
				cin>>i;
				if(i<1 || i>20)
				{
					cout<<"Enter valid code of item.  "<<endl;
					return 0;
				}
				else{
					break;
				}	
			}
			while(1)
			{
				cout<<"Enter new price of item:";
			    cin>>p;
				if(p<=0)
				{
					cout<<"Enter valid price."<<endl;
					return 0;
				}
				else
				{
					break;	
				}		
			}
			a[i-1]=p;
			cout<<"Price is updated."<<endl;
			return 0;	
		}
};
bill b;
int updatemenu()
{
	int ch;
	
	string p1,p2;
	ifstream i;
	i.open("PASSWORD.txt");
	getline(i,p1);
	i.close();
	
	cout<<"\n1.ENTER PASSWORD\n2.EXIT\n";
	cout<<"\nEnter your choice:";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			cout<<"\nENTER PASSWORD:";
			cin>>p2;
			break;
		case 2:
			return 0;
		default:
			cout<<"Invalid choice."<<endl;
			return 0;		
	}
	
	if(p1==p2)
	{
		while(1)
		{
			string st,st1;
			cout<<"\n1.VIEW ALL BILL\n2.UPDATE PASSWORD\n3.UPDATE PRICE OF FOOD\n4.EXIT"<<endl;
			cout<<"\nEnter your choice:";
			cin>>ch;
			switch(ch)
			{
				case 1:
				{
					ifstream in;
					in.open("BILL.txt");
					while(!in.eof())
					{
						getline(in,st1);
						cout<<st1<<endl;
					}
					in.close();
					break;
				}
				case 2:
				{
					string p3,p4;
					int ch,e;
					
					ifstream J;
					J.open("PASSWORD.txt");
					getline(J,p3);
					J.close();
					
					cout<<"\n1.UPDATE PASSWORD.\n2.EXIT\n";
					cout<<"\nEnter your choice:";
					cin>>ch;
					
					switch(ch)
					{
						case 1:
							cout<<"Enter Password:";
							cin>>p4;
							break;
						case 2:
							e=1;
							break;
						default:
							cout<<"Invalid choice."<<endl;
							e=1;
					}
					if(p3==p4)
					{
						ofstream o;
						o.open("PASSWORD.txt");
						cout<<"\nEnter new PASSWORD:";
						cin>>p3;
						o<<p3;
						o.close();
						cout<<"\n PASSWORD is updated."<<endl;
					}
					else if(e==1)
					{
						e=0;
						break;
					}
					else
					{
						cout<<"Enter valid PASSWORD."<<endl;
					}
					break;
				}
				case 3:
					b.prize();
					break;
				case 4:
					return 0;
				default:
					cout<<"Enter valid choise:"<<endl;	 	
			}
		}
	}
	else
	{
		cout<<"**Enter valid PASSWORD.**"<<endl;
	}
	return 0;
}
int main()
{
	int ch;
	while(1)
	{
		cout<<"\n1.CUSTOMER \n2.OWNER\n3.EXIT\n"<<endl;
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				b.order();
				break;
			case 2:
				updatemenu();
				break;
			case 3:
				return 0;
			default:
				cout<<"Enter valid choice."<<endl;	
		}
		
	}
}
