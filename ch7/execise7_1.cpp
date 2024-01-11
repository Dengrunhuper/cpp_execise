// # include <iostream>

// m答案
// 我就吧struct 换成了clss，没了
// 明白。意思了，就是相当于用这个东西
// class Sales_data{
    
//     std::string bookId;
//     std::string bookName;
//     std::string bookTpye;

//     unsigned uint_ssold = 0;
//     double revenue = 0.0;
//     double price = 0.0;
// };

// 问题点：
// if(std::cin >> total) 是什么含义？ total是一个对象，他可以这样被输入吗？
// cerr是什么鬼
// 结束输出怎么来
// 输入一定是有空格的吗
// 结构体的输入与类的输入的不同点

# include <iostream>
# include <string>
using namespace std;

class Sales_data
{
public:
    std::string bookNo;
    unsigned uint_sold = 0;
    double revenue = 0.0;

    // 注意点
    Sales_data& combine(const Sales_data &rhs);
};

Sales_data& Sales_data::combine(const Sales_data &rhs) {
    uint_sold += rhs.uint_sold;
    revenue += rhs.revenue;
    return *this; 
}

int main() 
{
    Sales_data total;
    if(cin >> total.bookNo >> total.uint_sold >> total.revenue) {
        Sales_data trans;
        
        while(cin >> trans.bookNo >> trans.uint_sold >> trans.revenue) {
            
            // 比较是否相同
            if(total.bookNo == trans.bookNo) {
                // 相同就相加
                // total.uint_sold += trans.uint_sold;
                // total.revenue += trans.revenue;
                total.combine(trans);struct Sales_data1 2
{
    std::string bookNo;
    unsigned uint_sold = 0;
    double revenue = 0.0;
};
            }else{
                // 不相同就换另一本书了
                // 先输出上一本信息
        cout << total.bookNo << " " <<total.uint_sold << " " << total.revenue << endl;
                total = trans;
            }
        }

        // 输出最后一本的信息
        cout << total.bookNo << " " <<total.uint_sold << " " << total.revenue << endl;
    }else {
        cerr << "No data?!" << endl;
        return -1;  // 表示失败
    }

    return 0;
}