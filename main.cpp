//
//  main.cpp
//  vector
//
//  Created by 郭悟清 on 2017/2/9.
//  Copyright © 2017年 郭悟清. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int i;
    int a[5]={1,2,3,4,5};
    vector<int> v(5);
    cout<<v.end()-v.begin()<<endl;
    for(i=0;i!=v.size();i++)
        v[i]=i;
    v.at(4)=100;
    for(i=0;i!=v.size();i++)
        cout<<v[i]<<",";
    cout<<endl;
    vector<int> v2(a,a+5);//构造函数，从a[0]到a[5]拷贝到v2
    v2.insert(v2.begin()+2, 13);
    for(i=0;i!=v2.size();i++)
        cout<<v2.at(i)<<",";
    return 0;
}
