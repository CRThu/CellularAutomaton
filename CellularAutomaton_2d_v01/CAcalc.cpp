#include "stdafx.h"
#include "CAcalc.h"

#define DEBUG_CALC 0

#define _OUTPUT_TRUE_   "#"
#define _OUTPUT_FALSE_  "."

// SetData*
void CA2d::SetData(int *__Data, int row,int column)
{
    std::list<int> SetDataTemp;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            SetDataTemp.push_back(__Data[i*row + j]);
        }
        Data.push_back(SetDataTemp);
        SetDataTemp.clear();
    }
}
void CA2d::SetDataZero(int row, int column)
{
    int* a = new int[row*column];
    for (int i = 0; i < row*column; i++)
        a[i] = 0;
    SetData(a, row, column);
    delete[] a;
}
void CA2d::SetDataRand(int row, int column)
{
    srand((unsigned)time(NULL)); //初始化随机数种子
    int* a = new int[row*column];
    for (int i = 0; i < row*column; i++)
        a[i] = GetRand(0, 1);
    SetData(a, row, column);
    delete[] a;
}
//// SetRule*
//void CA1d::SetRule(byte __RuleName)
//{
//	CA1d::RuleName = __RuleName;
//	Rule.Output[0] = (__RuleName & 0x80) >> 7;
//	Rule.Output[1] = (__RuleName & 0x40) >> 6;
//	Rule.Output[2] = (__RuleName & 0x20) >> 5;
//	Rule.Output[3] = (__RuleName & 0x10) >> 4;
//	Rule.Output[4] = (__RuleName & 0x08) >> 3;
//	Rule.Output[5] = (__RuleName & 0x04) >> 2;
//	Rule.Output[6] = (__RuleName & 0x02) >> 1;
//	Rule.Output[7] = (__RuleName & 0x01) >> 0;
//};
//// Run*
//void CA1d::RunNextStep()
//{
//    // int DataCalc[3];
//    int DataCalc;
//    auto iter = Data.begin();
//    ZeroLocation--;     // we calc it with left shift ( << )
//#if DEBUG_CALC == 1
//    std::cout << "compare rules data : "<<std::endl;
//    for (int i = 0; i < (-ZeroLocation); i++)
//        std::cout << " ";
//#endif
//    // iter_COOR -> iter_CheckOutOfRange
//    for (auto iter_COOR = iter; ++++iter_COOR != Data.end(); ++iter, iter_COOR = iter)
//    {
//        auto iter_Temp = iter;
//        //DataCalc[0] = *iter_Temp;
//        //DataCalc[1] = *(++iter_Temp);
//        //DataCalc[2] = *(++iter_Temp);
//        DataCalc = ((*iter_Temp) << 2) | (*(++iter_Temp) << 1) | (*(++iter_Temp) << 0);
//#if DEBUG_CALC == 1
//        // std::cout << DataCalc[0] << "\t" << DataCalc[1] << "\t" << DataCalc[2] << "\t" << std::endl;
//        std::cout << DataCalc;
//#endif
//        // TODO
//        Temp.push_back(Rule.Output[7 - DataCalc]);
//        // Check head of List is right shift ( >> ) or not
//        // if (iter == Data.begin() && ((DataCalc & 0b100) >> 2) == 1)
//        //    ZeroLocation++;
//    }
//    // Check head of List is left shift ( << ) or not
//    //if ((DataCalc & 0b001) == 1)
//    //    ZeroLocation--;
//#if DEBUG_CALC == 1
//    std::cout << std::endl;
//#endif
//    Data = Temp;
//    Temp.clear();
//}

// GetRand
int CA2d::GetRand(int a, int b)
{
    return (rand() % (b - a + 1)) + a;
}
//// GetData*
//int CA1d::GetDataSize()
//{
//	return Data.size();
//}
//// GetTemp*
//int CA1d::GetTempSize()
//{
//    return Temp.size();
//}
// Print*
void CA2d::PrintData()
{
#if DEBUG_CALC == 1
    std::cout << "data : " << std::endl;
#endif
    // C++11
    for (auto IterRow : Data)
    {
        for (auto iter : IterRow)
            // std::cout << iter;
            std::cout << ((iter == 1) ? _OUTPUT_TRUE_ : _OUTPUT_FALSE_);
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
//void CA1d::PrintRule()
//{
//	std::cout << "Rule " << int(RuleName) << " : " << std::endl;
//	for (int i = 0; i < 8; i++)
//		std::cout << ((Rule.Input[i]&0b100)>>2) << ((Rule.Input[i]&0b10)>>1) << ((Rule.Input[i]&0b1)>>0)<<"  ";
//	std::cout << std::endl;
//	for (int i = 0; i < 8; i++)
//		std::cout <<" "<< Rule.Output[i]<< "   ";
//	std::cout << std::endl;
//}
