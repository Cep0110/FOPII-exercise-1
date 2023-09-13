#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
string name;
int age;
double grade;
public:
Student(string stName,int stAge,double stGrade){
    name=stName;
    age=stAge;
    grade=stGrade;
}
void displayInfo(){
    cout<<"Name:"<<name<<endl;
   cout<<"Age:"<<age<<endl;     cout<<"Grade:"<<grade<<endl;
 }    
double getGrade(){
return grade;}
double calculateAverage(Student & st1,Student & st2){
    double total=st1.getGrade()+st2.getGrade();
    int stCount=2;
    if(stCount==0){
        return 0;
    }
    return total/stCount;
}
};
int main(){
    Student st1("Kalhab Fesiha",24,78.9);
Student st2("Kalid Feyisa",29,90.9);
st1.displayInfo();
cout<<endl;
st2.displayInfo();
cout<<endl;
double Average=st1.calculateAverage(st1,st2);
cout<<"Average Grade:"<<Average<<endl;
return 0;
}
