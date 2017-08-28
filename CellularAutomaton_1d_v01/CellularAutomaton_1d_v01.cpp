// CellularAutomaton_v01.cpp : 定义控制台应用程序的入口点。
// using UTF-8
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

#include "stdafx.h"
#include "CAcalc.h"

int main()
{
    system("mode con cols=257 lines=200");
    // you should set your command cols > Data Length , lines > steps
    // if your screen is small , you should resize your font
	CA1d CA;
    CA.SetRule(110);    // rule : 110
    CA.PrintRule();

    int Data[256] = {0};
    Data[127] = 1;
    CA.SetData(Data, 256);
	//CA.SetDataRand(64); // length : 64
	CA.PrintData();
	//std::cout<<"Data Size : "<<CA.GetDataSize();
    for (int i = 0; i < 63; i++)
    {
        CA.RunNextStep();
        CA.PrintData();
    }
	getchar();
    return 0;
}

