#include<iostream>
#include<stdio.h>
#include<fstream>
#include<sstream>
#include<string>
#include<iomanip>
#include <unistd.h>
#include <stdlib.h>
#include<vector>
#include<time.h>
using namespace std;

class Govt{
private:
  string name_s;
  string founder;
  string motto;

  string name_c;
  string challenge;

  string name_sa;
public:
  void get_startup();
  void get_corporate();
  void get_stakeholder();
  friend void show_startups();
  friend void show_ideas();
  friend void show_challenges();
  friend void show_corporate();
  //friend void show_challenges();
  friend void add_challenges();
};

class Startup{
private:

public:
  friend void show_ideas();
  friend void show_challenges();
  friend void show_corporate();
};

class Corporate{
private:

public:
  friend void show_ideas();
  friend void show_startups();
  friend void show_challenges();
  friend void add_challenges();
};

class Stakeholder{
private:

public:
  friend void show_ideas();
  friend void show_startups();
};
/*void add_challenges()
{
  fstream fout;
  fout.open("Corporate.csv", ios::out | ios::app);
  cout<<"Enter the challenge statement :- \n";
  getline(cin,challenge);
  fout<<name_c<<","<<challenge<<"\n";
  fout.close();
}*/
void Govt::get_startup()
{
    fstream fout;
    fout.open("Startup.csv", ios::out | ios::app);
    cout<<"Enter the name of the company :- \n";
    cin.ignore();
    getline(cin,name_s);
    cout<<"Enter the name of the founder :- \n";
    getline(cin,founder);
    cout<<"Enter the Idea of the company :- \n";
    getline(cin,motto);
    //cin.ignore();
    fout<<name_s<<","<<founder<<","<<motto<<"\n";
    fout.close();
}
void Govt::get_corporate()
{
  fstream fout;
  fout.open("Corporate.csv", ios::out | ios::app);
  cout<<"Enter the Corporate name :- \n";
  getline(cin,name_c);
  cout<<"Enter the challenge:- \n";
  getline(cin,challenge);
  fout<<name_c<<","<<challenge<<"\n";
  fout.close();
}
void Govt::get_stakeholder()
{
  fstream fout;
  fout.open("Stakeholder.csv", ios::out | ios::app);
  cin.ignore();
  cout<<"Enter the Skateholder name :- \n";
  getline(cin,name_sa);
  //cin.ignore();
  fout<<name_sa<<"\n";
  fout.close();
}
void show_ideas()
{
  //cout<<"Here will be ideas \n";
  fstream fin;
  int n=0;
  fin.open("Startup.csv", ios::in);
  vector<string> row;
  string line, word, temp;
  //char line[20];
  //cout<<"Name Of the Startup"<<"   "<<"FOunder   "<<"Idea  "<<endl;
  fin.seekp(0);
  while (fin.good())
  {
      //fin.seekp(0+n);
      //cout<<"Here";
      row.clear();
      //cin.ignore();
      getline(fin,line);
      //cout<<line;
      stringstream s(line);
      while (getline(s, word, ','))
      {
          row.push_back(word);
      }
      /* for (vector<string>::const_iterator iter = row.begin();iter != row.end(); ++iter)
       cout << *iter <<"\t";
       cout<<endl;
       n++;*/
       cout<<"Name of the company :-    ("<<row[0]<<")\t"<<"Founder :-    ("<<row[1]<<")\t"<<"Ideas :-    ("<<row[2]<<")"<<endl;
  }
  fin.close();
}
void show_challenges()
{
  //cout<<"Here will be challenges"<<endl;
  fstream fin;
  int n=0;
  fin.open("Corporate.csv", ios::in);
  vector<string> row;
  string line, word, temp;
  //char line[20];
  //cout<<"Name Of the Company"<<"   "<<"challenge     "<<endl;
  fin.seekp(0);
  while (fin.good())
  {
      //fin.seekp(0+n);
      //cout<<"Here";
      row.clear();
      //cin.ignore();
      getline(fin,line);
      //cout<<line;
      stringstream s(line);
      while (getline(s, word, ','))
      {
          row.push_back(word);
      }
      /* for (vector<string>::const_iterator iter = row.begin();iter != row.end(); ++iter)
       cout << *iter <<"\t\t\t\t";
       cout<<endl;*/
       n++;
       cout<<"Name of the company :-    ("<<row[0]<<")\t"<<endl<<"challenge :-    ("<<row[1]<<")"<<endl;
  }
  fin.close();

}
void show_startups()
{
    fstream fin;
    int n=0;
    fin.open("Startup.csv", ios::in);
    vector<string> row;
    string line, word, temp;
    //char line[20];
    //cout<<"Name Of the Company"<<"   "<<"FOunder   "<<"Idea  "<<endl;
    fin.seekp(0);
    while (fin.good())
    {
        //fin.seekp(0+n);
        //cout<<"Here";
        row.clear();
        //cin.ignore();
        getline(fin,line);
        //cout<<line;
        stringstream s(line);
        while (getline(s, word, ','))
        {
            row.push_back(word);
        }
         /*for (vector<string>::const_iterator iter = row.begin();iter != row.end(); ++iter)
         cout << *iter <<"\t";
         cout<<endl;
         n++;*/
         cout<<"Name of the company :-    ("<<row[0]<<")\t"<<"Founder :-    ("<<row[1]<<")\t"<<"Idea :-    ("<<row[2]<<")"<<endl;
    }
    fin.close();
}
void show_corporate()
{
  fstream fin;
  fin.open("Corporate.csv", ios::in);
  vector<string> row;
  string line, word, temp;
  //char line[20];
  fin.seekp(0);
  while (fin.good())
  {
      //fin.seekp(0);
      //cout<<"Here";
      row.clear();
      //cin.ignore();
      getline(fin,line);
      //cout<<line;
      stringstream s(line);
      while (getline(s, word, ','))
      {
          row.push_back(word);
      }
      for (vector<string>::const_iterator iter = row.begin();iter != row.end(); ++iter)
       cout << *iter << endl;
  }
  fin.close();
}
void show_stakeholders()
{
  fstream fin;
  fin.open("Stakeholder.csv", ios::in);
  vector<string> row;
  string line, word, temp;
  //char line[20];
  fin.seekp(0);
  while (fin.good())
  {
      //fin.seekp(0);
      //cout<<"Here";
      row.clear();
      //cin.ignore();
      getline(fin,line);
      //cout<<line;
      stringstream s(line);
      while (getline(s, word, ','))
      {
          row.push_back(word);
      }
      for (vector<string>::const_iterator iter = row.begin();iter != row.end(); ++iter)
       cout << *iter << endl;
  }
  fin.close();
}
const char rocket[] =
" \t\t\t\t\t\t         ^ \n\
  \t\t\t\t\t\t        /T\\\n\
  \t\t\t\t\t\t        |E|\n\
  \t\t\t\t\t\t        |C|\n\
  \t\t\t\t\t\t        |N|\n\
  \t\t\t\t\t\t        |O|\n\
  \t\t\t\t\t\t        |C|\n\
  \t\t\t\t\t\t        |R|\n\
  \t\t\t\t\t\t       /|A|\\\n\
  \t\t\t\t\t\t      / |T| \\\n\
  \t\t\t\t\t\t     |  |S|  |\n\
  \t\t\t\t\t\t      `-\"\"\"-`\
";


int main()
{
  cout <<" ********************************************* \n"  ;
cout <<"         #########   ########    ########      \n"  ;
cout <<"       ###########   ##            ###         \n"  ;
cout <<"      ####           ##            ###         \n"  ;
cout <<"      ###            ########      ###         \n"  ;
cout <<"      ####                 ##      ###         \n"  ;
cout <<"      ############         ##      ###         \n"  ;
cout <<"        ##########   ########    ########      \n"  ;
cout << endl;
cout << endl;
cout << "     ##        ##   ############ ########## ##   # ########## ##########  ##     ## ######### ###      ##  \n"   ;
cout << "     ##        ##   ##        ## ##         ##  #  ##      ##     ##      ##     ## ##     ## ## #     ##  \n"   ;
cout << "     ##        ##   ##        ## ##         ## #   ##      ##     ##      ##     ## ##     ## ##  #    ##  \n"   ;
cout << "     ##        ##   ############ ##         ###    ##########     ##      ##     ## ##     ## ##   #   ##  \n"   ;
cout << "     ############   ##        ## ##         ###    ##      ##     ##      ######### ##     ## ##    #  ##  \n"   ;
cout << "     ##        ##   ##        ## ##         ## #   ##      ##     ##      ##     ## ##     ## ##     # ##  \n"   ;
cout << "     ##        ##   ##        ## ##         ##  #  ##      ##     ##      ##     ## ##     ## ##      ###  \n"   ;
cout << "     ##        ##   ##        ## ########## ##   # ##      ##     ##      ##     ## ######### ##       ##  \n"   ;
cout <<" **************************************************************************************************************** \n";
sleep(1.8);
for (int i = 0; i < 50; i ++) printf("\n"); // jump to bottom of console
printf("%s", rocket);
int j = 300000;
for (int i = 0; i < 50; i ++) {
    usleep(j); // move faster and faster,
    j = (int)(j * 0.9); // so sleep less each time
    printf("\n"); // move rocket a line upward
}
cout<<"\t\t\t\t\tPlease Wait While The Page Is Loading\n\n";

char a=177, b=219;
cout<<"\t\t\t\t\t\t";

for (int i=0;i<=15;i++)
  cout<<a;

cout<<"\r";
cout<<"\t\t\t\t\t\t";

for (int i=0;i<=15;i++)
{
  cout<<b;
  for (int j=0;j<=1e8;j++);
}
cout <<endl<<endl;
system("cls");
  Govt G;
  Startup S;
  Corporate C;
  int no=0;
  char decision = 'y';
  while(decision=='y')
  {

    cout<<"\t\t\t\t************************Choose sector***************************\t\t\t\t"<<endl<<endl<<"\t\t\t\t\t\t\t"<<"1)Government"<<endl<<endl<<"\t\t\t\t\t\t\t"<<"2)Corporate"<<endl<<endl<<"\t\t\t\t\t\t\t"<<"3)Startup"<<endl<<endl<<"\t\t\t\t\t\t\t"<<"Press 4 to exit"<<endl<<endl<<"\t\t\t\t\t\t\t---x---x---x---";
    cout<<endl;
    cin>>no;
    if(no==4)
    {
      decision='n';
    }
    while(decision == 'y')
    {
      system("cls");
      switch(no)
      {
        case 1:while(decision == 'y')
                {
                  system("cls");
                  while(decision=='y')
                  {
                    system("cls");
                    cout<<"Select operation :- "<<endl<<"1)Show all Startups "<<endl<<"2)Show all Corporates "<<endl<<"3)Show all ideas "<<endl<<"4)Show all challenges "<<endl<<"5)Add a Startup"<<endl<<"6)Add a Corporate "<<endl<<"7)Add a Stakeholder"<<endl<<"8)Enter 8 to exit"<<endl;
                    cin>>no;
                    if(no == 8)
                    {
                      decision='n';
                    }
                    switch(no)
                    {
                      case 1:show_startups();
                      //system("pause");
                      cout<<"Do you want to continue(y/n) :- "<<endl;
                      cin>>decision;
                      break;
                      case 2:show_corporate();
                      //system("pause");
                      cout<<"DO you want to continue(y/n) :- ...."<<endl;
                      cin>>decision;
                      break;
                      case 3:show_ideas();
                      //system("pause");
                      cout<<"Do you want to continue(y/n) :- "<<endl;
                      cin>>decision;
                      break;
                      case 4:show_challenges();
                      //system("pause");
                      cout<<"Do you want to continue(y/n) :- "<<endl;
                      cin>>decision;
                      break;
                      case 5:G.get_startup();
                      cout<<"Do you want to continue(y/n) :- "<<endl;
                      cin>>decision;
                      break;
                      case 6:G.get_corporate();
                      cout<<"Do you want to continue(y/n) :- "<<endl;
                      cin>>decision;
                      break;
                      case 7:G.get_stakeholder();
                      cout<<"Do you want to continue(y/n) :- "<<endl;
                      cin>>decision;
                      break;
                      case 8:
                      break;
                      default:cout<<"Enter appropiate answer ... ";
                      break;
                    }
                  }
                }
        break;
        case 2:while(decision=='y')
        {
          system("cls");

          while(decision=='y')
          {
            system("cls");
            cout<<"Choose operation :-"<<endl;
            cout<<"1)Show all Startups "<<endl<<"2)Show all challenges  "<<endl<<"3)Enter 3 to exit"<<endl;
            cin>>no;
            if(no==3)
            {
              decision='n';
            }
            switch(no)
            {
              case 1:show_startups();
              //system("pause");
              cout<<"Do you want to continue(y/n) :- "<<endl;
              cin>>decision;
              break;
              case 2:show_challenges();
              //system("pause");
              cout<<"Do you want to continue(y/n) :-"<<endl;
              cin>>decision;
              break;
              case 3:
              break;
              default:cout<<"Enter appropiate option ......"<<endl;
              break;
            }
          }
        }
        break;
        case 3:while(decision=='y')
        {
          system("cls");
          while(decision=='y')
          {
            system("cls");
            cout<<"Choose operation :-"<<endl;
            cout<<"1)show all challenges "<<endl<<"2)Show all ideas "<<endl<<"Enter 3 to exit "<<endl;
            cin>>no;
            if(no==3)
            {
              decision='n';
            }
            switch(no)
            {
              case 1:show_challenges();
              //system("pause");
              cout<<"Do you want to continue(y/n) :- "<<endl;
              cin>>decision;
              break;
              case 2:show_ideas();
              //system("pause");
              cout<<"Do you want to continue(y/n) :-"<<endl;
              cin>>decision;
              break;
              case 3:
              break;
              default:cout<<"Choose appropiate option .... ";
              break;
            }
          }
        }
        break;
        default:cout<<"Please choose appropiate option ...."<<endl;
                system("cls");
                break;
      }
    }
  }
  return 0;
}
