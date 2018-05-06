# STL
***
题目： 给出两个数，问：将它们写成保留N位小数的科学计数法后是否相等。若相等，则输出yes,并给出转换结果；若不相等，则输出no,并分别给出两个数的转换结果。
***
分两种情况讨论：  

1. 0.a1a2a3...  

2. b1b2...bm.a1a2a3...
***

## 小trick：   

数据可能出现前导0，即在1或2的数据前还会有若干个0，如000.01 或 00123.45
***
输入样例：  

3 12300 12358.9  

输出样例：  

yes 0.123*10^5
***
## priority_queue 优先队列
其底层用堆实现，队首元素是当前队列优先级最高的一个
### fruit.cpp 文件，是结构体的优先级设置的例子。
## pair
先添加头文件#include<utility>, 可以将两个元素绑在一起作为一个合成元素。  
  
  常见用途：1.代替二元结构体及其构造函数  
  
  2.作为map的键值对来进行插入
## simple calculator
输入一个只包含加减乘除的非负整数计算表达式（整数与运算符之间用一个空格分隔，没有非法表达式，当一行中只有0时输入结束，相应的结果不要输出），计算该表达式的值，精确到小数点后2位
***
1.中缀表达式转后缀表达式  

2.计算后缀表达式

## 静态链表一般解题步骤：
1. 定义静态链表，(数据域，指针域，结点的某个性质）  

2. 静态链表初始化（即对定义中的结点某个性质初始化）

3. 由首地址遍历整个链表，并对结点性质标记，有效结点计数  

4. 数组排序（sort）  

5. 输出有效结点。  

## 二分搜索
STL在库中提供了binary_search，lower_bound,upper_bound.  

1)lower_bound是一种应用于有序数据范围内的算法，它可以返回一个迭代器，这个迭代器指向第一个不小于制定值value的元素。  

2）upper_bound返回的迭代器指向第一个大于指定值value的元素。  

3）lower_bound(A,A+14,3),指定了数组A的头指针；数组的末尾；指定的value.  

