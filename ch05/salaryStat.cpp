#include <iostream>
using namespace std;

int inputSalary(int* pSalary, const int MAX_NUM){
  int nTemp = 0;
  int nIndex = 0;
  do{
    cout<<"请输入员工"<<nIndex<<"的工资："<<endl;
    cin>>nTemp;

    // 如果输入的是负数，表示输入工作结束，跳出循环
    if( nTemp <0 ){
      break;
    }

    pSalary[nIndex] = nTemp;
    ++nIndex;   

  }while( nIndex < MAX_NUM);

  return nIndex;
}

float GetAerageSalary( int* pSalary, const int MAX_NUM){
  int nTotal = 0;
  for(int i=0;i<MAX_NUM; ++i){
    nTotal += pSalary[i];
  }

  return (float)nTotal / MAX_NUM;

}

int main(){
  const int MAX_NUM = 1000;
  int nSalary[MAX_NUM];

  int nCount = inputSalary( nSalary, MAX_NUM);

  float fAverageSalary = GetAerageSalary(nSalary, nCount);
  cout<<"员工的平均工资是"<<fAverageSalary<<endl;
  return 0;

}