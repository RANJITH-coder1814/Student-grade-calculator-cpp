#include<iostream>
using namespace std;
class student{
    private:
    int roll;
    string name;
    int mathsmark;
    int phymark;
    int chemark;
    public:
    student(int r,string n,int m,int p,int c){
        roll=r;
        name=n;
        mathsmark=m;
        phymark=p;
        chemark=c;
    }
    int total(){
        return mathsmark+phymark+chemark;
    }
    char grade(){
        float average=total()/3;
        if(average>60){
            return 'A';
        }
        else if(average>=40 && average<60){
            return 'B';
        }
        else{
            return 'c';
        }
    }
};
int main(){
    int roll;
    string name;
    int m,p,c;
    cout<<"enter the roll number";
    cin>>roll;
    cout<<"enter the name";
    cin>>name;
    cout<<"enter the marks in three subject";
    cin>>m,p,c;
    student s(roll,name,m,p,c);
    cout<<"total marks"<<s.total()<<endl;
    cout<<"grade of student"<<s.grade()<<endl;
}
