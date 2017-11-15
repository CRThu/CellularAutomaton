#pragma once
#ifndef _CA_CALC_H_
#define _CA_CALC_H_


class CA2d      // 二维元胞机 Class
{
public:
     //Set*
    // SetData*
    void SetData(int *__Data, int row, int column);  // 输入自定义 Data
	void SetDataZero(int row, int column);     // 初始化 Data 为 0
	void SetDataRand(int row, int column);     // 初始化 Data 为 Rand
 //   // SetRule*
	//void SetRule(byte __RuleName);      // 写入 Rule

 //   // Run*
 //   // RunNext*
 //   void RunNextStep();     // 计算下一步

    // Get*
    // GetRand
    int GetRand(int a, int b);      // 获取随机数
 //   // GetData*
	//int GetDataSize();      // 获取 Data 大小
 //   // GetTemp*
 //   int GetTempSize();      // 获取 Temp 大小

    // Print*
	void PrintData();       // 打印 Data
	//void PrintRule();       // 打印 Rule

private:

	std::list<std::list<int>> Data;        // Data 存放 List
    std::list<std::list<int>> Temp;        // Temp 临时 List
	int Rule[8];       // Rule 存放 List

};
#endif