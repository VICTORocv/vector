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
    vector<int> v(6,1);//初始值为6个1
    cout<<v.end()-v.begin()<<endl;
    cout<<v.size()<<endl;//与上一句等价
    for(i=0;i!=v.size();i++){
        cout<<v[i];
        if(i!=v.size()-1)
            cout<<",";
    }
    cout<<endl;
    v.erase(v.begin()+5);//不能删除vector中最后的元素
    for(i=0;i!=v.size();i++){
        cout<<v[i];
        if(i!=v.size()-1)
            cout<<",";
    }
    cout<<endl;
    
    for(i=0;i!=v.size();i++)
        v[i]=i;
    v.at(4)=100;
    for(i=0;i!=v.size();i++){
        cout<<v[i];
        if(i!=v.size()-1)
            cout<<",";
    }
    cout<<endl;
    
    int a[5]={1,2,3,4,5};
    vector<int> v2(a,a+5);//构造函数，从a[0]到a[5]拷贝到v2
    v2.insert(v2.begin()+2, 13);//插入一个元素
    for(i=0;i!=v2.size();i++){
        cout<<v2.at(i);
        if(i!=v2.size()-1)
            cout<<",";
    }
    cout<<endl;
    return 0;
}
