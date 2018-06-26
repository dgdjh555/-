//
//  main.cpp
//  类的定义和使用
//
//  Created by nico_d on 2018/6/26.
//  Copyright © 2018年 nico_d. All rights reserved.
//

#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int birth;
    Student(string name_,int birth_){
        name=name_;
        birth=birth_;
    }
    void PT(){
        cout<< name << " " << birth <<endl;
    }
    void XG(string _name){
        name=_name;
    }
};
int main() {
    Student s;
    int birth;
    string name;
    cin>> name >> birth;
    s.Student(name,birth);
    s.PT();
    cin>> name;
    s.XG(name);
    s.PT();
    return 0;
}
