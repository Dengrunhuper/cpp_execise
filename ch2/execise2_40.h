# include <iostream>

// m答案
// 区别，需要有哪些区别，
    // 题目你是说数据类型不同，
    // 还是想要多数据成员
    // 还是说吧struct换成class
struct Sales_data{

    std::string bookname;
    int bookcount = 0;
    int revenue = 0;
};

// 答案
// 想要更多的数据成员
struct Sales_data{
    
    std::string bookId;
    std::string bookName;
    std::string bookTpye;

    unsigned uint_ssold = 0;
    double revenue = 0.0;
    double price = 0.0;
};

// 问题点：
// 1. unsigned uints_sold = 0 怎么理解
// 2. c++的类需要驼峰命名法吗

