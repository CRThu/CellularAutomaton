// Copyright YummyCarrot(huyuzhe)

// My Github Location:
// https://github.com/CRThu

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

// http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#pragma once
#ifndef _CA_CALC_H_
#define _CA_CALC_H_

struct StdRule
{
    // 输入规则
    typedef int IRule;
    const IRule Input[8] =
    {
    // BIN               {   L, M,  R   }       DEC
        0b111,      // {    1,  1,  1   }         7
        0b110,      // {    1,  1,  0   }         6
        0b101,      // {    1,  0,  1   }         5
        0b100,      // {    1,  0,  0   }         4
        0b011,      // {    0,  1,  1   }         3
        0b010,      // {    0,  1,  0   }         2
        0b001,      // {    0,  0,  1   }         1
        0b000,      // {    0,  0,  0   }         0
    };
    // 输出规则
    typedef int ORule;
	ORule Output[8];
};

class CA1d      // 一维元胞机 Class
{
public:
    // Set*
    // SetData*
    void SetData(int *__Data,int Length);   // 输入自定义 Data
	void SetDataZero(int Size);     // 初始化 Data 为 0
	void SetDataRand(int Size);     // 初始化 Data 为 Rand
    // SetRule*
	void SetRule(byte __RuleName);      // 写入 Rule

    // Run*
    // RunNext*
    void RunNextStep();     // 计算下一步

    // Get*
    // GetRand
    int GetRand(int a, int b);      // 获取随机数
    // GetData*
	int GetDataSize();      // 获取 Data 大小
    // GetTemp*
    int GetTempSize();      // 获取 Temp 大小

    // Print*
	void PrintData();       // 打印 Data
	void PrintRule();       // 打印 Rule

private:

	std::list<int> Data;        // Data 存放 List
    std::list<int> Temp;        // Temp 临时 List
	StdRule Rule;       // Rule 存放 List
	byte RuleName;      // RuleName 标准规则名	
	int ZeroLocation;      // 原点坐标

};
#endif