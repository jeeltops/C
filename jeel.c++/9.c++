#include<iostream>

using namespace std;
class Batsman
{
    int bcode,innings,notout,runs;
    float bat_avg;
    char bname[20];
    float caic_avg()
    {
        bat_avg=(float)runs/((float)innings-(float)notout);
        return bat_avg;
    }
    public:
    void readData();
    void display();
};
void Batsman::readData()
{
    cout<<"Enter batsman code";
    cin>>bcode;
    cout<<"Enter batsman name";
    cin>>bname;
    cout<<"Enter innings";
    cin>>innings;
    cout<<"Enter not outs";
    cin>>notout;
    cout<<"Enter runs";
    cin>>runs;
}
void Batsman::display()
{
    cout<<"Batsman code"<<bcode<<endl;
    cout<<"Batsman name"<<bname<<endl;
    cout<<"lnnings"<<innings<<endl;
    cout<<"Not outs"<<notout<<endl;
    cout<<"Runs"<<runs<<endl;
    cout<<"Avg"<<caic_avg();
}
int main()
{
    Batsman d;
    d.readData();
    d.display();
    
    return 0;
}