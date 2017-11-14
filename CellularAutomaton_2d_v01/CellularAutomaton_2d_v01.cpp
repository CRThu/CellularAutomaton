// CellularAutomaton_2d_v01.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "CAcalc.h"
// TODOlist
int main()
{
//    system("mode con cols=257 lines=200");
//    // you should set your command cols > Data Length , lines > steps
//    // if your screen is small , you should resize your font
    CA2d CA;
//    CA.SetRule(110);    // rule : 110
//    CA.PrintRule();

    /*
    int Data[36] = { 0,1,0,1,1,1,
                              1,0,0,1,1,0,
                              0,0,0,1,1,1,
                              1,1,1,1,1,0,
                              1,0,0,1,1,0,
                              0,0,0,1,1,1, };

    CA.SetData(Data, 6, 6);

    CA.SetDataZero(6,6); // length : 6*6
    */
    CA.SetDataRand(6, 6); // length : 6*6
//    CA.PrintData();
//    //std::cout<<"Data Size : "<<CA.GetDataSize();
//    for (int i = 0; i < 63; i++)
//    {
//        CA.RunNextStep();
//        CA.PrintData();
//    }
//    getchar();
    return 0;
}
