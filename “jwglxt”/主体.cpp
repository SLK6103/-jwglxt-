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
void zengjia(int haoma)/*手动增加学生信息的函数*/
{
	void zhucaidan2(int haoma);
	char xuanze2;//供 switch 选择的变量
	student stu;
	student stud[50];
	int sign=0;
	int i;
	int zongshu1;
	system("cls");
	cout << "---------------------------增加信息---------------------------" << endl;
	cout<<"请输入学生姓名：";//手动逐个输入学生信息
    cin>>stu.stu_name;
	cout<<"请输入学生学号：";
	cin>>stu.stu_num;
	cout<<"请输入学生性别：";
	cin>>stu.stu_sex; 
	cout<<"请输入学生出生日期：";
    cin>>stu.stu_birthday;
    cout<<"请输入学生民族：";
	cin>>stu.stu_mingzu;
	cout<<"请输入学生的籍贯：";
    cin>>stu.stu_dizhi;
	cout<<"请输入学生的所在班级：";
    cin>>stu.stu_class;
	cout<<"请输入学生的联系方式：";
    cin>>stu.stu_phone;
    cout<<"输入完成，请确认您所输入的信息："<<endl;
	cout<<"姓名	学号		性别	出生日期  民族	籍贯	 班级	  联系方式"<<endl;
		cout<<stu.stu_name<<"	";
		cout<<stu.stu_num<<"	";
		cout<<stu.stu_sex<<"	";
		cout<<stu.stu_birthday<<"  ";
		cout<<stu.stu_mingzu<<"	";
		cout<<stu.stu_dizhi<<" ";
		cout<<stu.stu_class<<"  ";
		cout<<stu.stu_phone<<" ";
	cout<<endl;
	{ifstream infile("student1.txt",ios::in);//定义输入文件，打开"student.txt"
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
		
		cout<<"您输入的学号信息与已有信息重复，请重输"<<endl;
		system("pause");
		zengjia(haoma);
	}
	else
	{
	cout << "--------------------------------------------------------------" << endl;
	cout<<"若您确认以上信息无误，请输入“1”保存；若信息有误或您不想保存，现在输入除“1”外任意字符返回主菜单"<<endl;
	cout << "--------------------------------------------------------------" << endl;
	cout<<"您的选项：";
	cin>>xuanze2;
	switch(xuanze2)
	{
	case'1':
		{
		ofstream outfile("student1.txt",ios::app);//定义输出文件，打开"student.txt"
		if(!outfile)
		{
			cout<<"抱歉，操作失败！"<<endl;//无法打开或生成文件时提示操作失败
				break;
		}
		 else
		 {
			outfile<<endl;
			outfile<<stu.stu_name<<"	";//生成文件或向已有文件末尾输入新的信息
            outfile<<stu.stu_num<<"	";
            outfile<<stu.stu_sex<<"		";
			outfile<<stu.stu_birthday<<"	";
            outfile<<stu.stu_mingzu<<"	";
            outfile<<stu.stu_dizhi<<"	";
			outfile<<stu.stu_class<<"	";
            outfile<<stu.stu_phone<<"	";
			cout<<"已将您输入的信息保存到硬盘上。"<<endl;
			system("pause");
			outfile.close();//关闭文件
			}
			{ofstream outfile("password1.txt",ios::app);//定义输出文件，打开"password1.txt"
		 if(!outfile)
			{
			cout<<"抱歉，无法生成新账户！"<<endl;//无法打开或生成文件时提示操作失败
				break;
			}
			{
			outfile<<endl;
			 outfile<<stu.stu_num<<"	";
			 outfile<<1<<"	";
			 outfile<<1<<"	";
			 
			}
			outfile.close();}//关闭文件
		 cout<<"已生成对应的新账户"<<endl;
		 system("pause");
		

		 
			}break;
	default:
		{cout<<"输入的信息未被保存，即将返回主菜单。"<<endl;
		system("pause");
	
	}break;}
	}
	cout<<"请选择您要进行的操作："<<endl;
	cout<<"1.继续增加 （其他任意键）返回主菜单"<<endl;
	cout<<"您的选择："<<endl;
	cin>>xuanze2;
	if(xuanze2=='1')
		zengjia(haoma);
	else
		zhucaidan2(haoma);

}
void chaxun1(int haoma)
{
void zhucaidan1(int haoma);
char xuanze1;//供 switch 选择的变量
int sign=1;
int zongshu1;
int i;
int weizhi;
int sum=0;
string banji;
system("cls");
	ifstream infile("student1.txt",ios::in);//定义输入文件，打开"student.txt"
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
	cout << "---------------------------查询信息---------------------------" << endl;
	if(sign==3)
		{
		cout<<"包含学生信息的文件不存在，现在无法查询！请联系管理员。"<<endl;
		cout<<"现在返回主菜单"<<endl;
		zhucaidan1(haoma);
		}
	else if (sign==1)
					{
						cout<<"抱歉，没有找到您的信息，请向管理员反映。"<<endl;//查不到时，反馈
						 system("pause");
						 zhucaidan1(haoma);
					}
	else
			{
			cout<<"请选择查询方式"<<endl;
			cout<<"1.查询自己的信息"<< endl;
			cout<<"2.查询自己的同班同学"<< endl;
			cout<<"3.返回上一级菜单"<<endl;
			cout << "--------------------------------------------------------------" << endl;
			cout<<"您的选项：";
			cin>>xuanze1;
			cout << "--------------------------------------------------------------" << endl;
			switch(xuanze1)
			{
			case '1':
			{
					cout << "---------------------------查询结果---------------------------" << endl;
					cout<<"姓名	学号		性别	出生日期  民族	籍贯	 班级	  联系方式"<<endl;
					cout<<stu[weizhi].stu_name<<"	";//输出查询结果
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
					cout << "---------------------------查询结果---------------------------" << endl;
					cout<<"姓名	学号		性别	出生日期  民族	籍贯	 班级	  联系方式"<<endl;
					for(i=0;i<=zongshu1;i++)
					{   
					if (stu[i].stu_class==stu[weizhi].stu_class)
					{
					sum=sum+1;
					cout<<stu[i].stu_name<<"	";//输出查询结果
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
					
				}cout<<"您共有同班同学"<<sum<<"人"<<endl;
					if(sign==1)
					{
						cout<<"未查到您所在的班级。"<<endl;//查不到时，反馈
						 system("pause");
						 zhucaidan1(haoma);
					}
					
					system("pause");
					
				}break;
			}

	}
	cout<<"请选择您要进行的操作："<<endl;
	cout<<"1.继续查询 （其他任意键）返回主菜单"<<endl;
	cout<<"您的选择："<<endl;
	cin>>xuanze1;
	if(xuanze1=='1')
		chaxun1(haoma);
	else
		zhucaidan1(haoma);
}
void chaxun2(int haoma)/*从文件自动读取并可查询学生信息的函数*/
{   
void zhucaidan2(int haoma);
char xuanze1;//供 switch 选择的变量
string name;//存储输入的用于查询的姓名
int num;//存储输入的用于查询的学号
int sign=1;//用于判断执行情况的变量
string sex;
string banji;
int i;
int zongshu1;
int sum=0;
system("cls");
	ifstream infile("student1.txt",ios::in);//定义输入文件，打开"student.txt"
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
	cout << "---------------------------查询信息---------------------------" << endl;
	if(sign==3)
	{
		cout<<"包含学生信息的文件不存在，现在无法查询！请先增加信息后再查询。"<<endl;
		cout<<"现在返回主菜单"<<endl;

	}
	else
	{
			cout<<"                       请选择查询方式"<<endl<<endl;
			cout<<"                         1.按姓名查询"<< endl<<endl;
			cout<<"                         2.按学号查询"<< endl<<endl;
			cout<<"                         3.按班级查询"<< endl<<endl;
			cout<<"                         4.按性别查询"<< endl<<endl;
			cout<<"                         5.返回上一级菜单"<<endl<<endl;
			cout << "--------------------------------------------------------------" << endl;
			cout<<"您的选项：";
			cin>>xuanze1;
			cout << "--------------------------------------------------------------" << endl;
			switch(xuanze1)
			{
			case '1':
			{	
				cout<<"请输入学生姓名"<<endl;
				cin>>name;
				for(i=0;i<=zongshu1;i++)
				{ 
					if (stu[i].stu_name==name)
					{
				    cout << "---------------------------查询结果---------------------------" << endl;
					cout<<"姓名	学号		性别	出生日期  民族	籍贯	 班级	  联系方式"<<endl;
					cout<<stu[i].stu_name<<"	";//输出查询结果
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
						cout<<"查无此人,现在返回主菜单！"<<endl;//查不到时，反馈
						 system("pause");
						 
					}
			}break;


			case '2':
				{cout<<"请输入学生学号"<<endl;
				cin>>num;
				for(i=0;i<=zongshu1;i++)
				{   
					if (stu[i].stu_num==num)
					{
					cout << "---------------------------查询结果---------------------------" << endl;
					cout<<"姓名	学号		性别	出生日期  民族	籍贯	 班级	  联系方式"<<endl;
					cout<<stu[i].stu_name<<"	";//输出查询结果
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
						cout<<"查无此人！"<<endl;//查不到时，反馈
						 system("pause");
						 
					}break;
				}break;
			case '3':
				{
					cout<<"请输入要查找的班级"<<endl;
					cin>>banji;
					cout << "---------------------------查询结果---------------------------" << endl;
					cout<<"姓名	学号		性别	出生日期  民族	籍贯	 班级	  联系方式"<<endl;
						for(i=0;i<=zongshu1;i++)
				{   
					if (stu[i].stu_class==banji)
					{
					sum=sum+1;
					cout<<stu[i].stu_name<<"	";//输出查询结果
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
				}cout<<"共有该班级学生"<<sum<<"人"<<endl;
					if(sign==1)
					{
						cout<<"没有该班级的学生或您的输入错误。"<<endl;//查不到时，反馈
						 system("pause");
						 
					}break;
				cout<<"共有该班级学生"<<sum<<"人"<<endl;}break;
			case '4':
				{
					cout<<"请输入您要查询的性别"<<endl;
					cin>>sex;
					cout << "---------------------------查询结果---------------------------" << endl;
					cout<<"姓名	学号		性别	出生日期  民族	籍贯	 班级	  联系方式"<<endl;
						for(i=0;i<=zongshu1;i++)
				{   
					if (stu[i].stu_sex==sex)
					{
						sum=sum+1;
					cout<<stu[i].stu_name<<"	";//输出查询结果
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
				}cout<<"共有该性别学生"<<sum<<"人"<<endl;
					if(sign==1)
					{
						cout<<"没有该性别的学生或您的输入错误。"<<endl;//查不到时，反馈
						 system("pause");
						
					}break;
				}break;


			case '5':
				{zhucaidan2(haoma);}break;
			default:
				{
					cout<<"您的输入有误，现在返回主菜单。"<<endl;
				zhucaidan2(haoma);
				}
				break;

	}
	}
infile.close();
cout << "--------------------------------------------------------------" << endl;
	cout<<"                     请选择您要进行的操作："<<endl<<endl;
	cout<<"                           1.继续查询 "<<endl<<endl;
		cout<<"                     （其他任意键）返回主菜单"<<endl<<endl;
	cout<<"您的选择："<<endl;
	cin>>xuanze1;
	if(xuanze1=='1')
		chaxun2(haoma);
	else
		zhucaidan2(haoma);
}
void xiugai1(int haoma)//修改函数,利用了查询函数的一部分
{
void zhucaidan2(int haoma);
char xuanze3;//供 switch 选择的变量
string name;//存储输入的用于查询的姓名
int num;//存储输入的用于查询的学号
int sign=1;//用于判断执行情况的变量
int beixiugai;
int i;
int zongshu3;
student xiugai;
system("cls");
	ifstream infile("student1.txt",ios::in);//定义输入文件，打开"student.txt"
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
	cout << "---------------------------查对信息---------------------------" << endl;
	if(sign==3)
	{
		cout<<"包含学生信息的文件不存在，现在无法查对！请先增加信息后再查询。"<<endl;
		cout<<"现在返回主菜单"<<endl;

	}
	else
	{
			cout<<"                  请选择查对方式"<<endl;
			cout<<"                    1.按姓名查对" <<endl<<endl;
			cout<<"                    2.按学号查对"<<endl<<endl; 
			cout<<"                    3.退出"<<endl<<endl;
			cout << "--------------------------------------------------------------" << endl;
			cout<<"您的选项：";
			cin>>xuanze3;
			cout << "--------------------------------------------------------------" << endl;
			switch(xuanze3)
			{
			case '1':
			{	
				/*cout<<"抱歉，该功能暂缓开放。"<<endl;
				system("pause");
				zhucaidan2g();
			}break;*/
				cout<<"请输入学生姓名"<<endl;
				cin>>name;
				for(i=0;i<=zongshu3;i++)
				{ 
					if (stu[i].stu_name==name)
					{
					beixiugai=i;
				    cout << "---------------------------查对结果---------------------------" << endl;
					cout<<"姓名	学号		性别	出生日期  民族	籍贯	 班级	  联系方式"<<endl;
					cout<<stu[i].stu_name<<"	";//输出查询结果
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
						cout<<"查无此人,现在返回主菜单！"<<endl;//查不到时，反馈
						 system("pause");
						 zhucaidan2(haoma);
					}}break;


			case '2':
				{cout<<"请输入学生学号"<<endl;
				cin>>num;
				for(i=0;i<=zongshu3;i++)
				{   
					if (stu[i].stu_num==num)
					{
					beixiugai=i;
					cout << "---------------------------查对结果---------------------------" << endl;
					cout<<"姓名	学号		性别	出生日期  民族	籍贯	 班级	  联系方式"<<endl;
					cout<<stu[i].stu_name<<"	";//输出查询结果
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
						cout<<"查无此人,现在返回主菜单！"<<endl;//查不到时，反馈
						 system("pause");
						 zhucaidan2(haoma);
					}break;
				}break;

			case '3':
				{zhucaidan2(haoma);}break;
			default:
				{
				cout<<"您的输入有误，现在返回主菜单。"<<endl;
				zhucaidan2(haoma);
				}break;

	}
	}
//查对部分完毕
	if(xuanze3=='1'||xuanze3=='2')
	{
	cout << "---------------------------修改信息---------------------------" << endl;
	cout<<"请选择修改方式"<<endl<<"1.单个修改"<<endl<<"（其他任意键）.全部修改"<<endl;
	cin>>xuanze3;
	if(xuanze3=='2')
	{cout<<"请输入学生姓名"<<endl;//手动逐个输入学生信息
    cin>>xiugai.stu_name;
	cout<<"请输入学生学号"<<endl;
	cin>>xiugai.stu_num;
	cout<<"请输入学生性别"<<endl;
	cin>> xiugai.stu_sex; 
	cout<<"请输入学生出生日期"<<endl;
    cin>> xiugai.stu_birthday;
    cout<<"请输入学生民族"<<endl;
	cin>> xiugai.stu_mingzu;
	cout<<"请输入学生的籍贯"<<endl;
    cin>> xiugai.stu_dizhi;
	cout<<"请输入学生的所在班级"<<endl;
    cin>> xiugai.stu_class;
	cout<<"请输入学生的联系方式"<<endl;
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
		cout<<"您要修改"<<endl;
		cout<<"1.姓名 2.性别 3.出生日期 4.民族 5.籍贯 6.班级 7.联系方式"<<endl;
		cin>>xuanze3;
		if(xuanze3=='1')
		{
			cout<<"请输入学生姓名"<<endl;//手动逐个输入学生信息
			cin>>xiugai.stu_name;
			stu[beixiugai].stu_name=xiugai.stu_name;
		}
		if(xuanze3=='2')
		{
			cout<<"请输入学生性别"<<endl;
			cin>> xiugai.stu_sex; 
			stu[beixiugai].stu_sex=xiugai.stu_sex;
		}
		if(xuanze3=='3')
		{
			cout<<"请输入学生出生日期"<<endl;
			cin>> xiugai.stu_birthday;
			stu[beixiugai].stu_birthday=xiugai.stu_birthday;
		}
		if(xuanze3=='4')
		{
			cout<<"请输入学生民族"<<endl;
			cin>> xiugai.stu_mingzu;
			stu[beixiugai].stu_mingzu=xiugai.stu_mingzu;
		}
		if(xuanze3=='5')
		{
			cout<<"请输入学生的籍贯"<<endl;
			cin>> xiugai.stu_dizhi;
			stu[beixiugai].stu_dizhi=xiugai.stu_dizhi;
		}
			if(xuanze3=='6')
		{
			cout<<"请输入学生的所在班级"<<endl;
			cin>> xiugai.stu_class;
			stu[beixiugai].stu_class=xiugai.stu_class;
		}
				if(xuanze3=='7')
		{
			cout<<"请输入学生的联系方式"<<endl;
			cin>> xiugai.stu_phone;
			stu[beixiugai].stu_phone=xiugai.stu_phone;
		}
				else
					cout<<"您的选择有误"<<endl;
	}
	cout<<"输入完成，请确认您所输入的信息："<<endl;
	cout << "--------------------------------------------------------------" << endl;
	cout<<"姓名	学号		性别	出生日期  民族	籍贯	 班级	  联系方式"<<endl;
		cout<< stu[beixiugai].stu_name<<"	";
		cout<< stu[beixiugai].stu_num<<"	";
		cout<< stu[beixiugai].stu_sex<<"	";
		cout<< stu[beixiugai].stu_birthday<<"  ";
		cout<< stu[beixiugai].stu_mingzu<<"	";
		cout<< stu[beixiugai].stu_dizhi<<" ";
		cout<< stu[beixiugai].stu_class<<"  ";
		cout<< stu[beixiugai].stu_phone<<" ";
	cout<<endl;
	cout<<"若您确认以上信息无误，请输入“1”保存；若信息有误或您不想保存，现在输入除“1”外任意字符返回主菜单"<<endl;
	cout << "--------------------------------------------------------------" << endl;
	cout<<"您的选项：";
	cin>>xuanze3;
	switch(xuanze3)
	{
	case'1':{
		
		 
		 {
			 ofstream outfile("student1.txt",ios::trunc);
		 outfile.close();
		 }
		ofstream outfile("student1.txt",ios::app);//定义输出文件，打开"student.txt"
	
		 
			 for(i=0;i<=zongshu3;i++)//
			 {
			
			outfile<<stu[i].stu_name<<"	";//生成文件或向已有文件末尾输入新的信息
            outfile<<stu[i].stu_num<<"	";
            outfile<<stu[i].stu_sex<<"		";
			outfile<<stu[i].stu_birthday<<"	";
            outfile<<stu[i].stu_mingzu<<"	";
            outfile<<stu[i].stu_dizhi<<"	";
			outfile<<stu[i].stu_class<<"	";
            outfile<<stu[i].stu_phone<<"	";
			outfile<<endl;
			 }//
			cout<<"已将您输入的信息保存到硬盘上。"<<endl;
			outfile.close();//关闭文件
			system("pause");
	//	 }
		 
			}break;
	default:
		{cout<<"输入的信息未被保存，即将返回主菜单。"<<endl;
		system("pause");
		}break;
		}
	}
	cout << "--------------------------------------------------------------" << endl;
	cout<<"         您现在需要："<<endl<<endl;
	cout<<"                   1.回到上一级菜单"<<endl<<endl; 
	cout<<"                   （其他任意键）.回到主菜单"<<endl<<endl;
	cout<<"您的选择：";
	cin>>xuanze3;
	if(xuanze3=='1')
		xiugai1(haoma);
	else
		zhucaidan2(haoma);
}
void shanchu(int haoma)//用于删除信息的函数
{
void zhucaidan2(int haoma);
char xuanze4;//供 switch 选择的变量
string name;//存储输入的用于查询的姓名
int num;//存储输入的用于查询的学号
int sign=1;//用于判断执行情况的变量
int beishanchu;
int beishanchu1;
int i;
int zongshu4;
int renshu;
user yonghu[50];
 student stu[50];
 system("cls");
	ifstream infile("student1.txt",ios::in);//定义输入文件，打开"student.txt"
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
	cout << "---------------------------查对信息---------------------------" << endl;
	if(sign==3)
	{
		cout<<"包含学生信息的文件不存在，现在无法查询！请先增加信息后再查询。"<<endl;
		cout<<"现在返回主菜单"<<endl;

	}
	else
	{
			cout<<"                   请选择查询方式"<<endl<<endl;
			cout<<"                      1.按姓名查询"<< endl<<endl;
			cout<<"                      2.按学号查询"<< endl<<endl;
			cout<<"                      3.退出"<<endl<<endl;
			cout << "--------------------------------------------------------------" << endl;
			cout<<"您的选项：";
			cin>>xuanze4;
			cout << "--------------------------------------------------------------" << endl;
			switch(xuanze4)
			{
			case '1':
			{	
				/*cout<<"抱歉，该功能暂缓开放。"<<endl;
				system("pause");
				zhucaidan2g();
			}break;*/
				cout<<"请输入学生姓名"<<endl;
				cin>>name;
				for(i=0;i<=zongshu4;i++)
				{  
					if (stu[i].stu_name==name)
					{
					beishanchu=i;
				    cout << "---------------------------查询结果---------------------------" << endl;
					cout<<"姓名	学号		性别	出生日期  民族	籍贯	 班级	  联系方式"<<endl;
					cout<<stu[i].stu_name<<"	";//输出查询结果
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
						cout<<"查无此人,现在返回主菜单！"<<endl;//查不到时，反馈
						 system("pause");
						 zhucaidan2(haoma);
					}}break;


			case '2':
				{cout<<"请输入学生学号"<<endl;
				cin>>num;
				for(i=0;i<=zongshu4;i++)
				{   
					if (stu[i].stu_num==num)
					{
					beishanchu=i;
					cout << "---------------------------查对结果---------------------------" << endl;
					cout<<"姓名	学号		性别	出生日期  民族	籍贯	 班级	  联系方式"<<endl;
					cout<<stu[i].stu_name<<"	";//输出查询结果
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
						cout<<"查无此人,现在返回主菜单！"<<endl;//查不到时，反馈
						 system("pause");
						 zhucaidan2(haoma);
					}break;
				}break;

			case '3':
				{zhucaidan2(haoma);}break;
			default:
				{
					cout<<"您的输入有误，现在返回主菜单。"<<endl;
					zhucaidan2(haoma);
				}break;

	}
	}
	
infile.close();//查对部分完毕
if(xuanze4=='1'||xuanze4=='2')
{
cout<<"您确定要删除这名学生的信息吗？"<<endl;
cout<<"若您确定删除这名学生的信息，请输入“1”，否则现在输入除“1”外任意字符返回主菜单"<<endl;
	cout << "--------------------------------------------------------------" << endl;
	cout<<"您的选项：";
	cin>>xuanze4;
	switch(xuanze4)
	{
	case'1':{
		 {ofstream outfile("student1.txt",ios::trunc);
		 outfile.close();}
		 {	ofstream outfile("student1.txt",ios::app);//定义输出文件，打开"student.txt"
		
		 
			 for(i=0;i<beishanchu;i++)//
			 {
			
			outfile<<stu[i].stu_name<<"	";//生成文件或向已有文件末尾输入新的信息
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
			outfile<<stu[i].stu_name<<"	";//生成文件或向已有文件末尾输入新的信息
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
			cout<<"已将这名学生的信息删除。"<<endl;
			outfile.close();//关闭文件
			system("pause");
	{ifstream infile("password1.txt",ios::in);//定义输入文件，打开"password1.txt"   
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
		cout<<"已将这名学生的账户删除。"<<endl;
		 outfile.close();}
			system("pause");
		;}break;
	default:
		{cout<<"该学生的信息未被删除。"<<endl;
		system("pause");
		
		}break;
		}
	}
	cout << "--------------------------------------------------------------" << endl;
	cout<<"           请选择您要进行的操作："<<endl<<endl;
	cout<<"                              1.继续删除"<<endl<<endl; 
	cout<<"                             （其他任意键）返回主菜单"<<endl<<endl;
	cout<<"您的选择：";
	cin>>xuanze4;
	if(xuanze4=='1')
		shanchu(haoma);
	else
		zhucaidan2(haoma);
}
void pingjia1(int haoma)//用于进行留言评价的函数
{
	void zhucaidan1(int haoma);
	string liuyan;
	char xuanze3;
	system("cls");
	cout<<"-------------------------教学留言评价-------------------------"<<endl;
	cout<<"现在，你可以输入您对教学的留言评价（匿名的）"<<endl;
	cout<<"：";
	cin>>liuyan;
	cout<<"您是否要保存您的留言？输入“1”保存，输入其他任意字符不保存退出"<<endl;
	cin>>xuanze3;
	switch(xuanze3)
	{
	case'1':{
		ofstream outfile("评价.txt",ios::app);//定义输出文件，打开"student.txt"
		if(!outfile)
		{
			cout<<"抱歉，操作失败！"<<endl;//无法打开或生成文件时提示操作失败
				break;
		}
		 else
		 {	
			outfile<<1<<" ";
			outfile<<liuyan;
			outfile<<endl;//生成文件或向已有文件末尾输入新的信息
			cout<<"已将您输入的信息保存到硬盘上。"<<endl;
		 }
			system("pause");
			outfile.close();//关闭文件
			zhucaidan1(haoma);
			}break;
	default:
		{
			cout<<"输入的信息未被保存，即将返回主菜单。"<<endl;
		system("pause");
		zhucaidan1(haoma);
		}break;
}
}
void pingjia2(int haoma)//用于查看留言评价的函数
{
	void zhucaidan2(int haoma);
	int i;
	int zongshu;
	int sign=0;
	string pingjia[50];
	int a[50];
	system("cls");
	ifstream infile("评价.txt",ios::in);//定义输入文件，打开"评价.txt"
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
	cout<<"-------------------------教学留言评价-------------------------"<<endl;
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
	char xuanze8;//供 switch 选择的变量
	int sign=0;
	int zongshu8;
	int account;
	system("cls");
	cout << "---------------------------信息维护---------------------------" << endl;
	cout<<"                 请选择您要进行的操作"<<endl;
	cout<<"                        1.重复无效错误信息检查"<< endl;
	cout<<"                        2.密码重置"<<endl;
	cin>>xuanze8;
	switch(xuanze8)
	{
			case'1':
{
		student stu[50]; 
		ifstream infile("student1.txt",ios::in);//定义输入文件，打开"student.txt"
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
		cout<<"包含学生信息的文件不存在，现在无法检查！请先增加信息后再检查。"<<endl;
		cout<<"现在返回主菜单"<<endl;
	}
	if(sign!=3)
	{
		for(i=0;i<=zongshu8;i++)
		{
			for(j=i+1,sign=0;j<=zongshu8;j++)
				{
				if(stu[j].stu_num==stu[i].stu_num)
					{
						cout<<stu[j].stu_name<<"	";//输出查询结果
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
				cout<<stu[i].stu_name<<"	";//输出查询结果
				cout<<stu[i].stu_num<<"	";
				cout<<stu[i].stu_sex<<"	";
				cout<<stu[i].stu_birthday<<"  ";
				cout<<stu[i].stu_mingzu<<"	";
				cout<<stu[i].stu_dizhi<<" ";
				cout<<stu[i].stu_class<<"  ";
				cout<<stu[i].stu_phone<<" ";
				cout<<endl;
				cout<<"以上信息的学号相同"<<endl;
				cout<<"--------------------------------------------------------------"<<endl;
			}
		}
	}
	for(i=0;i<=zongshu8;i++)
	{
		if(stu[i].stu_num>2017119999||stu[i].stu_num<=2012000000)
			{
				cout<<stu[i].stu_name<<"	";//输出查询结果
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
				cout<<"以上学生信息中学号明显错误"<<endl;
				cout<<"--------------------------------------------------------------"<<endl;
			}
			if(sign==1||sign==2)
			{
				cout<<"强烈建议您对上述错误信息进行修改或删除！"<<endl;
				cout<<"请选择操作方式"<<endl;
				cout<<"1.修改信息"<< endl;
				cout<<"2.删除信息 "<< endl;
				cout<<"（其他任意键）.回到主菜单 "<<endl;
				cout<<"您的选择：";
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
						cout<<"未进行任何修改，现在回到主菜单"<<endl;
						system("pause");
						zhucaidan2(haoma);
					}
				}
			}
			else
			{
				cout<<"未检出错误"<<endl;
				system("pause");
				zhucaidan2(haoma);
			}

}//case1
			case'2':
{
	 
		{ifstream infile("password1.txt",ios::in);//定义输入文件，打开"student.txt"
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
		cout<<"包含学生信息的文件不存在，现在无法检查！请先增加信息后再检查。"<<endl;
		cout<<"现在返回主菜单"<<endl;
		system("pause");
		}
		if(sign!=3)
	{
		cout<<"请输入要重置账户的账号：";
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
			cout<<"未找到该人信息。现在回到主菜单。"<<endl;
			system("pause");
		}
		if(sign==1)
		{	cout<<"您确定要重置"<<"	"<<yonghu[i].account<<"	"<<"的密码为“1”吗？"<<endl;
			cout<<"输入“1”确认，输入其他任意字符取消。"<<endl;
			cin>>xuanze8;
			switch(xuanze8)
			case'1':
			{
				yonghu[beichongzhi].password='1';
				 {
					ofstream outfile("password1.txt",ios::trunc);
					outfile.close();
				 }
				ofstream outfile("password1.txt",ios::app);//定义输出文件，打开"student.txt"
				for(i=0;i<=zongshu8;i++)//
				{	
				outfile<<yonghu[i].account<<"	";
				outfile<<yonghu[i].password<<"	";
				outfile<<yonghu[i].type<<"	";
				outfile<<endl;
				}//
				outfile.close();
				cout<<"密码重置成功！"<<endl;
				cout<<"现在回到主菜单。"<<endl;
				system("pause");
				outfile.close();//关闭文件
				//system("pause");
			}break;
			default:
			{
				cout<<"未对其密码进行任何操作。"<<endl;
				system("pause");
				zhucaidan2(haoma);
			}break;
		}
		zhucaidan2(haoma);
	}
}//case2



	//default:
		//	{
			//	cout<<"未对其密码进行任何操作。"<<endl;
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
	cout << "---------------------------修改密码---------------------------" << endl;
	cout<<"您的账号为："<<haoma<<endl;
	ifstream infile("password1.txt",ios::in);//定义输入文件，打开"password1.txt"   
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
	cout<<"请输入原来的密码：";
	cin>>password;
	cout<<endl;
	for(;password!=yonghu[xiugai].password;i++)
	{
		cout<<"原密码输入错误！"<<endl;
		cout<<"请输入原来的密码：";
		cin>>password;
		cout<<endl;
	}
	cout<<"请输入新的密码：";
	cin>>password1;
	cout<<endl;
	cout<<"请再次输入密码：";
	cin>>password2;
	cout<<endl;
	for(;password1!=password2;i++)
	{
		cout<<"您输入的两次密码不相同！"<<endl;
		cout<<"请输入原来的密码：";
		cin>>yonghu[xiugai].password;
		cout<<endl;
		cout<<"请输入新的密码：";
		cin>>password1;
		cout<<endl;
		cout<<"请再次输入密码：";
		cin>>password2;
		cout<<endl;
	}
	yonghu[xiugai].password=password1;
	 {
			 ofstream outfile("password1.txt",ios::trunc);
		 outfile.close();
		 }
		ofstream outfile("password1.txt",ios::app);//定义输出文件，打开"student.txt"
		 for(i=0;i<=renshu;i++)//
			 {	
			outfile<<yonghu[i].account<<"	";
            outfile<<yonghu[i].password<<"	";
            outfile<<yonghu[i].type<<"	";
			outfile<<endl;
			 }//
			cout<<"密码修改成功，请牢记您的新密码！"<<endl;
			cout<<"现在回到主菜单。"<<endl;
			outfile.close();//关闭文件
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
cout << "--------------------------作业与通知--------------------------" << endl;
	{ifstream infile("student1.txt",ios::in);//定义输入文件，打开"student.txt"
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
	ifstream infile("通知1.txt",ios::in);//定义输入文件，打开"student.txt"
	if(!infile)
	{
	sign=3;
	cout<<"未发布任何作业与通知"<<endl;
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
			cout<<type[i]<<"："<<endl;
			cout<<"    "<<neirong[i]<<endl;
			cout<<"--------------------------------------------------------------"<<endl;
			sign=0;
		}
		}
	}
	infile.close();
	if(sign==1)
	{cout<<"无任何与您有关的作业与通知。"<<endl;}
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
	cout << "------------------------发布作业与通知------------------------" << endl;
	cout<<"选择发布内容类型："<<endl;
	cout<<" 1. 作业"<<endl;
	cout<<" 2. 通知"<<endl;
	cout<<" 3. 其他"<<endl;
	cout<<"（其他任意字符）退出"<<endl;
	cin>>xuanze9;
	switch(xuanze9)
	{
	case'1':
		{
			type="作业";
			cout<<"请输入发布对象：";
			cin>> duixiang;
			cout<<"请输入发布内容：";
			cin>>neirong;
			ofstream outfile("通知1.txt",ios::app);//定义输出文件，打开"通知1.txt"
			if(!outfile)
			{
			cout<<"抱歉，操作失败！"<<endl;//无法打开或生成文件时提示操作失败
				break;
			}
			else
			{
			outfile<<duixiang<<"	";
			outfile<<type<<"	";//生成文件或向已有文件末尾输入新的信息
            outfile<<neirong<<"	";
			cout<<"已将您输入的信息保存到硬盘上。"<<endl;
			system("pause");
			outfile.close();//关闭文件
			}
		}break;
			case'2':
		{
			type="通知";
			cout<<"请输入发布对象：";
			cin>> duixiang;
			cout<<"请输入发布内容：";
			cin>>neirong;
			ofstream outfile("通知1.txt",ios::app);//定义输出文件，打开"通知1.txt"
			if(!outfile)
			{
			cout<<"抱歉，操作失败！"<<endl;//无法打开或生成文件时提示操作失败
				break;
			}
			else
			{
			outfile<<duixiang;
			outfile<<type<<"	";//生成文件或向已有文件末尾输入新的信息
            outfile<<neirong<<"	";
			cout<<"已将您输入的信息保存到硬盘上。"<<endl;
			system("pause");
			outfile.close();//关闭文件
			}
		}break;
			case'3':
		{
			type="其他";
			cout<<"请输入发布对象：";
			cin>> duixiang;
			cout<<"请输入发布内容：";
			cin>>neirong;
			ofstream outfile("通知1.txt",ios::app);//定义输出文件，打开"通知1.txt"
			if(!outfile)
			{
			cout<<"抱歉，操作失败！"<<endl;//无法打开或生成文件时提示操作失败
				break;
			}
			else
			{
			outfile<<duixiang;
			outfile<<type<<"	";//生成文件或向已有文件末尾输入新的信息
            outfile<<neirong<<"	";
			cout<<"已将您输入的信息保存到硬盘上。"<<endl;
			system("pause");
			outfile.close();//关闭文件
			}
		}break;
		default:
		{
			cout<<"现在回到主菜单";
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
	{ifstream infile("password1.txt",ios::in);//定义输入文件，打开"password1.txt"   
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
	type="学生端";
	else if(yonghu[fankuiren].type==2)
	type="教工端";
	else
	type="其他";
	cout << "--------------------------意见反馈---------------------------" << endl;
	cout<<"现在，你可以输入您在使用过程中对该系统的意见反馈（由于可能进一步了解您的意见与建议，我们将记下您使用的账号）"<<endl;
	cout<<"：";
	cin>>liuyan;
	cout<<"是否保存并提交您的意见反馈"<<endl;
	cout<<"输入“1”提交保存，输入除“1”外任何字符不保存并返回主菜单"<<endl;
	cin>>xuanze0;
	switch(xuanze0)
	{
	case'1':
		{
			ofstream outfile("反馈1.txt",ios::app);//定义输出文件，打开"student.txt"
		if(!outfile)
			{
			cout<<"抱歉，操作失败！"<<endl;//无法打开或生成文件时提示操作失败
				break;
			}
		 else
			{
			outfile<<yonghu[fankuiren].account<<"	";//生成文件或向已有文件末尾输入新的信息
            outfile<<type<<"	";
            outfile<<liuyan<<endl;
			}
		 outfile.close();
		 cout<<"您的反馈留言已经提交，我们将及时处理，谢谢！"<<endl;
		}break;
	default:
		{
			cout<<"未提交您的留言，现在返回主菜单。"<<endl;
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
	ifstream infile("成绩1.txt",ios::in);//定义输入文件，打开"student.txt"
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
	cout << "--------------------------成绩查询---------------------------" << endl;
	for(i=0;i<=zongshu;i++)
	{
		if(chengji[i].xuehao==haoma)
		{
			cout<<"                     学号："<<setw(5)<<chengji[i].xuehao<<endl;
			cout << "-------------------------------------------------------------" << endl;
			for(j=0;j<chengji[i].keshu;j++)
			{
				
				cout.width(20);
				cout<<chengji[i].kemu[j]<<"：";
				cout.width(8);
				cout<<chengji[i].defen[j]<<"||  ";
				cout.width(5);
				cout<<"绩点：";
				cout.width(8);
				cout<<chengji[i].jd[j]<<endl;
				cout << "-------------------------------------------------------------" << endl;
			}
			cout<<"总绩点："<<chengji[i].zjd<<endl;
			cout << "-------------------------------------------------------------" << endl;
			cout<<endl;
			sign=1;
		}
	}
	if(sign==0)
		cout<<"暂无您的成绩信息"<<endl;
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
	ifstream infile("成绩1.txt",ios::in);//定义输入文件，打开"student.txt"
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
	cout << "--------------------------成绩管理---------------------------" << endl;
	cout<<"             请选择您要进行的操作:"<<endl;
	cout<<"                            1.查询成绩"<<endl<<endl;
	cout<<"                            2.录入成绩"<<endl<<endl;
	cout<<"                            3.分析成绩"<<endl<<endl;
	cout<<"                            3.返回上一级"<<endl<<endl;
	cout<<"您的选择：";
	cin>>xuanze5;
	switch(xuanze5)
	{
	case'1':
		{
			cout << "--------------------------成绩查询---------------------------" << endl;
			cout<<"请输入您要查询的学生的学号"<<endl;
			cin>>xuehao;
			cout << "--------------------------查询结果---------------------------" << endl;
			for(i=0;i<=zongshu;i++)
			{
				if(chengji[i].xuehao==xuehao)
				{
				cout<<"                     学号："<<setw(5)<<chengji[i].xuehao<<endl;
			cout << "-------------------------------------------------------------" << endl;
			for(j=0;j<chengji[i].keshu;j++)
			{
				cout.setf(std::ios::left);
				cout.width(20);
				cout<<chengji[i].kemu[j]<<"：";
				cout.width(8);
				cout<<chengji[i].defen[j]<<"||  ";
				cout.width(5);
				cout<<"绩点：";
				cout.width(8);
				cout<<chengji[i].jd[j]<<endl;
				cout << "-------------------------------------------------------------" << endl;
			}
			cout<<"总绩点："<<chengji[i].zjd<<endl;
			cout << "-------------------------------------------------------------" << endl;
				cout<<endl;
				sign=1;
				}
			}
			if(sign==0)
				cout<<"未找到该学生的成绩信息"<<endl;

		}break;
	case'2':
		{	cout << "--------------------------成绩录入---------------------------" << endl;
			cout<<"请输入学生学号:";
			cin>>luru.xuehao;
			cout<<"请输入录入的科目数目";
			cin>>luru.keshu;
			for(i=0;i<luru.keshu;i++)
			{
				cout<<"请输入第"<<i+1<<"科的名称：";
				cin>>luru.kemu[i];
				cout<<"请输入"<<luru.kemu[i]<<"科的学分：";
				cin>>luru.xuefen[i];
				cout<<"请输入"<<luru.kemu[i]<<"科的成绩：";
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
			cout<<"请确认您所输入的信息："<<endl;
			cout<<"                     学号："<<setw(5)<<luru.xuehao<<endl;
			cout << "-------------------------------------------------------------" << endl;
			for(j=0;j<luru.keshu;j++)
			{
				cout.setf(std::ios::left);
				cout.width(20);
				cout<<luru.kemu[j]<<"：";
				cout.width(8);
				cout<<luru.defen[j]<<"||  ";
				cout.width(5);
				cout<<"绩点：";
				cout.width(8);
				cout<<luru.jd[j]<<endl;
				cout << "-------------------------------------------------------------" << endl;
			}
			cout<<"总绩点："<<luru.zjd<<endl;
			cout << "-------------------------------------------------------------" << endl;
			cout<<endl;
			cout<<"若您确认您所输入的信息无误，请输入“1”提交保存,若您输入有误或不想提交保存，现在输入除“1”外任何字符返回主菜单。"<<endl;
			cin>>xuanze5;
			if(xuanze5=='1')
			{
				ofstream outfile("成绩1.txt",ios::app);
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
				cout<<"您录入的成绩信息已经提交保存"<<endl;
			}
			else
			{
				cout<<"您输入的成绩未保存提交，现在返回主菜单"<<endl;
			}
		}break;
		case'3':
		{
			cout<<"请输入您要分析的绩点区间的上限"<<endl;
			cin>>shangxian;
			cout<<"请输入您要分析的绩点区间的下限"<<endl;
			cin>>xiaxian;
			for(i=0;i<=zongshu;i++)
			{
				if(chengji[i].zjd>=xiaxian&&chengji[i].zjd<=shangxian)
				sum=sum+1;
			}
			cout<<"总绩点在"<<"xiaxian"<<"到"<<"shangxian"<<"之间的共有"<<sum<<"人"<<endl;
			cout<<"占已录入学生总数的"<<((float)sum/(float)(zongshu+1))*100<<"％"<<endl;

		}break;
		case'4':
			{	system("pause");
	zhucaidan2(haoma);}break;
		default:
			{cout<<"输入有误！" <<endl;}break;
	}
	cout << "-------------------------------------------------------------" << endl;
	cout<<"                 请选择您要进行的操作："<<endl<<endl;
	cout<<"                      1.返回上一级"<<endl<<endl;
	cout<<"                      （其他任意键）.回到主菜单"<<endl<<endl;
	cout<<"您的选择：";
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
	ifstream infile("课表1.txt",ios::in);//定义输入文件，打开"student.txt"
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
	cout<<"                                 您的课表                                 "<<endl;
	for(k=0;k<zongshu;k++)
	{
	if(kebiao[k][0][0].xuehao==haoma)
	{sign=1;
		cout.setf(std::ios::left);
	cout << "══════╦══════╦══════╦══════╦══════╗" << endl;
	cout << "   第1~2节  ║  第3~4节   ║  第6~7节   ║   第8~9节  ║  第11~13节 ║" << endl;
	cout << "══════╬══════╬══════╬══════╬══════╣" << endl;
	for(i=0;i<7;i++)
		{	
		
			for(j=0;j<5;j++)
			{
				
				if(kebiao[k][i][j].kemu=="0")
				{
					
					cout<<"            ║";
				}
				else
				{
					cout.width(12);
					cout<<kebiao[k][i][j].kemu<<"║";
				}
			}
			cout<<endl;
				for(j=0;j<5;j++)
			{
					
				if(kebiao[k][i][j].didian=="0")
				{
					cout<<"            ║";
					
				}
				else
				{
					cout.width(12);
					cout<<kebiao[k][i][j].didian<<"║";
					
				}
			}
			cout<<endl;
			
				for(j=0;j<5;j++)
			{
					
				if(kebiao[k][i][j].zhoushu=="0")
				{
					cout<<"            ║";
				}
				else
				{
					cout.width(12);
					cout<<kebiao[k][i][j].zhoushu<<"║";
				}
			}
			cout<<endl;
			cout << "══════╬══════╬══════╬══════╬══════╣" << endl;
		}
		
	}}
	if(sign==0)
		cout<<"暂无您的课表信息"<<endl;
	system("pause");
	cout<<"现在回到上一级菜单"<<endl;
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
	{ifstream infile("课表1.txt",ios::in);//定义输入文件，打开"student.txt"
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
	cout<<"请选择您要选的课"<<endl;
	cout<<"注意，在选选修课时若选择之课与所选的课时段冲突，则以最后所选的为准"<<endl;
	cout << "----------------------------通识课----------------------------" << endl;
	cout<<"1.红楼梦（星期四 11~13节，A201,3~10周）"<<endl;
	cout<<"2.过去一百年（星期二 11~13节，A201,3~10周）"<<endl;
	cout<<"3.俄语（星期一 11~13节，A201,3~14周）"<<endl;
	cout << "----------------------------体育课----------------------------" << endl;
	cout<<"4.素拓（星期四 8~9节，素拓场,1~16周）"<<endl;
	cout<<"5.篮球（星期四 8~9节，篮球场,1~16周）"<<endl;
	cout<<"6.排球（星期四 8~9节，排球场,1~16周）"<<endl;
	cout<<"您的选择";
	cin>>xuanze9;
	switch(xuanze9)
	{
	case'2':
		{
			kebiao[xuanke][1][4].kemu="过去一百年";
			kebiao[xuanke][1][4].didian="A201";
			kebiao[xuanke][1][4].zhoushu="3~10周";
		}break;
	case'1':
		{
			kebiao[xuanke][3][4].kemu="红楼梦";
			kebiao[xuanke][3][4].didian="A201";
			kebiao[xuanke][3][4].zhoushu="3~10周";
		}break;
	case'3':
		{
			kebiao[xuanke][0][4].kemu="俄语";
			kebiao[xuanke][0][4].didian="A201";
			kebiao[xuanke][0][4].zhoushu="3~14周";
		}break;
	case'4':
		{
			kebiao[xuanke][3][3].kemu="素拓";
			kebiao[xuanke][3][3].didian="素拓场";
			kebiao[xuanke][3][3].zhoushu="1~16周";
		}break;
	case'5':
		{
			kebiao[xuanke][3][3].kemu="篮球";
			kebiao[xuanke][3][3].didian="篮球场";
			kebiao[xuanke][3][3].zhoushu="1~16周";
		}break;
	case'6':
		{
			kebiao[xuanke][3][3].kemu="排球";
			kebiao[xuanke][3][3].didian="排球场";
			kebiao[xuanke][3][3].zhoushu="1~16周";
		}break;
	default:
		{cout<<"输入有误！请重试！";
		kebiao2(haoma);}break;
	}
		{
			 ofstream outfile("课表1.txt",ios::trunc);
		 outfile.close();
		 }
		ofstream outfile("课表1.txt",ios::app);
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
	cout<<"选课完成，现在返回上一级菜单"<<endl;
	kebiao0(haoma);
}
void kebiao0(int haoma)
{
	void zhucaidan1(int haoma);
	char xuanze9;
	system("cls");
	cout << "---------------------------课程中心---------------------------" << endl;
	cout<<"               请选择您要进行的操作"<<endl<<endl;
	cout<<"                      1.查看自己的课表"<<endl<<endl;
	cout<<"                      2.进行选课"<<endl<<endl;
	cout<<"                      3.返回主菜单"<<endl<<endl;
	cout<<"您的选择：";
	cin>>xuanze9;
	switch(xuanze9)
	{
	case'1':
		{kebiao1(haoma);}break;
	case'2':
		{kebiao2(haoma);}break;
	case'3':
		{cout<<"现在返回主菜单"<<endl;
		system("pause");
			zhucaidan1(haoma);}break;
	default:
		{cout<<"输入有误，请重输！"<<endl;
		kebiao0(haoma);}break;
		}
}
void zhucaidan1(int haoma)
{
	void denglu();
	char xuanze;
	system("cls");
		cout << "----------------------------主菜单----------------------------" << endl;
		cout << "--------------------------------------------------------------" << endl;

		cout <<"                    请选择您要进行的操作：" << endl;
		cout<<endl;
		cout<<"              a .查询信息 "<<"              b .成绩查询 "<<endl;
		cout<<endl;
		cout<<"              c .教学评价 "<<"              d .修改密码 "<<endl;              
		cout<<endl;
		cout<<"              e .查看作业与通知"<<"         f .课程中心 "<<endl; 
		cout<<endl;
		cout<<"              g .使用说明"<<"               h. 意见反馈 "<<endl;    
		cout<<endl;
		cout<<"              i .退出登录"<<"               j .退出系统 "<<endl;
		cout << "--------------------------------------------------------------" << endl;
		cout<<"您的选项：";
		cin >> xuanze;
		switch (xuanze)
		{
 
		case 'a':
			{
				chaxun1(haoma);
			}//查询模块接口
			
			break; 
		case 'b':
			{
				chengji1(haoma);
				
			}//成绩模块查询接口  
			break;
		case 'c':
			{
				pingjia1(haoma);
			}//教学评价模块接口
			break;
		case 'd':
			{
				 mima(haoma);
			}//账号服务模块接口
			break;
			case 'e':
			{
			
				tongzhi1(haoma);
			}//通知模块查询接口  
			break;
			case'f':
				{
					kebiao0(haoma);
				}break;
			case'g':
			{
				cout << "-----------------------------★------------------------------" << endl;
				cout << "--------------------------使用说明---------------------------" << endl;
				cout << "    此学生信息管理系统基于C++语言编译而成，分为学生端与教工端，现在您使用的是学生端。"<<endl;
				cout << "    学生端功能介绍："<<endl;
				cout<<" a .查询信息 ：在此选项中，您可以查看自己的个人信息，并可查看自己的同班同学。"<<endl;
				cout<<" b .成绩查询 ：在此选项中，您可以查看已经发布的个人成绩（目前该功能暂缓开放）。"<<endl;
				cout<<" c .教学评价 ：在此选项中，您可以对教学情况进行匿名的留言评价。"<<endl;
				cout<<" d .修改密码 ：在此选项中，您可以修改自己的登录密码。"<<endl;
				cout<<" e .查看作业与通知 ：在此选项中，您可以查看发布于此系统上的作业与通知消息。"<<endl;
				cout<<" f .课程中心 ：在此选项中，您可以查看自己的课表或者进行选课......"<<endl;
				cout<<" g .退出登录  ：您可以使用该选项注销登录，返回登录界面重新登录。"<<endl;
				cout<<" h .退出系统  ：您可以使用该选项退出此学生信息管理系统。"<<endl;
				cout<<"    目前，该系统仍然存在许多缺陷与不足，由此给您的使用带来的不便，我们深表歉意。并希望您能向我们反馈您的建议与所遇到的问题，谢谢！"<<endl;
				cout << "-------------------------------------------------------------" << endl;
				cout<<"0 ошибок всех сильней!"<<endl;
				system("pause");
				zhucaidan1(haoma);
			}
			break;//使用说明
			case'h':
			{
				fankiu(haoma);
			}break;
			case'i':
			{
				system("cls");
				denglu();
			}
			break;//退出
		case'j':
			{
				exit(0);
			}
			break;//退出
		default:
			{
				cout<<"输入有误，请重试。"<<endl;
				system("pause");
				zhucaidan1(haoma);
		}			
		}

}
void zhucaidan2(int haoma)//用于显示主菜单的函数
{
	void denglu();
	char xuanze;
	system("cls");
	cout << "----------------------------主菜单----------------------------" << endl;
	cout << "--------------------------------------------------------------" << endl;

		cout <<"          请选择您要进行的操作：" << endl;
		cout<<"              a .查询信息 "<<"              "<<"b .增加信息 "<<endl;
		cout<<endl;
		cout<<"              c .修改信息 "<<"              "<<"d .删除信息 "<<endl;
		cout<<endl;
		cout<<"              e .成绩管理 "<<"              "<<"f .教学评价 "<<endl;
		cout<<endl;
		cout<<"              g .修改密码 "<<"              "<<"h .信息维护 "<<endl;
		cout<<endl;
		cout<<"              i .作业与通知发布"<<endl;
		cout<<endl;
		cout<<"              j .使用说明"<<"               "<<"k .意见反馈"<<endl;
		cout<<endl;
		cout<<"              l .退出登录"<<"               "<<"m .退出系统"<<endl;
		cout << "--------------------------------------------------------------" << endl;
		cout<<"您的选项：";
		cin >> xuanze;
		switch (xuanze)
		{
 
		case 'a':
			{
				chaxun2(haoma);
			}//查询模块接口
			
			break; 
		case 'b': 
			{
				zengjia(haoma);
			}//增加模块接口
		
			break;
		case 'c': 
			{xiugai1(haoma);}
					//修改模块接口
			break;
		case 'd': 
		{shanchu(haoma);}break; //删除模块接口
			
		case 'e':
			{
				chengji2(haoma);
			}//成绩模块查询接口  
			break;
		case 'f':
			{
				pingjia2(haoma);
			}//教学评价模块接口
			break;
				case 'g':
			{
				 mima(haoma);
			}//账号服务模块接口
			break;
			case 'h':
			{
				weihu(haoma);
			}//信息维护模块接口
			break;
			case 'i':
			{
				tongzhi2(haoma);
			}//作业与通知模块接口
			break;
			case'j':
			{
				cout << "-----------------------------★------------------------------" << endl;
				cout << "--------------------------使用说明---------------------------" << endl;
				cout << "    此学生信息管理系统基于C++语言编译而成，分为学生端与教工端，现在您使用的是教工端。"<<endl;
				cout << "    教工端功能介绍："<<endl;
				cout<<" a .查询信息 ：在此选项中，您可以按姓名、学号、班级、性别查询学生的信息。"<<endl;
				cout<<" b .增加信息 ：在此选项中，您可以向系统输入新学生的信息，并保存。"<<endl;
				cout<<" c .修改信息 ：在此选项中，对已有的学生信息进行修改。"<<endl;;
				cout<<" d .删除信息 ：在此选项中，您可以删除已有的学生信息。"<<endl;;
				cout<<" e .成绩管理 ：在此选项中，您查询学生的成绩（目前该功能暂缓开放）。"<<endl; ;
				cout<<" f .教学评价 ：在此选项中，您可以查看学生对教学情况的匿名留言评价。"<<endl;;
				cout<<" g .修改密码 ：在此选项中，您可以修改自己的登录密码。"<<endl;;
				cout<<" h .信息维护 ：在此选项中，您可以自动检查已有学生信息中是否存在学号重复、学号明显错误信息，以方便信息维护与修改；您还可以重置账户的密码"<<endl;
				cout<<" i .作业与通知发布：在此选项中，您可以向对应的人或集体发布作业与通知。"<<endl;
				cout<<" k .退出登录：您可以使用该选项注销登录，返回登录界面重新登录。"<<endl;
				cout<<" l .退出系统：您可以使用该选项退出此学生信息管理系统。"<<endl;
				cout<<"    目前，该系统仍然存在许多缺陷与不足，由此给您的使用带来的不便，我们深表歉意。并希望您能向我们反馈您的建议与所遇到的问题，谢谢！"<<endl;
				cout << "-------------------------------------------------------------" << endl;
				cout<<"0 ошибок всех сильней!"<<endl;
				system("pause");
				zhucaidan1(haoma);
			}
			break;//使用说明
			case'k':
				{
					fankiu(haoma);
				}break;
		case'l':
		{
			system("cls");
			denglu();
		}
			break;//退出
			case'm':
		{
				exit(0);
			}
			break;//退出
		default:
			{
				cout<<"输入有误，请重试。"<<endl;
				system("pause");
				zhucaidan2(haoma);
		}			
		}

}
void denglu()//用于登录，核对账户密码的函数
{
	int renshu;
	int sign;
	
	int zhuangkuang=0;
	int haoma;
	string mima;
	int i;
	user yonghu[50];
	system("cls");
	cout << "-----------------------------请登录-----------------------------" << endl;//登录界面
	ifstream infile("password1.txt",ios::in);//定义输入文件，打开"password1.txt"
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
		ifstream infile("student1.txt",ios::in);//定义输入文件，打开"student.txt"
		if(!infile)
		{
			sign=3;
		}
	infile.close();
	}
	if(zhuangkuang==3)
	{cout<<"当前系统中无用户信息。"<<endl;
	cout<<"现在退出系统"<<endl;
	system("pause");
	}
	else 
	{
	cout<<endl;
	cout<<"              请输入学号或工号：";
	cin>>haoma;
	cout<<endl;
	cout<<"              请输入密码：";
	cin>>mima;
	for(i=0;i<=renshu;i++)
	{
	if(haoma==yonghu[i].account&&mima==yonghu[i].password&&yonghu[i].type==1)
	{
	cout << "---------------------------登录成功---------------------------" << endl;
	if(sign==3)
	{
	cout<<"提示：包含学生信息的文件不存在，请联系管理员！现在退出系统。"<<endl;
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
	cout << "---------------------------登录成功---------------------------" << endl;
	zhuangkuang=1;
	zhucaidan2(haoma);}
	}
	if(zhuangkuang==0)
	cout<<"账号或密码错误，请重试！"<<endl;
	system("pause");
	denglu();
	}
}
int main()
{
	cout << "--------------------欢迎进入学生信息管理系统--------------------" << endl;
	denglu();	
return 0;
}