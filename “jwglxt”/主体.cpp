#include<iostream>
#include<fstream>
#include<string.h>
#include <string>
#include <iomanip>
using namespace std;
class student
{
public:
	string stu_name;
	int stu_num;
	string stu_sex;
	string stu_birthday;
	string stu_mingzu;
	string stu_dizhi;
	string stu_class;
    string stu_phone;	
};
struct user
	{
		int account;
		string password;
		int type;	
	};
struct score
{

	int xuehao;
//	string nm;
	int keshu;
	string kemu[50];
	float xuefen[50];
	float defen[50];
	float jd[50];
	float zjd;
	
};
struct kecheng
{
	int xuehao;
	string kemu;
	string didian;
	string zhoushu;
};
void zengjia(int haoma)/*�ֶ�����ѧ����Ϣ�ĺ���*/
{
	void zhucaidan2(int haoma);
	char xuanze2;//�� switch ѡ��ı���
	student stu;
	student stud[50];
	int sign=0;
	int i;
	int zongshu1;
	system("cls");
	cout << "---------------------------������Ϣ---------------------------" << endl;
	cout<<"������ѧ��������";//�ֶ��������ѧ����Ϣ
    cin>>stu.stu_name;
	cout<<"������ѧ��ѧ�ţ�";
	cin>>stu.stu_num;
	cout<<"������ѧ���Ա�";
	cin>>stu.stu_sex; 
	cout<<"������ѧ���������ڣ�";
    cin>>stu.stu_birthday;
    cout<<"������ѧ�����壺";
	cin>>stu.stu_mingzu;
	cout<<"������ѧ���ļ��᣺";
    cin>>stu.stu_dizhi;
	cout<<"������ѧ�������ڰ༶��";
    cin>>stu.stu_class;
	cout<<"������ѧ������ϵ��ʽ��";
    cin>>stu.stu_phone;
    cout<<"������ɣ���ȷ�������������Ϣ��"<<endl;
	cout<<"����	ѧ��		�Ա�	��������  ����	����	 �༶	  ��ϵ��ʽ"<<endl;
		cout<<stu.stu_name<<"	";
		cout<<stu.stu_num<<"	";
		cout<<stu.stu_sex<<"	";
		cout<<stu.stu_birthday<<"  ";
		cout<<stu.stu_mingzu<<"	";
		cout<<stu.stu_dizhi<<" ";
		cout<<stu.stu_class<<"  ";
		cout<<stu.stu_phone<<" ";
	cout<<endl;
	{ifstream infile("student1.txt",ios::in);//���������ļ�����"student.txt"
	if(!infile)
	{
	sign=3;
	}
           
	for(i=0;i<50;i++)
		{
			infile>>stud[i].stu_name;
            infile>>stud[i].stu_num;
            infile>>stud[i].stu_sex;
			infile>>stud[i].stu_birthday;
            infile>>stud[i].stu_mingzu;
            infile>>stud[i].stu_dizhi;
			infile>>stud[i].stu_class;
            infile>>stud[i].stu_phone;
			if(stud[i].stu_num<0)
			{
				zongshu1=i-1;
			break;
			}
		}
	infile.close();}
	for(i=0;i<=zongshu1;i++)
				{   
					if (stud[i].stu_num==stu.stu_num)
					{
					sign=4;
					break;
					}
				}
	if(sign==4)
	{
		
		cout<<"�������ѧ����Ϣ��������Ϣ�ظ���������"<<endl;
		system("pause");
		zengjia(haoma);
	}
	else
	{
	cout << "--------------------------------------------------------------" << endl;
	cout<<"����ȷ��������Ϣ���������롰1�����棻����Ϣ����������뱣�棬�����������1���������ַ��������˵�"<<endl;
	cout << "--------------------------------------------------------------" << endl;
	cout<<"����ѡ�";
	cin>>xuanze2;
	switch(xuanze2)
	{
	case'1':
		{
		ofstream outfile("student1.txt",ios::app);//��������ļ�����"student.txt"
		if(!outfile)
		{
			cout<<"��Ǹ������ʧ�ܣ�"<<endl;//�޷��򿪻������ļ�ʱ��ʾ����ʧ��
				break;
		}
		 else
		 {
			outfile<<endl;
			outfile<<stu.stu_name<<"	";//�����ļ����������ļ�ĩβ�����µ���Ϣ
            outfile<<stu.stu_num<<"	";
            outfile<<stu.stu_sex<<"		";
			outfile<<stu.stu_birthday<<"	";
            outfile<<stu.stu_mingzu<<"	";
            outfile<<stu.stu_dizhi<<"	";
			outfile<<stu.stu_class<<"	";
            outfile<<stu.stu_phone<<"	";
			cout<<"�ѽ����������Ϣ���浽Ӳ���ϡ�"<<endl;
			system("pause");
			outfile.close();//�ر��ļ�
			}
			{ofstream outfile("password1.txt",ios::app);//��������ļ�����"password1.txt"
		 if(!outfile)
			{
			cout<<"��Ǹ���޷��������˻���"<<endl;//�޷��򿪻������ļ�ʱ��ʾ����ʧ��
				break;
			}
			{
			outfile<<endl;
			 outfile<<stu.stu_num<<"	";
			 outfile<<1<<"	";
			 outfile<<1<<"	";
			 
			}
			outfile.close();}//�ر��ļ�
		 cout<<"�����ɶ�Ӧ�����˻�"<<endl;
		 system("pause");
		

		 
			}break;
	default:
		{cout<<"�������Ϣδ�����棬�����������˵���"<<endl;
		system("pause");
	
	}break;}
	}
	cout<<"��ѡ����Ҫ���еĲ�����"<<endl;
	cout<<"1.�������� ��������������������˵�"<<endl;
	cout<<"����ѡ��"<<endl;
	cin>>xuanze2;
	if(xuanze2=='1')
		zengjia(haoma);
	else
		zhucaidan2(haoma);

}
void chaxun1(int haoma)
{
void zhucaidan1(int haoma);
char xuanze1;//�� switch ѡ��ı���
int sign=1;
int zongshu1;
int i;
int weizhi;
int sum=0;
string banji;
system("cls");
	ifstream infile("student1.txt",ios::in);//���������ļ�����"student.txt"
	if(!infile)
	{
	sign=3;
	}
    student stu[50];       
	for(i=0;i<50;i++)
		{
			infile>>stu[i].stu_name;
            infile>>stu[i].stu_num;
            infile>>stu[i].stu_sex;
			infile>>stu[i].stu_birthday;
            infile>>stu[i].stu_mingzu;
            infile>>stu[i].stu_dizhi;
			infile>>stu[i].stu_class;
            infile>>stu[i].stu_phone;
			if(stu[i].stu_num<0)
			{
				zongshu1=i-1;
			break;
			}
		}
	for(i=0;i<=zongshu1;i++)
				{   
					if (stu[i].stu_num==haoma)
					{
					weizhi=i;
					sign=0;
					break;
					}
				}
	cout << "---------------------------��ѯ��Ϣ---------------------------" << endl;
	if(sign==3)
		{
		cout<<"����ѧ����Ϣ���ļ������ڣ������޷���ѯ������ϵ����Ա��"<<endl;
		cout<<"���ڷ������˵�"<<endl;
		zhucaidan1(haoma);
		}
	else if (sign==1)
					{
						cout<<"��Ǹ��û���ҵ�������Ϣ���������Ա��ӳ��"<<endl;//�鲻��ʱ������
						 system("pause");
						 zhucaidan1(haoma);
					}
	else
			{
			cout<<"��ѡ���ѯ��ʽ"<<endl;
			cout<<"1.��ѯ�Լ�����Ϣ"<< endl;
			cout<<"2.��ѯ�Լ���ͬ��ͬѧ"<< endl;
			cout<<"3.������һ���˵�"<<endl;
			cout << "--------------------------------------------------------------" << endl;
			cout<<"����ѡ�";
			cin>>xuanze1;
			cout << "--------------------------------------------------------------" << endl;
			switch(xuanze1)
			{
			case '1':
			{
					cout << "---------------------------��ѯ���---------------------------" << endl;
					cout<<"����	ѧ��		�Ա�	��������  ����	����	 �༶	  ��ϵ��ʽ"<<endl;
					cout<<stu[weizhi].stu_name<<"	";//�����ѯ���
					cout<<stu[weizhi].stu_num<<"	";
					cout<<stu[weizhi].stu_sex<<"	";
					cout<<stu[weizhi].stu_birthday<<"  ";
					cout<<stu[weizhi].stu_mingzu<<"	";
					cout<<stu[weizhi].stu_dizhi<<" ";
					cout<<stu[weizhi].stu_class<<"  ";
					cout<<stu[weizhi].stu_phone<<" ";
					cout<<endl;
					sign=0;
					system("pause");
					
					}break;
			case '2':
				{
					cout << "---------------------------��ѯ���---------------------------" << endl;
					cout<<"����	ѧ��		�Ա�	��������  ����	����	 �༶	  ��ϵ��ʽ"<<endl;
					for(i=0;i<=zongshu1;i++)
					{   
					if (stu[i].stu_class==stu[weizhi].stu_class)
					{
					sum=sum+1;
					cout<<stu[i].stu_name<<"	";//�����ѯ���
					cout<<stu[i].stu_num<<"	";
					cout<<stu[i].stu_sex<<"	";
					cout<<stu[i].stu_birthday<<"  ";
					cout<<stu[i].stu_mingzu<<"	";
					cout<<stu[i].stu_dizhi<<" ";
					cout<<stu[i].stu_class<<"  ";
					cout<<stu[i].stu_phone<<" ";
					cout<<endl;
					sign=0;
					}
					
				}cout<<"������ͬ��ͬѧ"<<sum<<"��"<<endl;
					if(sign==1)
					{
						cout<<"δ�鵽�����ڵİ༶��"<<endl;//�鲻��ʱ������
						 system("pause");
						 zhucaidan1(haoma);
					}
					
					system("pause");
					
				}break;
			}

	}
	cout<<"��ѡ����Ҫ���еĲ�����"<<endl;
	cout<<"1.������ѯ ��������������������˵�"<<endl;
	cout<<"����ѡ��"<<endl;
	cin>>xuanze1;
	if(xuanze1=='1')
		chaxun1(haoma);
	else
		zhucaidan1(haoma);
}
void chaxun2(int haoma)/*���ļ��Զ���ȡ���ɲ�ѯѧ����Ϣ�ĺ���*/
{   
void zhucaidan2(int haoma);
char xuanze1;//�� switch ѡ��ı���
string name;//�洢��������ڲ�ѯ������
int num;//�洢��������ڲ�ѯ��ѧ��
int sign=1;//�����ж�ִ������ı���
string sex;
string banji;
int i;
int zongshu1;
int sum=0;
system("cls");
	ifstream infile("student1.txt",ios::in);//���������ļ�����"student.txt"
	if(!infile)
	{
	sign=3;
	}
    student stu[50];       
	for(i=0;i<50;i++)
			{
			infile>>stu[i].stu_name;
            infile>>stu[i].stu_num;
            infile>>stu[i].stu_sex;
			infile>>stu[i].stu_birthday;
            infile>>stu[i].stu_mingzu;
            infile>>stu[i].stu_dizhi;
			infile>>stu[i].stu_class;
            infile>>stu[i].stu_phone;
			if(stu[i].stu_num<0)
			{zongshu1=i-1;
			break;}
			}
	cout << "---------------------------��ѯ��Ϣ---------------------------" << endl;
	if(sign==3)
	{
		cout<<"����ѧ����Ϣ���ļ������ڣ������޷���ѯ������������Ϣ���ٲ�ѯ��"<<endl;
		cout<<"���ڷ������˵�"<<endl;

	}
	else
	{
			cout<<"                       ��ѡ���ѯ��ʽ"<<endl<<endl;
			cout<<"                         1.��������ѯ"<< endl<<endl;
			cout<<"                         2.��ѧ�Ų�ѯ"<< endl<<endl;
			cout<<"                         3.���༶��ѯ"<< endl<<endl;
			cout<<"                         4.���Ա��ѯ"<< endl<<endl;
			cout<<"                         5.������һ���˵�"<<endl<<endl;
			cout << "--------------------------------------------------------------" << endl;
			cout<<"����ѡ�";
			cin>>xuanze1;
			cout << "--------------------------------------------------------------" << endl;
			switch(xuanze1)
			{
			case '1':
			{	
				cout<<"������ѧ������"<<endl;
				cin>>name;
				for(i=0;i<=zongshu1;i++)
				{ 
					if (stu[i].stu_name==name)
					{
				    cout << "---------------------------��ѯ���---------------------------" << endl;
					cout<<"����	ѧ��		�Ա�	��������  ����	����	 �༶	  ��ϵ��ʽ"<<endl;
					cout<<stu[i].stu_name<<"	";//�����ѯ���
					cout<<stu[i].stu_num<<"	";
					cout<<stu[i].stu_sex<<"	";
					cout<<stu[i].stu_birthday<<"  ";
					cout<<stu[i].stu_mingzu<<"	";
					cout<<stu[i].stu_dizhi<<" ";
					cout<<stu[i].stu_class<<"  ";
					cout<<stu[i].stu_phone<<" ";
					cout<<endl;
					sign=0;
					}
				}
					if(sign==1)
					{
						cout<<"���޴���,���ڷ������˵���"<<endl;//�鲻��ʱ������
						 system("pause");
						 
					}
			}break;


			case '2':
				{cout<<"������ѧ��ѧ��"<<endl;
				cin>>num;
				for(i=0;i<=zongshu1;i++)
				{   
					if (stu[i].stu_num==num)
					{
					cout << "---------------------------��ѯ���---------------------------" << endl;
					cout<<"����	ѧ��		�Ա�	��������  ����	����	 �༶	  ��ϵ��ʽ"<<endl;
					cout<<stu[i].stu_name<<"	";//�����ѯ���
					cout<<stu[i].stu_num<<"	";
					cout<<stu[i].stu_sex<<"	";
					cout<<stu[i].stu_birthday<<"  ";
					cout<<stu[i].stu_mingzu<<"	";
					cout<<stu[i].stu_dizhi<<" ";
					cout<<stu[i].stu_class<<"  ";
					cout<<stu[i].stu_phone<<" ";
					cout<<endl;
					sign=0;
					}
				}
					if(sign==1)
					{
						cout<<"���޴��ˣ�"<<endl;//�鲻��ʱ������
						 system("pause");
						 
					}break;
				}break;
			case '3':
				{
					cout<<"������Ҫ���ҵİ༶"<<endl;
					cin>>banji;
					cout << "---------------------------��ѯ���---------------------------" << endl;
					cout<<"����	ѧ��		�Ա�	��������  ����	����	 �༶	  ��ϵ��ʽ"<<endl;
						for(i=0;i<=zongshu1;i++)
				{   
					if (stu[i].stu_class==banji)
					{
					sum=sum+1;
					cout<<stu[i].stu_name<<"	";//�����ѯ���
					cout<<stu[i].stu_num<<"	";
					cout<<stu[i].stu_sex<<"	";
					cout<<stu[i].stu_birthday<<"  ";
					cout<<stu[i].stu_mingzu<<"	";
					cout<<stu[i].stu_dizhi<<" ";
					cout<<stu[i].stu_class<<"  ";
					cout<<stu[i].stu_phone<<" ";
					cout<<endl;
					sign=0;
					}
				}cout<<"���иð༶ѧ��"<<sum<<"��"<<endl;
					if(sign==1)
					{
						cout<<"û�иð༶��ѧ���������������"<<endl;//�鲻��ʱ������
						 system("pause");
						 
					}break;
				cout<<"���иð༶ѧ��"<<sum<<"��"<<endl;}break;
			case '4':
				{
					cout<<"��������Ҫ��ѯ���Ա�"<<endl;
					cin>>sex;
					cout << "---------------------------��ѯ���---------------------------" << endl;
					cout<<"����	ѧ��		�Ա�	��������  ����	����	 �༶	  ��ϵ��ʽ"<<endl;
						for(i=0;i<=zongshu1;i++)
				{   
					if (stu[i].stu_sex==sex)
					{
						sum=sum+1;
					cout<<stu[i].stu_name<<"	";//�����ѯ���
					cout<<stu[i].stu_num<<"	";
					cout<<stu[i].stu_sex<<"	";
					cout<<stu[i].stu_birthday<<"  ";
					cout<<stu[i].stu_mingzu<<"	";
					cout<<stu[i].stu_dizhi<<" ";
					cout<<stu[i].stu_class<<"  ";
					cout<<stu[i].stu_phone<<" ";
					cout<<endl;
					sign=0;
					}
				}cout<<"���и��Ա�ѧ��"<<sum<<"��"<<endl;
					if(sign==1)
					{
						cout<<"û�и��Ա��ѧ���������������"<<endl;//�鲻��ʱ������
						 system("pause");
						
					}break;
				}break;


			case '5':
				{zhucaidan2(haoma);}break;
			default:
				{
					cout<<"���������������ڷ������˵���"<<endl;
				zhucaidan2(haoma);
				}
				break;

	}
	}
infile.close();
cout << "--------------------------------------------------------------" << endl;
	cout<<"                     ��ѡ����Ҫ���еĲ�����"<<endl<<endl;
	cout<<"                           1.������ѯ "<<endl<<endl;
		cout<<"                     ��������������������˵�"<<endl<<endl;
	cout<<"����ѡ��"<<endl;
	cin>>xuanze1;
	if(xuanze1=='1')
		chaxun2(haoma);
	else
		zhucaidan2(haoma);
}
void xiugai1(int haoma)//�޸ĺ���,�����˲�ѯ������һ����
{
void zhucaidan2(int haoma);
char xuanze3;//�� switch ѡ��ı���
string name;//�洢��������ڲ�ѯ������
int num;//�洢��������ڲ�ѯ��ѧ��
int sign=1;//�����ж�ִ������ı���
int beixiugai;
int i;
int zongshu3;
student xiugai;
system("cls");
	ifstream infile("student1.txt",ios::in);//���������ļ�����"student.txt"
	if(!infile)
	{
	sign=3;
	}
    student stu[50];       
	for(i=0;i<50;i++)
			{
			infile>>stu[i].stu_name;
            infile>>stu[i].stu_num;
            infile>>stu[i].stu_sex;
			infile>>stu[i].stu_birthday;
            infile>>stu[i].stu_mingzu;
            infile>>stu[i].stu_dizhi;
			infile>>stu[i].stu_class;
            infile>>stu[i].stu_phone;
			if(stu[i].stu_num<0)
			{zongshu3=i-1;
			break;}
			}
	infile.close();
	cout << "---------------------------�����Ϣ---------------------------" << endl;
	if(sign==3)
	{
		cout<<"����ѧ����Ϣ���ļ������ڣ������޷���ԣ�����������Ϣ���ٲ�ѯ��"<<endl;
		cout<<"���ڷ������˵�"<<endl;

	}
	else
	{
			cout<<"                  ��ѡ���Է�ʽ"<<endl;
			cout<<"                    1.���������" <<endl<<endl;
			cout<<"                    2.��ѧ�Ų��"<<endl<<endl; 
			cout<<"                    3.�˳�"<<endl<<endl;
			cout << "--------------------------------------------------------------" << endl;
			cout<<"����ѡ�";
			cin>>xuanze3;
			cout << "--------------------------------------------------------------" << endl;
			switch(xuanze3)
			{
			case '1':
			{	
				/*cout<<"��Ǹ���ù����ݻ����š�"<<endl;
				system("pause");
				zhucaidan2g();
			}break;*/
				cout<<"������ѧ������"<<endl;
				cin>>name;
				for(i=0;i<=zongshu3;i++)
				{ 
					if (stu[i].stu_name==name)
					{
					beixiugai=i;
				    cout << "---------------------------��Խ��---------------------------" << endl;
					cout<<"����	ѧ��		�Ա�	��������  ����	����	 �༶	  ��ϵ��ʽ"<<endl;
					cout<<stu[i].stu_name<<"	";//�����ѯ���
					cout<<stu[i].stu_num<<"	";
					cout<<stu[i].stu_sex<<"	";
					cout<<stu[i].stu_birthday<<"  ";
					cout<<stu[i].stu_mingzu<<"	";
					cout<<stu[i].stu_dizhi<<" ";
					cout<<stu[i].stu_class<<"  ";
					cout<<stu[i].stu_phone<<" ";
					cout<<endl;
					sign=0;
					}
				}
					if(sign==1)
					{
						cout<<"���޴���,���ڷ������˵���"<<endl;//�鲻��ʱ������
						 system("pause");
						 zhucaidan2(haoma);
					}}break;


			case '2':
				{cout<<"������ѧ��ѧ��"<<endl;
				cin>>num;
				for(i=0;i<=zongshu3;i++)
				{   
					if (stu[i].stu_num==num)
					{
					beixiugai=i;
					cout << "---------------------------��Խ��---------------------------" << endl;
					cout<<"����	ѧ��		�Ա�	��������  ����	����	 �༶	  ��ϵ��ʽ"<<endl;
					cout<<stu[i].stu_name<<"	";//�����ѯ���
					cout<<stu[i].stu_num<<"	";
					cout<<stu[i].stu_sex<<"	";
					cout<<stu[i].stu_birthday<<"  ";
					cout<<stu[i].stu_mingzu<<"	";
					cout<<stu[i].stu_dizhi<<" ";
					cout<<stu[i].stu_class<<"  ";
					cout<<stu[i].stu_phone<<" ";
					cout<<endl;
					sign=0;
					}
				}
					if(sign==1)
					{
						cout<<"���޴���,���ڷ������˵���"<<endl;//�鲻��ʱ������
						 system("pause");
						 zhucaidan2(haoma);
					}break;
				}break;

			case '3':
				{zhucaidan2(haoma);}break;
			default:
				{
				cout<<"���������������ڷ������˵���"<<endl;
				zhucaidan2(haoma);
				}break;

	}
	}
//��Բ������
	if(xuanze3=='1'||xuanze3=='2')
	{
	cout << "---------------------------�޸���Ϣ---------------------------" << endl;
	cout<<"��ѡ���޸ķ�ʽ"<<endl<<"1.�����޸�"<<endl<<"�������������.ȫ���޸�"<<endl;
	cin>>xuanze3;
	if(xuanze3=='2')
	{cout<<"������ѧ������"<<endl;//�ֶ��������ѧ����Ϣ
    cin>>xiugai.stu_name;
	cout<<"������ѧ��ѧ��"<<endl;
	cin>>xiugai.stu_num;
	cout<<"������ѧ���Ա�"<<endl;
	cin>> xiugai.stu_sex; 
	cout<<"������ѧ����������"<<endl;
    cin>> xiugai.stu_birthday;
    cout<<"������ѧ������"<<endl;
	cin>> xiugai.stu_mingzu;
	cout<<"������ѧ���ļ���"<<endl;
    cin>> xiugai.stu_dizhi;
	cout<<"������ѧ�������ڰ༶"<<endl;
    cin>> xiugai.stu_class;
	cout<<"������ѧ������ϵ��ʽ"<<endl;
    cin>> xiugai.stu_phone;
		stu[beixiugai].stu_name=xiugai.stu_name;
		stu[beixiugai].stu_num=xiugai.stu_num;
		 stu[beixiugai].stu_sex=xiugai.stu_sex;
		 stu[beixiugai].stu_birthday=xiugai.stu_birthday;
		 stu[beixiugai].stu_mingzu=xiugai.stu_mingzu;
		 stu[beixiugai].stu_dizhi=xiugai.stu_dizhi;
		 stu[beixiugai].stu_class=xiugai.stu_class;
		 stu[beixiugai].stu_phone=xiugai.stu_phone;}
	else
	{
		cout<<"��Ҫ�޸�"<<endl;
		cout<<"1.���� 2.�Ա� 3.�������� 4.���� 5.���� 6.�༶ 7.��ϵ��ʽ"<<endl;
		cin>>xuanze3;
		if(xuanze3=='1')
		{
			cout<<"������ѧ������"<<endl;//�ֶ��������ѧ����Ϣ
			cin>>xiugai.stu_name;
			stu[beixiugai].stu_name=xiugai.stu_name;
		}
		if(xuanze3=='2')
		{
			cout<<"������ѧ���Ա�"<<endl;
			cin>> xiugai.stu_sex; 
			stu[beixiugai].stu_sex=xiugai.stu_sex;
		}
		if(xuanze3=='3')
		{
			cout<<"������ѧ����������"<<endl;
			cin>> xiugai.stu_birthday;
			stu[beixiugai].stu_birthday=xiugai.stu_birthday;
		}
		if(xuanze3=='4')
		{
			cout<<"������ѧ������"<<endl;
			cin>> xiugai.stu_mingzu;
			stu[beixiugai].stu_mingzu=xiugai.stu_mingzu;
		}
		if(xuanze3=='5')
		{
			cout<<"������ѧ���ļ���"<<endl;
			cin>> xiugai.stu_dizhi;
			stu[beixiugai].stu_dizhi=xiugai.stu_dizhi;
		}
			if(xuanze3=='6')
		{
			cout<<"������ѧ�������ڰ༶"<<endl;
			cin>> xiugai.stu_class;
			stu[beixiugai].stu_class=xiugai.stu_class;
		}
				if(xuanze3=='7')
		{
			cout<<"������ѧ������ϵ��ʽ"<<endl;
			cin>> xiugai.stu_phone;
			stu[beixiugai].stu_phone=xiugai.stu_phone;
		}
				else
					cout<<"����ѡ������"<<endl;
	}
	cout<<"������ɣ���ȷ�������������Ϣ��"<<endl;
	cout << "--------------------------------------------------------------" << endl;
	cout<<"����	ѧ��		�Ա�	��������  ����	����	 �༶	  ��ϵ��ʽ"<<endl;
		cout<< stu[beixiugai].stu_name<<"	";
		cout<< stu[beixiugai].stu_num<<"	";
		cout<< stu[beixiugai].stu_sex<<"	";
		cout<< stu[beixiugai].stu_birthday<<"  ";
		cout<< stu[beixiugai].stu_mingzu<<"	";
		cout<< stu[beixiugai].stu_dizhi<<" ";
		cout<< stu[beixiugai].stu_class<<"  ";
		cout<< stu[beixiugai].stu_phone<<" ";
	cout<<endl;
	cout<<"����ȷ��������Ϣ���������롰1�����棻����Ϣ����������뱣�棬�����������1���������ַ��������˵�"<<endl;
	cout << "--------------------------------------------------------------" << endl;
	cout<<"����ѡ�";
	cin>>xuanze3;
	switch(xuanze3)
	{
	case'1':{
		
		 
		 {
			 ofstream outfile("student1.txt",ios::trunc);
		 outfile.close();
		 }
		ofstream outfile("student1.txt",ios::app);//��������ļ�����"student.txt"
	
		 
			 for(i=0;i<=zongshu3;i++)//
			 {
			
			outfile<<stu[i].stu_name<<"	";//�����ļ����������ļ�ĩβ�����µ���Ϣ
            outfile<<stu[i].stu_num<<"	";
            outfile<<stu[i].stu_sex<<"		";
			outfile<<stu[i].stu_birthday<<"	";
            outfile<<stu[i].stu_mingzu<<"	";
            outfile<<stu[i].stu_dizhi<<"	";
			outfile<<stu[i].stu_class<<"	";
            outfile<<stu[i].stu_phone<<"	";
			outfile<<endl;
			 }//
			cout<<"�ѽ����������Ϣ���浽Ӳ���ϡ�"<<endl;
			outfile.close();//�ر��ļ�
			system("pause");
	//	 }
		 
			}break;
	default:
		{cout<<"�������Ϣδ�����棬�����������˵���"<<endl;
		system("pause");
		}break;
		}
	}
	cout << "--------------------------------------------------------------" << endl;
	cout<<"         ��������Ҫ��"<<endl<<endl;
	cout<<"                   1.�ص���һ���˵�"<<endl<<endl; 
	cout<<"                   �������������.�ص����˵�"<<endl<<endl;
	cout<<"����ѡ��";
	cin>>xuanze3;
	if(xuanze3=='1')
		xiugai1(haoma);
	else
		zhucaidan2(haoma);
}
void shanchu(int haoma)//����ɾ����Ϣ�ĺ���
{
void zhucaidan2(int haoma);
char xuanze4;//�� switch ѡ��ı���
string name;//�洢��������ڲ�ѯ������
int num;//�洢��������ڲ�ѯ��ѧ��
int sign=1;//�����ж�ִ������ı���
int beishanchu;
int beishanchu1;
int i;
int zongshu4;
int renshu;
user yonghu[50];
 student stu[50];
 system("cls");
	ifstream infile("student1.txt",ios::in);//���������ļ�����"student.txt"
	if(!infile)
	{
	sign=3;
	}     
	for(i=0;i<50;i++)
			{
			infile>>stu[i].stu_name;
            infile>>stu[i].stu_num;
            infile>>stu[i].stu_sex;
			infile>>stu[i].stu_birthday;
            infile>>stu[i].stu_mingzu;
            infile>>stu[i].stu_dizhi;
			infile>>stu[i].stu_class;
            infile>>stu[i].stu_phone;
			if(stu[i].stu_num<0)
			{
				zongshu4=i-1;
				break;
			}
			}
	cout << "---------------------------�����Ϣ---------------------------" << endl;
	if(sign==3)
	{
		cout<<"����ѧ����Ϣ���ļ������ڣ������޷���ѯ������������Ϣ���ٲ�ѯ��"<<endl;
		cout<<"���ڷ������˵�"<<endl;

	}
	else
	{
			cout<<"                   ��ѡ���ѯ��ʽ"<<endl<<endl;
			cout<<"                      1.��������ѯ"<< endl<<endl;
			cout<<"                      2.��ѧ�Ų�ѯ"<< endl<<endl;
			cout<<"                      3.�˳�"<<endl<<endl;
			cout << "--------------------------------------------------------------" << endl;
			cout<<"����ѡ�";
			cin>>xuanze4;
			cout << "--------------------------------------------------------------" << endl;
			switch(xuanze4)
			{
			case '1':
			{	
				/*cout<<"��Ǹ���ù����ݻ����š�"<<endl;
				system("pause");
				zhucaidan2g();
			}break;*/
				cout<<"������ѧ������"<<endl;
				cin>>name;
				for(i=0;i<=zongshu4;i++)
				{  
					if (stu[i].stu_name==name)
					{
					beishanchu=i;
				    cout << "---------------------------��ѯ���---------------------------" << endl;
					cout<<"����	ѧ��		�Ա�	��������  ����	����	 �༶	  ��ϵ��ʽ"<<endl;
					cout<<stu[i].stu_name<<"	";//�����ѯ���
					cout<<stu[i].stu_num<<"	";
					cout<<stu[i].stu_sex<<"	";
					cout<<stu[i].stu_birthday<<"  ";
					cout<<stu[i].stu_mingzu<<"	";
					cout<<stu[i].stu_dizhi<<" ";
					cout<<stu[i].stu_class<<"  ";
					cout<<stu[i].stu_phone<<" ";
					cout<<endl;
					sign=0;
					}
				}
					if(sign==1)
					{
						cout<<"���޴���,���ڷ������˵���"<<endl;//�鲻��ʱ������
						 system("pause");
						 zhucaidan2(haoma);
					}}break;


			case '2':
				{cout<<"������ѧ��ѧ��"<<endl;
				cin>>num;
				for(i=0;i<=zongshu4;i++)
				{   
					if (stu[i].stu_num==num)
					{
					beishanchu=i;
					cout << "---------------------------��Խ��---------------------------" << endl;
					cout<<"����	ѧ��		�Ա�	��������  ����	����	 �༶	  ��ϵ��ʽ"<<endl;
					cout<<stu[i].stu_name<<"	";//�����ѯ���
					cout<<stu[i].stu_num<<"	";
					cout<<stu[i].stu_sex<<"	";
					cout<<stu[i].stu_birthday<<"  ";
					cout<<stu[i].stu_mingzu<<"	";
					cout<<stu[i].stu_dizhi<<" ";
					cout<<stu[i].stu_class<<"  ";
					cout<<stu[i].stu_phone<<" ";
					cout<<endl;
					sign=0;
					}
				}
					if(sign==1)
					{
						cout<<"���޴���,���ڷ������˵���"<<endl;//�鲻��ʱ������
						 system("pause");
						 zhucaidan2(haoma);
					}break;
				}break;

			case '3':
				{zhucaidan2(haoma);}break;
			default:
				{
					cout<<"���������������ڷ������˵���"<<endl;
					zhucaidan2(haoma);
				}break;

	}
	}
	
infile.close();//��Բ������
if(xuanze4=='1'||xuanze4=='2')
{
cout<<"��ȷ��Ҫɾ������ѧ������Ϣ��"<<endl;
cout<<"����ȷ��ɾ������ѧ������Ϣ�������롰1�������������������1���������ַ��������˵�"<<endl;
	cout << "--------------------------------------------------------------" << endl;
	cout<<"����ѡ�";
	cin>>xuanze4;
	switch(xuanze4)
	{
	case'1':{
		 {ofstream outfile("student1.txt",ios::trunc);
		 outfile.close();}
		 {	ofstream outfile("student1.txt",ios::app);//��������ļ�����"student.txt"
		
		 
			 for(i=0;i<beishanchu;i++)//
			 {
			
			outfile<<stu[i].stu_name<<"	";//�����ļ����������ļ�ĩβ�����µ���Ϣ
            outfile<<stu[i].stu_num<<"	";
            outfile<<stu[i].stu_sex<<"		";
			outfile<<stu[i].stu_birthday<<"	";
            outfile<<stu[i].stu_mingzu<<"	";
            outfile<<stu[i].stu_dizhi<<"	";
			outfile<<stu[i].stu_class<<"	";
            outfile<<stu[i].stu_phone<<"	";
			outfile<<endl;
			 }
			 outfile.close();}
			 //
			ofstream outfile("student1.txt",ios::app);
			 for(i=beishanchu+1;i<=zongshu4;i++)//
			 {
			outfile<<stu[i].stu_name<<"	";//�����ļ����������ļ�ĩβ�����µ���Ϣ
            outfile<<stu[i].stu_num<<"	";
            outfile<<stu[i].stu_sex<<"		";
			outfile<<stu[i].stu_birthday<<"	";
            outfile<<stu[i].stu_mingzu<<"	";
            outfile<<stu[i].stu_dizhi<<"	";
			outfile<<stu[i].stu_class<<"	";
            outfile<<stu[i].stu_phone<<"	";
			outfile<<endl;
			 }
			 //
			cout<<"�ѽ�����ѧ������Ϣɾ����"<<endl;
			outfile.close();//�ر��ļ�
			system("pause");
	{ifstream infile("password1.txt",ios::in);//���������ļ�����"password1.txt"   
	for(i=0;i<50;i++)
		{
			infile>>yonghu[i].account;
            infile>>yonghu[i].password;
            infile>>yonghu[i].type;
			if(yonghu[i].account<0)
			{
				renshu=i-1;
			break;
			}
		}
	for(i=0;i<=renshu;i++)
		{
		if(yonghu[i].account==stu[beishanchu].stu_num)
			{
				beishanchu1=i;
			}
		}
	infile.close();}

			
	//	 }
{ofstream outfile("password1.txt",ios::trunc);
		 outfile.close();}
{ofstream outfile("password1.txt",ios::app);
		for(i=0;i<beishanchu1;i++)//
			 {
			outfile<<yonghu[i].account<<"	";
            outfile<<yonghu[i].password<<"	";
            outfile<<yonghu[i].type<<"	";
			outfile<<endl;
			}
		for(i=beishanchu1+1;i<=renshu;i++)//
			{
			outfile<<yonghu[i].account<<"	";
            outfile<<yonghu[i].password<<"	";
            outfile<<yonghu[i].type<<"	";
			outfile<<endl;
			}
		cout<<"�ѽ�����ѧ�����˻�ɾ����"<<endl;
		 outfile.close();}
			system("pause");
		;}break;
	default:
		{cout<<"��ѧ������Ϣδ��ɾ����"<<endl;
		system("pause");
		
		}break;
		}
	}
	cout << "--------------------------------------------------------------" << endl;
	cout<<"           ��ѡ����Ҫ���еĲ�����"<<endl<<endl;
	cout<<"                              1.����ɾ��"<<endl<<endl; 
	cout<<"                             ��������������������˵�"<<endl<<endl;
	cout<<"����ѡ��";
	cin>>xuanze4;
	if(xuanze4=='1')
		shanchu(haoma);
	else
		zhucaidan2(haoma);
}
void pingjia1(int haoma)//���ڽ����������۵ĺ���
{
	void zhucaidan1(int haoma);
	string liuyan;
	char xuanze3;
	system("cls");
	cout<<"-------------------------��ѧ��������-------------------------"<<endl;
	cout<<"���ڣ�������������Խ�ѧ���������ۣ������ģ�"<<endl;
	cout<<"��";
	cin>>liuyan;
	cout<<"���Ƿ�Ҫ�����������ԣ����롰1�����棬�������������ַ��������˳�"<<endl;
	cin>>xuanze3;
	switch(xuanze3)
	{
	case'1':{
		ofstream outfile("����.txt",ios::app);//��������ļ�����"student.txt"
		if(!outfile)
		{
			cout<<"��Ǹ������ʧ�ܣ�"<<endl;//�޷��򿪻������ļ�ʱ��ʾ����ʧ��
				break;
		}
		 else
		 {	
			outfile<<1<<" ";
			outfile<<liuyan;
			outfile<<endl;//�����ļ����������ļ�ĩβ�����µ���Ϣ
			cout<<"�ѽ����������Ϣ���浽Ӳ���ϡ�"<<endl;
		 }
			system("pause");
			outfile.close();//�ر��ļ�
			zhucaidan1(haoma);
			}break;
	default:
		{
			cout<<"�������Ϣδ�����棬�����������˵���"<<endl;
		system("pause");
		zhucaidan1(haoma);
		}break;
}
}
void pingjia2(int haoma)//���ڲ鿴�������۵ĺ���
{
	void zhucaidan2(int haoma);
	int i;
	int zongshu;
	int sign=0;
	string pingjia[50];
	int a[50];
	system("cls");
	ifstream infile("����.txt",ios::in);//���������ļ�����"����.txt"
	if(!infile)
	{
	sign=3;
	}  
	for(i=0;i<50;i++)
			{
			infile>>a[i];
			infile>>pingjia[i];
			if(a[i]<0)
			{
			zongshu=i-1;
			break;
			}
			sign=1;
			}
	cout<<"-------------------------��ѧ��������-------------------------"<<endl;
	for(i=0;i<=zongshu;i++)
			{
			cout<<pingjia[i];
			cout<<endl;
			}
	cout<<"--------------------------------------------------------------"<<endl;
	infile.close();
	system("pause");
	zhucaidan2(haoma);
}
void weihu(int haoma)
{
	void zhucaidan2(int haoma);
	student stu[50];
	int i;
	int j;
	int beichongzhi;
	user yonghu[50];
	char xuanze8;//�� switch ѡ��ı���
	int sign=0;
	int zongshu8;
	int account;
	system("cls");
	cout << "---------------------------��Ϣά��---------------------------" << endl;
	cout<<"                 ��ѡ����Ҫ���еĲ���"<<endl;
	cout<<"                        1.�ظ���Ч������Ϣ���"<< endl;
	cout<<"                        2.��������"<<endl;
	cin>>xuanze8;
	switch(xuanze8)
	{
			case'1':
{
		student stu[50]; 
		ifstream infile("student1.txt",ios::in);//���������ļ�����"student.txt"
		if(!infile)
		{
		sign=3;
		}
		for(i=0;i<50;i++)
		{
			infile>>stu[i].stu_name;
            infile>>stu[i].stu_num;
            infile>>stu[i].stu_sex;
			infile>>stu[i].stu_birthday;
            infile>>stu[i].stu_mingzu;
            infile>>stu[i].stu_dizhi;
			infile>>stu[i].stu_class;
            infile>>stu[i].stu_phone;
			if(stu[i].stu_num<0)
			{
					zongshu8=i-1;
					break;
			}
		}
		infile.close();
	if(sign==3)
	{
		cout<<"����ѧ����Ϣ���ļ������ڣ������޷���飡����������Ϣ���ټ�顣"<<endl;
		cout<<"���ڷ������˵�"<<endl;
	}
	if(sign!=3)
	{
		for(i=0;i<=zongshu8;i++)
		{
			for(j=i+1,sign=0;j<=zongshu8;j++)
				{
				if(stu[j].stu_num==stu[i].stu_num)
					{
						cout<<stu[j].stu_name<<"	";//�����ѯ���
						cout<<stu[j].stu_num<<"	";
						cout<<stu[j].stu_sex<<"	";
						cout<<stu[j].stu_birthday<<"  ";
						cout<<stu[j].stu_mingzu<<"	";
						cout<<stu[j].stu_dizhi<<" ";
						cout<<stu[j].stu_class<<"  ";
						cout<<stu[j].stu_phone<<" ";
						cout<<endl;
						sign=1;
					}
				}
			if(sign==1)
			{
				cout<<stu[i].stu_name<<"	";//�����ѯ���
				cout<<stu[i].stu_num<<"	";
				cout<<stu[i].stu_sex<<"	";
				cout<<stu[i].stu_birthday<<"  ";
				cout<<stu[i].stu_mingzu<<"	";
				cout<<stu[i].stu_dizhi<<" ";
				cout<<stu[i].stu_class<<"  ";
				cout<<stu[i].stu_phone<<" ";
				cout<<endl;
				cout<<"������Ϣ��ѧ����ͬ"<<endl;
				cout<<"--------------------------------------------------------------"<<endl;
			}
		}
	}
	for(i=0;i<=zongshu8;i++)
	{
		if(stu[i].stu_num>2017119999||stu[i].stu_num<=2012000000)
			{
				cout<<stu[i].stu_name<<"	";//�����ѯ���
				cout<<stu[i].stu_num<<"	";
				cout<<stu[i].stu_sex<<"	";
				cout<<stu[i].stu_birthday<<"  ";
				cout<<stu[i].stu_mingzu<<"	";
				cout<<stu[i].stu_dizhi<<" ";
				cout<<stu[i].stu_class<<"  ";
				cout<<stu[i].stu_phone<<" ";
				cout<<endl;
				sign=2;
			}
	}
			if(sign==2)
			{
				cout<<"����ѧ����Ϣ��ѧ�����Դ���"<<endl;
				cout<<"--------------------------------------------------------------"<<endl;
			}
			if(sign==1||sign==2)
			{
				cout<<"ǿ�ҽ�����������������Ϣ�����޸Ļ�ɾ����"<<endl;
				cout<<"��ѡ�������ʽ"<<endl;
				cout<<"1.�޸���Ϣ"<< endl;
				cout<<"2.ɾ����Ϣ "<< endl;
				cout<<"�������������.�ص����˵� "<<endl;
				cout<<"����ѡ��";
				cin>>xuanze8;
				switch(xuanze8)
				{
				case'1':
					{
						xiugai1(haoma);
					}
				case '2':
					{
						shanchu(haoma);
					}
				default:
					{
						cout<<"δ�����κ��޸ģ����ڻص����˵�"<<endl;
						system("pause");
						zhucaidan2(haoma);
					}
				}
			}
			else
			{
				cout<<"δ�������"<<endl;
				system("pause");
				zhucaidan2(haoma);
			}

}//case1
			case'2':
{
	 
		{ifstream infile("password1.txt",ios::in);//���������ļ�����"student.txt"
		if(!infile)
			{
			sign=3;
			}
		for(i=0;i<50;i++)
		{
	    infile>>yonghu[i].account;
            infile>>yonghu[i].password;
            infile>>yonghu[i].type;
			if(yonghu[i].account<0)
			{
				zongshu8=i-1;
			break;
			}
		}
		infile.close();}

		if(sign==3)
		{
		cout<<"����ѧ����Ϣ���ļ������ڣ������޷���飡����������Ϣ���ټ�顣"<<endl;
		cout<<"���ڷ������˵�"<<endl;
		system("pause");
		}
		if(sign!=3)
	{
		cout<<"������Ҫ�����˻����˺ţ�";
		cin>>account;
		for(i=0;i<=zongshu8;i++)
		{
			if(yonghu[i].account==account)
			{
				beichongzhi=i;
				sign=1;
				break;
			}
		}
		if(sign==0)
		{
			cout<<"δ�ҵ�������Ϣ�����ڻص����˵���"<<endl;
			system("pause");
		}
		if(sign==1)
		{	cout<<"��ȷ��Ҫ����"<<"	"<<yonghu[i].account<<"	"<<"������Ϊ��1����"<<endl;
			cout<<"���롰1��ȷ�ϣ��������������ַ�ȡ����"<<endl;
			cin>>xuanze8;
			switch(xuanze8)
			case'1':
			{
				yonghu[beichongzhi].password='1';
				 {
					ofstream outfile("password1.txt",ios::trunc);
					outfile.close();
				 }
				ofstream outfile("password1.txt",ios::app);//��������ļ�����"student.txt"
				for(i=0;i<=zongshu8;i++)//
				{	
				outfile<<yonghu[i].account<<"	";
				outfile<<yonghu[i].password<<"	";
				outfile<<yonghu[i].type<<"	";
				outfile<<endl;
				}//
				outfile.close();
				cout<<"�������óɹ���"<<endl;
				cout<<"���ڻص����˵���"<<endl;
				system("pause");
				outfile.close();//�ر��ļ�
				//system("pause");
			}break;
			default:
			{
				cout<<"δ������������κβ�����"<<endl;
				system("pause");
				zhucaidan2(haoma);
			}break;
		}
		zhucaidan2(haoma);
	}
}//case2



	//default:
		//	{
			//	cout<<"δ������������κβ�����"<<endl;
			//}break;
}//switch

zhucaidan2(haoma);	}

void mima(int haoma)
{
	void zhucaidan1(int haoma);
	void zhucaidan2(int haoma);
	user yonghu[50];
	string password;
	string password1;
	string password2;
	int xiugai;
	int renshu;
	int i;
	system("cls");
	cout << "---------------------------�޸�����---------------------------" << endl;
	cout<<"�����˺�Ϊ��"<<haoma<<endl;
	ifstream infile("password1.txt",ios::in);//���������ļ�����"password1.txt"   
	for(i=0;i<50;i++)
		{
			infile>>yonghu[i].account;
            infile>>yonghu[i].password;
            infile>>yonghu[i].type;
			if(yonghu[i].account<0)
			{
				renshu=i-1;
			break;
			}
		}
	for(i=0;i<=renshu;i++)
		{
		if(yonghu[i].account==haoma)
			{
				xiugai=i;
			}
		}
	infile.close();
	cout<<"������ԭ�������룺";
	cin>>password;
	cout<<endl;
	for(;password!=yonghu[xiugai].password;i++)
	{
		cout<<"ԭ�����������"<<endl;
		cout<<"������ԭ�������룺";
		cin>>password;
		cout<<endl;
	}
	cout<<"�������µ����룺";
	cin>>password1;
	cout<<endl;
	cout<<"���ٴ��������룺";
	cin>>password2;
	cout<<endl;
	for(;password1!=password2;i++)
	{
		cout<<"��������������벻��ͬ��"<<endl;
		cout<<"������ԭ�������룺";
		cin>>yonghu[xiugai].password;
		cout<<endl;
		cout<<"�������µ����룺";
		cin>>password1;
		cout<<endl;
		cout<<"���ٴ��������룺";
		cin>>password2;
		cout<<endl;
	}
	yonghu[xiugai].password=password1;
	 {
			 ofstream outfile("password1.txt",ios::trunc);
		 outfile.close();
		 }
		ofstream outfile("password1.txt",ios::app);//��������ļ�����"student.txt"
		 for(i=0;i<=renshu;i++)//
			 {	
			outfile<<yonghu[i].account<<"	";
            outfile<<yonghu[i].password<<"	";
            outfile<<yonghu[i].type<<"	";
			outfile<<endl;
			 }//
			cout<<"�����޸ĳɹ������μ����������룡"<<endl;
			cout<<"���ڻص����˵���"<<endl;
			outfile.close();//�ر��ļ�
			system("pause");
			if(yonghu[xiugai].type==1)
			{
				zhucaidan1(haoma);
			}
			if(yonghu[xiugai].type==2)
			{
				zhucaidan2(haoma);
			}

}
void tongzhi1(int haoma)
{
	void zhucaidan1(int haoma);
	string duixiang[50];
	string neirong[50];
	string type[50];
	string xuehao[50];
	int i;
	int sign=1;
int zongshu5;
int weizhi5;
string banji;
student stu[50];
system("cls");
cout << "--------------------------��ҵ��֪ͨ--------------------------" << endl;
	{ifstream infile("student1.txt",ios::in);//���������ļ�����"student.txt"
/*	if(!infile)
	{
	sign=3;
	}*/
	for(i=0;i<50;i++)
		{
			infile>>stu[i].stu_name;
            infile>>stu[i].stu_num;
            infile>>stu[i].stu_sex;
			infile>>stu[i].stu_birthday;
            infile>>stu[i].stu_mingzu;
            infile>>stu[i].stu_dizhi;
			infile>>stu[i].stu_class;
            infile>>stu[i].stu_phone;
			if(stu[i].stu_num<0)
			{
				zongshu5=i-1;
			break;
			}
		}
	infile.close();}
	for(i=0;i<=zongshu5;i++)
				{   
					if (stu[i].stu_num==haoma)
					{
					weizhi5=i;
					//sign=0;
					break;
					}
				}
	ifstream infile("֪ͨ1.txt",ios::in);//���������ļ�����"student.txt"
	if(!infile)
	{
	sign=3;
	cout<<"δ�����κ���ҵ��֪ͨ"<<endl;
	}
	else
	{
		for(i=0;i<50;i++)
		{
		infile>>duixiang[i];
		infile>>type[i];
		infile>>neirong[i];
		}
		for(i=0;i<50;i++)
		{
		if(/*duixiang[i]==xuehao||*/duixiang[i]==stu[weizhi5].stu_name||duixiang[i]==stu[weizhi5].stu_class)
		{
			cout<<type[i]<<"��"<<endl;
			cout<<"    "<<neirong[i]<<endl;
			cout<<"--------------------------------------------------------------"<<endl;
			sign=0;
		}
		}
	}
	infile.close();
	if(sign==1)
	{cout<<"���κ������йص���ҵ��֪ͨ��"<<endl;}
	system("pause");
	zhucaidan1(haoma);

}
void tongzhi2(int haoma)
{
	void zhucaidan2(int haoma);
	string duixiang;
	string neirong;
	string type;
	char xuanze9;
	system("cls");
	cout << "------------------------������ҵ��֪ͨ------------------------" << endl;
	cout<<"ѡ�񷢲��������ͣ�"<<endl;
	cout<<" 1. ��ҵ"<<endl;
	cout<<" 2. ֪ͨ"<<endl;
	cout<<" 3. ����"<<endl;
	cout<<"�����������ַ����˳�"<<endl;
	cin>>xuanze9;
	switch(xuanze9)
	{
	case'1':
		{
			type="��ҵ";
			cout<<"�����뷢������";
			cin>> duixiang;
			cout<<"�����뷢�����ݣ�";
			cin>>neirong;
			ofstream outfile("֪ͨ1.txt",ios::app);//��������ļ�����"֪ͨ1.txt"
			if(!outfile)
			{
			cout<<"��Ǹ������ʧ�ܣ�"<<endl;//�޷��򿪻������ļ�ʱ��ʾ����ʧ��
				break;
			}
			else
			{
			outfile<<duixiang<<"	";
			outfile<<type<<"	";//�����ļ����������ļ�ĩβ�����µ���Ϣ
            outfile<<neirong<<"	";
			cout<<"�ѽ����������Ϣ���浽Ӳ���ϡ�"<<endl;
			system("pause");
			outfile.close();//�ر��ļ�
			}
		}break;
			case'2':
		{
			type="֪ͨ";
			cout<<"�����뷢������";
			cin>> duixiang;
			cout<<"�����뷢�����ݣ�";
			cin>>neirong;
			ofstream outfile("֪ͨ1.txt",ios::app);//��������ļ�����"֪ͨ1.txt"
			if(!outfile)
			{
			cout<<"��Ǹ������ʧ�ܣ�"<<endl;//�޷��򿪻������ļ�ʱ��ʾ����ʧ��
				break;
			}
			else
			{
			outfile<<duixiang;
			outfile<<type<<"	";//�����ļ����������ļ�ĩβ�����µ���Ϣ
            outfile<<neirong<<"	";
			cout<<"�ѽ����������Ϣ���浽Ӳ���ϡ�"<<endl;
			system("pause");
			outfile.close();//�ر��ļ�
			}
		}break;
			case'3':
		{
			type="����";
			cout<<"�����뷢������";
			cin>> duixiang;
			cout<<"�����뷢�����ݣ�";
			cin>>neirong;
			ofstream outfile("֪ͨ1.txt",ios::app);//��������ļ�����"֪ͨ1.txt"
			if(!outfile)
			{
			cout<<"��Ǹ������ʧ�ܣ�"<<endl;//�޷��򿪻������ļ�ʱ��ʾ����ʧ��
				break;
			}
			else
			{
			outfile<<duixiang;
			outfile<<type<<"	";//�����ļ����������ļ�ĩβ�����µ���Ϣ
            outfile<<neirong<<"	";
			cout<<"�ѽ����������Ϣ���浽Ӳ���ϡ�"<<endl;
			system("pause");
			outfile.close();//�ر��ļ�
			}
		}break;
		default:
		{
			cout<<"���ڻص����˵�";
			system("pause");
		}break;
	}
zhucaidan2(haoma);
}
void fankiu(int haoma)
{
	void zhucaidan1(int haoma);
	void zhucaidan2(int haoma);
	user yonghu[50];
	int i;
	int fankuiren;
	string liuyan;
	string type;
	char xuanze0;
	system("cls");
	{ifstream infile("password1.txt",ios::in);//���������ļ�����"password1.txt"   
	for(i=0;i<50;i++)
		{
			infile>>yonghu[i].account;
            infile>>yonghu[i].password;
            infile>>yonghu[i].type;
		}
	for(i=0;i<50;i++)
		{
		if(yonghu[i].account==haoma)
			{
				fankuiren=i;
			}
		}
	infile.close();}
	if(yonghu[fankuiren].type==1)
	type="ѧ����";
	else if(yonghu[fankuiren].type==2)
	type="�̹���";
	else
	type="����";
	cout << "--------------------------�������---------------------------" << endl;
	cout<<"���ڣ��������������ʹ�ù����жԸ�ϵͳ��������������ڿ��ܽ�һ���˽���������뽨�飬���ǽ�������ʹ�õ��˺ţ�"<<endl;
	cout<<"��";
	cin>>liuyan;
	cout<<"�Ƿ񱣴沢�ύ�����������"<<endl;
	cout<<"���롰1���ύ���棬�������1�����κ��ַ������沢�������˵�"<<endl;
	cin>>xuanze0;
	switch(xuanze0)
	{
	case'1':
		{
			ofstream outfile("����1.txt",ios::app);//��������ļ�����"student.txt"
		if(!outfile)
			{
			cout<<"��Ǹ������ʧ�ܣ�"<<endl;//�޷��򿪻������ļ�ʱ��ʾ����ʧ��
				break;
			}
		 else
			{
			outfile<<yonghu[fankuiren].account<<"	";//�����ļ����������ļ�ĩβ�����µ���Ϣ
            outfile<<type<<"	";
            outfile<<liuyan<<endl;
			}
		 outfile.close();
		 cout<<"���ķ��������Ѿ��ύ�����ǽ���ʱ����лл��"<<endl;
		}break;
	default:
		{
			cout<<"δ�ύ�������ԣ����ڷ������˵���"<<endl;
		}
	}
	system("pause");
	if(yonghu[fankuiren].type==1)
	{
		zhucaidan1(haoma);
	}
	if(yonghu[fankuiren].type==2)
	{
		zhucaidan2(haoma);
	}
}
void chengji1(int haoma)
{
	void zhucaidan1(int haoma);
	int sign=0;
	int i;
	int j;
	int zongshu;
	score chengji[50]; 
	system("cls");
	ifstream infile("�ɼ�1.txt",ios::in);//���������ļ�����"student.txt"
	if(!infile)
	{
	sign=3;
	}
	for(i=0;i<50;i++)
		{
			infile>>chengji[i].xuehao;
            infile>>chengji[i].keshu;
			for(j=0;j<chengji[i].keshu;j++)
			{
				infile>>chengji[i].kemu[j];
				infile>>chengji[i].xuefen[j];
				infile>>chengji[i].defen[j];
				infile>>chengji[i].jd[j];
			}
			infile>>chengji[i].zjd;
			if(chengji[i].xuehao<0)
				{
					zongshu=i-1;			
					break;
				}
			}
	infile.close();
	cout << "--------------------------�ɼ���ѯ---------------------------" << endl;
	for(i=0;i<=zongshu;i++)
	{
		if(chengji[i].xuehao==haoma)
		{
			cout<<"                     ѧ�ţ�"<<setw(5)<<chengji[i].xuehao<<endl;
			cout << "-------------------------------------------------------------" << endl;
			for(j=0;j<chengji[i].keshu;j++)
			{
				
				cout.width(20);
				cout<<chengji[i].kemu[j]<<"��";
				cout.width(8);
				cout<<chengji[i].defen[j]<<"||  ";
				cout.width(5);
				cout<<"���㣺";
				cout.width(8);
				cout<<chengji[i].jd[j]<<endl;
				cout << "-------------------------------------------------------------" << endl;
			}
			cout<<"�ܼ��㣺"<<chengji[i].zjd<<endl;
			cout << "-------------------------------------------------------------" << endl;
			cout<<endl;
			sign=1;
		}
	}
	if(sign==0)
		cout<<"�������ĳɼ���Ϣ"<<endl;
	system("pause");
	zhucaidan1(haoma);
}
void chengji2(int haoma)
{
	void zhucaidan2(int haoma);
	int sign=0;
	int i;
	int j;
	int zongshu;
	char xuanze5;
	int xuehao;
	score chengji[50];
	score luru;
	float jiaquan=0;
	float zxf=0;
	float shangxian;
	float xiaxian;
	int sum=0;
	system("cls");
	ifstream infile("�ɼ�1.txt",ios::in);//���������ļ�����"student.txt"
	if(!infile)
	{
	sign=3;
	}
	for(i=0;i<50;i++)
		{
			infile>>chengji[i].xuehao;
            infile>>chengji[i].keshu;
			for(j=0;j<chengji[i].keshu;j++)
			{
				infile>>chengji[i].kemu[j];
				infile>>chengji[i].xuefen[j];
				infile>>chengji[i].defen[j];
				infile>>chengji[i].jd[j];
			}
			infile>>chengji[i].zjd;
			if(chengji[i].xuehao<0)
				{
					zongshu=i-1;			
					break;
				}
			}
	infile.close();
	cout << "--------------------------�ɼ�����---------------------------" << endl;
	cout<<"             ��ѡ����Ҫ���еĲ���:"<<endl;
	cout<<"                            1.��ѯ�ɼ�"<<endl<<endl;
	cout<<"                            2.¼��ɼ�"<<endl<<endl;
	cout<<"                            3.�����ɼ�"<<endl<<endl;
	cout<<"                            3.������һ��"<<endl<<endl;
	cout<<"����ѡ��";
	cin>>xuanze5;
	switch(xuanze5)
	{
	case'1':
		{
			cout << "--------------------------�ɼ���ѯ---------------------------" << endl;
			cout<<"��������Ҫ��ѯ��ѧ����ѧ��"<<endl;
			cin>>xuehao;
			cout << "--------------------------��ѯ���---------------------------" << endl;
			for(i=0;i<=zongshu;i++)
			{
				if(chengji[i].xuehao==xuehao)
				{
				cout<<"                     ѧ�ţ�"<<setw(5)<<chengji[i].xuehao<<endl;
			cout << "-------------------------------------------------------------" << endl;
			for(j=0;j<chengji[i].keshu;j++)
			{
				cout.setf(std::ios::left);
				cout.width(20);
				cout<<chengji[i].kemu[j]<<"��";
				cout.width(8);
				cout<<chengji[i].defen[j]<<"||  ";
				cout.width(5);
				cout<<"���㣺";
				cout.width(8);
				cout<<chengji[i].jd[j]<<endl;
				cout << "-------------------------------------------------------------" << endl;
			}
			cout<<"�ܼ��㣺"<<chengji[i].zjd<<endl;
			cout << "-------------------------------------------------------------" << endl;
				cout<<endl;
				sign=1;
				}
			}
			if(sign==0)
				cout<<"δ�ҵ���ѧ���ĳɼ���Ϣ"<<endl;

		}break;
	case'2':
		{	cout << "--------------------------�ɼ�¼��---------------------------" << endl;
			cout<<"������ѧ��ѧ��:";
			cin>>luru.xuehao;
			cout<<"������¼��Ŀ�Ŀ��Ŀ";
			cin>>luru.keshu;
			for(i=0;i<luru.keshu;i++)
			{
				cout<<"�������"<<i+1<<"�Ƶ����ƣ�";
				cin>>luru.kemu[i];
				cout<<"������"<<luru.kemu[i]<<"�Ƶ�ѧ�֣�";
				cin>>luru.xuefen[i];
				cout<<"������"<<luru.kemu[i]<<"�Ƶĳɼ���";
				cin>>luru.defen[i];
				if(luru.defen[i]<=100&&luru.defen[i]>=95)
				{
					luru.jd[i]=(float)4.33;
				}
				if(luru.defen[i]<95&&luru.defen[i]>=90)
				{
					luru.jd[i]=(float)4.00;
				}
				if(luru.defen[i]<90&&luru.defen[i]>=85)
				{
					luru.jd[i]=(float)3.67;
				}
				if(luru.defen[i]<85&&luru.defen[i]>=82)
				{
					luru.jd[i]=(float)3.33;
				}
				if(luru.defen[i]<82&&luru.defen[i]>=78)
				{
					luru.jd[i]=(float)3.00;
				}
				if(luru.defen[i]<78&&luru.defen[i]>=75)
				{
					luru.jd[i]=(float)2.67;
				}
				if(luru.defen[i]<75&&luru.defen[i]>=72)
				{
					luru.jd[i]=(float)2.33;
				}
				if(luru.defen[i]<72&&luru.defen[i]>=68)
				{
					luru.jd[i]=(float)2.00;
				}
				if(luru.defen[i]<68&&luru.defen[i]>=64)
				{
					luru.jd[i]=(float)1.67;
				}
				if(luru.defen[i]<64&&luru.defen[i]>60)
				{
					luru.jd[i]=(float)1.33;
				}
				if(luru.defen[i]==60)
				{
					luru.jd[i]=(float)1.00;
				}
				if(luru.defen[i]<60)
				{
					luru.jd[i]=(float)0.00;
				}
			}
			for(i=0;i<luru.keshu;i++)
			{
				zxf=zxf+luru.xuefen[i];
				jiaquan=jiaquan+luru.xuefen[i]*luru.jd[i];
			}
			luru.zjd=(jiaquan/zxf);
			cout<<"��ȷ�������������Ϣ��"<<endl;
			cout<<"                     ѧ�ţ�"<<setw(5)<<luru.xuehao<<endl;
			cout << "-------------------------------------------------------------" << endl;
			for(j=0;j<luru.keshu;j++)
			{
				cout.setf(std::ios::left);
				cout.width(20);
				cout<<luru.kemu[j]<<"��";
				cout.width(8);
				cout<<luru.defen[j]<<"||  ";
				cout.width(5);
				cout<<"���㣺";
				cout.width(8);
				cout<<luru.jd[j]<<endl;
				cout << "-------------------------------------------------------------" << endl;
			}
			cout<<"�ܼ��㣺"<<luru.zjd<<endl;
			cout << "-------------------------------------------------------------" << endl;
			cout<<endl;
			cout<<"����ȷ�������������Ϣ���������롰1���ύ����,����������������ύ���棬�����������1�����κ��ַ��������˵���"<<endl;
			cin>>xuanze5;
			if(xuanze5=='1')
			{
				ofstream outfile("�ɼ�1.txt",ios::app);
				outfile<<luru.xuehao<<"	";
				outfile<<luru.keshu<<"	";
				for(i=0;i<luru.keshu;i++)
				{
					outfile<<luru.kemu[i]<<"	";
					outfile<<luru.xuefen[i]<<"	";
					outfile<<luru.defen[i]<<"	";
					outfile<<luru.jd[i]<<"	";
				}
				outfile<<luru.zjd<<"	";
				outfile<<luru.zjd<<"	";
				outfile.close();
				cout<<"��¼��ĳɼ���Ϣ�Ѿ��ύ����"<<endl;
			}
			else
			{
				cout<<"������ĳɼ�δ�����ύ�����ڷ������˵�"<<endl;
			}
		}break;
		case'3':
		{
			cout<<"��������Ҫ�����ļ������������"<<endl;
			cin>>shangxian;
			cout<<"��������Ҫ�����ļ������������"<<endl;
			cin>>xiaxian;
			for(i=0;i<=zongshu;i++)
			{
				if(chengji[i].zjd>=xiaxian&&chengji[i].zjd<=shangxian)
				sum=sum+1;
			}
			cout<<"�ܼ�����"<<"xiaxian"<<"��"<<"shangxian"<<"֮��Ĺ���"<<sum<<"��"<<endl;
			cout<<"ռ��¼��ѧ��������"<<((float)sum/(float)(zongshu+1))*100<<"��"<<endl;

		}break;
		case'4':
			{	system("pause");
	zhucaidan2(haoma);}break;
		default:
			{cout<<"��������" <<endl;}break;
	}
	cout << "-------------------------------------------------------------" << endl;
	cout<<"                 ��ѡ����Ҫ���еĲ�����"<<endl<<endl;
	cout<<"                      1.������һ��"<<endl<<endl;
	cout<<"                      �������������.�ص����˵�"<<endl<<endl;
	cout<<"����ѡ��";
	cin>>xuanze5;
	if(xuanze5=='1')
	{chengji2(haoma);}
	else
	{system("pause");
	zhucaidan2(haoma);}
}
void kebiao1(int haoma)
{
	void zhucaidan1(int haoma);
	void kebiao0(int haoma);
	int sign=0;
	int i;
	int j;
	int k;
	int zongshu;
	kecheng kebiao[50][7][5];
	system("cls");
	ifstream infile("�α�1.txt",ios::in);//���������ļ�����"student.txt"
	if(!infile)
	{
	sign=3;
	}
	for(k=0;k<50;k++)
	{
		infile>>kebiao[k][0][0].xuehao;
	for(i=0;i<7;i++)
		{
			for(j=0;j<5;j++)
			{
				infile>>kebiao[k][i][j].kemu;
				infile>>kebiao[k][i][j].didian;
				infile>>kebiao[k][i][j].zhoushu;
			}
		}
	if(kebiao[k][0][0].xuehao<0)
		zongshu=i;
	}	
	infile.close();
	cout<<"                                 ���Ŀα�                                 "<<endl;
	for(k=0;k<zongshu;k++)
	{
	if(kebiao[k][0][0].xuehao==haoma)
	{sign=1;
		cout.setf(std::ios::left);
	cout << "�T�T�T�T�T�T�j�T�T�T�T�T�T�j�T�T�T�T�T�T�j�T�T�T�T�T�T�j�T�T�T�T�T�T�[" << endl;
	cout << "   ��1~2��  �U  ��3~4��   �U  ��6~7��   �U   ��8~9��  �U  ��11~13�� �U" << endl;
	cout << "�T�T�T�T�T�T�p�T�T�T�T�T�T�p�T�T�T�T�T�T�p�T�T�T�T�T�T�p�T�T�T�T�T�T�g" << endl;
	for(i=0;i<7;i++)
		{	
		
			for(j=0;j<5;j++)
			{
				
				if(kebiao[k][i][j].kemu=="0")
				{
					
					cout<<"            �U";
				}
				else
				{
					cout.width(12);
					cout<<kebiao[k][i][j].kemu<<"�U";
				}
			}
			cout<<endl;
				for(j=0;j<5;j++)
			{
					
				if(kebiao[k][i][j].didian=="0")
				{
					cout<<"            �U";
					
				}
				else
				{
					cout.width(12);
					cout<<kebiao[k][i][j].didian<<"�U";
					
				}
			}
			cout<<endl;
			
				for(j=0;j<5;j++)
			{
					
				if(kebiao[k][i][j].zhoushu=="0")
				{
					cout<<"            �U";
				}
				else
				{
					cout.width(12);
					cout<<kebiao[k][i][j].zhoushu<<"�U";
				}
			}
			cout<<endl;
			cout << "�T�T�T�T�T�T�p�T�T�T�T�T�T�p�T�T�T�T�T�T�p�T�T�T�T�T�T�p�T�T�T�T�T�T�g" << endl;
		}
		
	}}
	if(sign==0)
		cout<<"�������Ŀα���Ϣ"<<endl;
	system("pause");
	cout<<"���ڻص���һ���˵�"<<endl;
	kebiao0(haoma);
}
void kebiao2(int haoma)
{
	void zhucaidan1(int haoma);
	void kebiao0(int haoma);
	int sign=0;
	int i;
	int j;
	int k;
	int zongshu;
	char xuanze9;
	int xuanke;
	kecheng kebiao[50][7][5];
	system("cls");
	{ifstream infile("�α�1.txt",ios::in);//���������ļ�����"student.txt"
	if(!infile)
	{
	sign=3;
	}
	for(k=0;k<50;k++)
	{
		infile>>kebiao[k][0][0].xuehao;
	for(i=0;i<7;i++)
		{
			for(j=0;j<5;j++)
			{
				infile>>kebiao[k][i][j].kemu;
				infile>>kebiao[k][i][j].didian;
				infile>>kebiao[k][i][j].zhoushu;
			}
		}
	if(kebiao[k][0][0].xuehao<0)
		zongshu=i;
	}	
	infile.close();}
	for(k=0;k<zongshu;k++)
	{
	if(kebiao[k][0][0].xuehao==haoma)
	{xuanke=k;
	sign=1;}
	}
	if(sign==1)
	{
	cout<<"��ѡ����Ҫѡ�Ŀ�"<<endl;
	cout<<"ע�⣬��ѡѡ�޿�ʱ��ѡ��֮������ѡ�Ŀ�ʱ�γ�ͻ�����������ѡ��Ϊ׼"<<endl;
	cout << "----------------------------ͨʶ��----------------------------" << endl;
	cout<<"1.��¥�Σ������� 11~13�ڣ�A201,3~10�ܣ�"<<endl;
	cout<<"2.��ȥһ���꣨���ڶ� 11~13�ڣ�A201,3~10�ܣ�"<<endl;
	cout<<"3.�������һ 11~13�ڣ�A201,3~14�ܣ�"<<endl;
	cout << "----------------------------������----------------------------" << endl;
	cout<<"4.���أ������� 8~9�ڣ����س�,1~16�ܣ�"<<endl;
	cout<<"5.���������� 8~9�ڣ�����,1~16�ܣ�"<<endl;
	cout<<"6.���������� 8~9�ڣ�����,1~16�ܣ�"<<endl;
	cout<<"����ѡ��";
	cin>>xuanze9;
	switch(xuanze9)
	{
	case'2':
		{
			kebiao[xuanke][1][4].kemu="��ȥһ����";
			kebiao[xuanke][1][4].didian="A201";
			kebiao[xuanke][1][4].zhoushu="3~10��";
		}break;
	case'1':
		{
			kebiao[xuanke][3][4].kemu="��¥��";
			kebiao[xuanke][3][4].didian="A201";
			kebiao[xuanke][3][4].zhoushu="3~10��";
		}break;
	case'3':
		{
			kebiao[xuanke][0][4].kemu="����";
			kebiao[xuanke][0][4].didian="A201";
			kebiao[xuanke][0][4].zhoushu="3~14��";
		}break;
	case'4':
		{
			kebiao[xuanke][3][3].kemu="����";
			kebiao[xuanke][3][3].didian="���س�";
			kebiao[xuanke][3][3].zhoushu="1~16��";
		}break;
	case'5':
		{
			kebiao[xuanke][3][3].kemu="����";
			kebiao[xuanke][3][3].didian="����";
			kebiao[xuanke][3][3].zhoushu="1~16��";
		}break;
	case'6':
		{
			kebiao[xuanke][3][3].kemu="����";
			kebiao[xuanke][3][3].didian="����";
			kebiao[xuanke][3][3].zhoushu="1~16��";
		}break;
	default:
		{cout<<"�������������ԣ�";
		kebiao2(haoma);}break;
	}
		{
			 ofstream outfile("�α�1.txt",ios::trunc);
		 outfile.close();
		 }
		ofstream outfile("�α�1.txt",ios::app);
	for(k=0;k<zongshu;k++)
	{
		outfile<<kebiao[k][0][0].xuehao<<endl;
	for(i=0;i<7;i++)
		{
			for(j=0;j<5;j++)
			{
				outfile<<kebiao[k][i][j].kemu<<" ";
				outfile<<kebiao[k][i][j].didian<<" ";
				outfile<<kebiao[k][i][j].zhoushu<<" ";
			}
			outfile<<endl;
		}
	}
	outfile.close ();
			
		
	}
	system("pause");
	cout<<"ѡ����ɣ����ڷ�����һ���˵�"<<endl;
	kebiao0(haoma);
}
void kebiao0(int haoma)
{
	void zhucaidan1(int haoma);
	char xuanze9;
	system("cls");
	cout << "---------------------------�γ�����---------------------------" << endl;
	cout<<"               ��ѡ����Ҫ���еĲ���"<<endl<<endl;
	cout<<"                      1.�鿴�Լ��Ŀα�"<<endl<<endl;
	cout<<"                      2.����ѡ��"<<endl<<endl;
	cout<<"                      3.�������˵�"<<endl<<endl;
	cout<<"����ѡ��";
	cin>>xuanze9;
	switch(xuanze9)
	{
	case'1':
		{kebiao1(haoma);}break;
	case'2':
		{kebiao2(haoma);}break;
	case'3':
		{cout<<"���ڷ������˵�"<<endl;
		system("pause");
			zhucaidan1(haoma);}break;
	default:
		{cout<<"�������������䣡"<<endl;
		kebiao0(haoma);}break;
		}
}
void zhucaidan1(int haoma)
{
	void denglu();
	char xuanze;
	system("cls");
		cout << "----------------------------���˵�----------------------------" << endl;
		cout << "--------------------------------------------------------------" << endl;

		cout <<"                    ��ѡ����Ҫ���еĲ�����" << endl;
		cout<<endl;
		cout<<"              a .��ѯ��Ϣ "<<"              b .�ɼ���ѯ "<<endl;
		cout<<endl;
		cout<<"              c .��ѧ���� "<<"              d .�޸����� "<<endl;              
		cout<<endl;
		cout<<"              e .�鿴��ҵ��֪ͨ"<<"         f .�γ����� "<<endl; 
		cout<<endl;
		cout<<"              g .ʹ��˵��"<<"               h. ������� "<<endl;    
		cout<<endl;
		cout<<"              i .�˳���¼"<<"               j .�˳�ϵͳ "<<endl;
		cout << "--------------------------------------------------------------" << endl;
		cout<<"����ѡ�";
		cin >> xuanze;
		switch (xuanze)
		{
 
		case 'a':
			{
				chaxun1(haoma);
			}//��ѯģ��ӿ�
			
			break; 
		case 'b':
			{
				chengji1(haoma);
				
			}//�ɼ�ģ���ѯ�ӿ�  
			break;
		case 'c':
			{
				pingjia1(haoma);
			}//��ѧ����ģ��ӿ�
			break;
		case 'd':
			{
				 mima(haoma);
			}//�˺ŷ���ģ��ӿ�
			break;
			case 'e':
			{
			
				tongzhi1(haoma);
			}//֪ͨģ���ѯ�ӿ�  
			break;
			case'f':
				{
					kebiao0(haoma);
				}break;
			case'g':
			{
				cout << "-----------------------------��------------------------------" << endl;
				cout << "--------------------------ʹ��˵��---------------------------" << endl;
				cout << "    ��ѧ����Ϣ����ϵͳ����C++���Ա�����ɣ���Ϊѧ������̹��ˣ�������ʹ�õ���ѧ���ˡ�"<<endl;
				cout << "    ѧ���˹��ܽ��ܣ�"<<endl;
				cout<<" a .��ѯ��Ϣ ���ڴ�ѡ���У������Բ鿴�Լ��ĸ�����Ϣ�����ɲ鿴�Լ���ͬ��ͬѧ��"<<endl;
				cout<<" b .�ɼ���ѯ ���ڴ�ѡ���У������Բ鿴�Ѿ������ĸ��˳ɼ���Ŀǰ�ù����ݻ����ţ���"<<endl;
				cout<<" c .��ѧ���� ���ڴ�ѡ���У������ԶԽ�ѧ��������������������ۡ�"<<endl;
				cout<<" d .�޸����� ���ڴ�ѡ���У��������޸��Լ��ĵ�¼���롣"<<endl;
				cout<<" e .�鿴��ҵ��֪ͨ ���ڴ�ѡ���У������Բ鿴�����ڴ�ϵͳ�ϵ���ҵ��֪ͨ��Ϣ��"<<endl;
				cout<<" f .�γ����� ���ڴ�ѡ���У������Բ鿴�Լ��Ŀα���߽���ѡ��......"<<endl;
				cout<<" g .�˳���¼  ��������ʹ�ø�ѡ��ע����¼�����ص�¼�������µ�¼��"<<endl;
				cout<<" h .�˳�ϵͳ  ��������ʹ�ø�ѡ���˳���ѧ����Ϣ����ϵͳ��"<<endl;
				cout<<"    Ŀǰ����ϵͳ��Ȼ�������ȱ���벻�㣬�ɴ˸�����ʹ�ô����Ĳ��㣬�������Ǹ�⡣��ϣ�����������Ƿ������Ľ����������������⣬лл��"<<endl;
				cout << "-------------------------------------------------------------" << endl;
				cout<<"0 ���ڧҧ�� �ӧ�֧� ��ڧݧ�ߧ֧�!"<<endl;
				system("pause");
				zhucaidan1(haoma);
			}
			break;//ʹ��˵��
			case'h':
			{
				fankiu(haoma);
			}break;
			case'i':
			{
				system("cls");
				denglu();
			}
			break;//�˳�
		case'j':
			{
				exit(0);
			}
			break;//�˳�
		default:
			{
				cout<<"�������������ԡ�"<<endl;
				system("pause");
				zhucaidan1(haoma);
		}			
		}

}
void zhucaidan2(int haoma)//������ʾ���˵��ĺ���
{
	void denglu();
	char xuanze;
	system("cls");
	cout << "----------------------------���˵�----------------------------" << endl;
	cout << "--------------------------------------------------------------" << endl;

		cout <<"          ��ѡ����Ҫ���еĲ�����" << endl;
		cout<<"              a .��ѯ��Ϣ "<<"              "<<"b .������Ϣ "<<endl;
		cout<<endl;
		cout<<"              c .�޸���Ϣ "<<"              "<<"d .ɾ����Ϣ "<<endl;
		cout<<endl;
		cout<<"              e .�ɼ����� "<<"              "<<"f .��ѧ���� "<<endl;
		cout<<endl;
		cout<<"              g .�޸����� "<<"              "<<"h .��Ϣά�� "<<endl;
		cout<<endl;
		cout<<"              i .��ҵ��֪ͨ����"<<endl;
		cout<<endl;
		cout<<"              j .ʹ��˵��"<<"               "<<"k .�������"<<endl;
		cout<<endl;
		cout<<"              l .�˳���¼"<<"               "<<"m .�˳�ϵͳ"<<endl;
		cout << "--------------------------------------------------------------" << endl;
		cout<<"����ѡ�";
		cin >> xuanze;
		switch (xuanze)
		{
 
		case 'a':
			{
				chaxun2(haoma);
			}//��ѯģ��ӿ�
			
			break; 
		case 'b': 
			{
				zengjia(haoma);
			}//����ģ��ӿ�
		
			break;
		case 'c': 
			{xiugai1(haoma);}
					//�޸�ģ��ӿ�
			break;
		case 'd': 
		{shanchu(haoma);}break; //ɾ��ģ��ӿ�
			
		case 'e':
			{
				chengji2(haoma);
			}//�ɼ�ģ���ѯ�ӿ�  
			break;
		case 'f':
			{
				pingjia2(haoma);
			}//��ѧ����ģ��ӿ�
			break;
				case 'g':
			{
				 mima(haoma);
			}//�˺ŷ���ģ��ӿ�
			break;
			case 'h':
			{
				weihu(haoma);
			}//��Ϣά��ģ��ӿ�
			break;
			case 'i':
			{
				tongzhi2(haoma);
			}//��ҵ��֪ͨģ��ӿ�
			break;
			case'j':
			{
				cout << "-----------------------------��------------------------------" << endl;
				cout << "--------------------------ʹ��˵��---------------------------" << endl;
				cout << "    ��ѧ����Ϣ����ϵͳ����C++���Ա�����ɣ���Ϊѧ������̹��ˣ�������ʹ�õ��ǽ̹��ˡ�"<<endl;
				cout << "    �̹��˹��ܽ��ܣ�"<<endl;
				cout<<" a .��ѯ��Ϣ ���ڴ�ѡ���У������԰�������ѧ�š��༶���Ա��ѯѧ������Ϣ��"<<endl;
				cout<<" b .������Ϣ ���ڴ�ѡ���У���������ϵͳ������ѧ������Ϣ�������档"<<endl;
				cout<<" c .�޸���Ϣ ���ڴ�ѡ���У������е�ѧ����Ϣ�����޸ġ�"<<endl;;
				cout<<" d .ɾ����Ϣ ���ڴ�ѡ���У�������ɾ�����е�ѧ����Ϣ��"<<endl;;
				cout<<" e .�ɼ����� ���ڴ�ѡ���У�����ѯѧ���ĳɼ���Ŀǰ�ù����ݻ����ţ���"<<endl; ;
				cout<<" f .��ѧ���� ���ڴ�ѡ���У������Բ鿴ѧ���Խ�ѧ����������������ۡ�"<<endl;;
				cout<<" g .�޸����� ���ڴ�ѡ���У��������޸��Լ��ĵ�¼���롣"<<endl;;
				cout<<" h .��Ϣά�� ���ڴ�ѡ���У��������Զ��������ѧ����Ϣ���Ƿ����ѧ���ظ���ѧ�����Դ�����Ϣ���Է�����Ϣά�����޸ģ��������������˻�������"<<endl;
				cout<<" i .��ҵ��֪ͨ�������ڴ�ѡ���У����������Ӧ���˻��巢����ҵ��֪ͨ��"<<endl;
				cout<<" k .�˳���¼��������ʹ�ø�ѡ��ע����¼�����ص�¼�������µ�¼��"<<endl;
				cout<<" l .�˳�ϵͳ��������ʹ�ø�ѡ���˳���ѧ����Ϣ����ϵͳ��"<<endl;
				cout<<"    Ŀǰ����ϵͳ��Ȼ�������ȱ���벻�㣬�ɴ˸�����ʹ�ô����Ĳ��㣬�������Ǹ�⡣��ϣ�����������Ƿ������Ľ����������������⣬лл��"<<endl;
				cout << "-------------------------------------------------------------" << endl;
				cout<<"0 ���ڧҧ�� �ӧ�֧� ��ڧݧ�ߧ֧�!"<<endl;
				system("pause");
				zhucaidan1(haoma);
			}
			break;//ʹ��˵��
			case'k':
				{
					fankiu(haoma);
				}break;
		case'l':
		{
			system("cls");
			denglu();
		}
			break;//�˳�
			case'm':
		{
				exit(0);
			}
			break;//�˳�
		default:
			{
				cout<<"�������������ԡ�"<<endl;
				system("pause");
				zhucaidan2(haoma);
		}			
		}

}
void denglu()//���ڵ�¼���˶��˻�����ĺ���
{
	int renshu;
	int sign;
	
	int zhuangkuang=0;
	int haoma;
	string mima;
	int i;
	user yonghu[50];
	system("cls");
	cout << "-----------------------------���¼-----------------------------" << endl;//��¼����
	ifstream infile("password1.txt",ios::in);//���������ļ�����"password1.txt"
	if(!infile)
	{
	zhuangkuang=3;
	}
    student stu[50];    
	for(i=0;i<50;i++)
		{
			infile>>yonghu[i].account;
            infile>>yonghu[i].password;
            infile>>yonghu[i].type;
			if(yonghu[i].account<0)
			{
				renshu=i-1;
			break;
			}
		}
	{
		ifstream infile("student1.txt",ios::in);//���������ļ�����"student.txt"
		if(!infile)
		{
			sign=3;
		}
	infile.close();
	}
	if(zhuangkuang==3)
	{cout<<"��ǰϵͳ�����û���Ϣ��"<<endl;
	cout<<"�����˳�ϵͳ"<<endl;
	system("pause");
	}
	else 
	{
	cout<<endl;
	cout<<"              ������ѧ�Ż򹤺ţ�";
	cin>>haoma;
	cout<<endl;
	cout<<"              ���������룺";
	cin>>mima;
	for(i=0;i<=renshu;i++)
	{
	if(haoma==yonghu[i].account&&mima==yonghu[i].password&&yonghu[i].type==1)
	{
	cout << "---------------------------��¼�ɹ�---------------------------" << endl;
	if(sign==3)
	{
	cout<<"��ʾ������ѧ����Ϣ���ļ������ڣ�����ϵ����Ա�������˳�ϵͳ��"<<endl;
	zhuangkuang=2;
	system("pause");
	}
	else
	{
	zhuangkuang=1;
	zhucaidan1(haoma);
	}
	}
	else if(haoma==yonghu[i].account&&mima==yonghu[i].password&&yonghu[i].type==2)
	{
	cout << "---------------------------��¼�ɹ�---------------------------" << endl;
	zhuangkuang=1;
	zhucaidan2(haoma);}
	}
	if(zhuangkuang==0)
	cout<<"�˺Ż�������������ԣ�"<<endl;
	system("pause");
	denglu();
	}
}
int main()
{
	cout << "--------------------��ӭ����ѧ����Ϣ����ϵͳ--------------------" << endl;
	denglu();	
return 0;
}