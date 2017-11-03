#include <iostream>
#include <string>
#include <utility>
#include <sstream>
using namespace std;
void vyvod(int *array,unsigned int size)
{
	for(unsigned int i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}
}
bool vvod(int *array,unsigned int size)
{
    string stroka;
    getline(cin,stroka);
    istringstream stream(stroka);
    for(unsigned int i=0;i<size;i++)
    {
        if(!(stream>>array[i])){
            cout<<"nepolnuy massiv";
            return false;
        }   
    }
    return true;
}
void bubblesort(int *array,unsigned int size)
{
	for(unsigned int i=0;i<size-1;i++)
	{
		for(unsigned int j=0;j<size-i-1;j++)
		{
			if(array[j]>array[j+1]){swap(array[j],array[j+1]);};
		}
	}
}
unsigned int size;
int main(int argc, char** argv) {
	cin>>size;
	cin.get();	
	int *array=new int[size];
	if(vvod(array,size))
	{
		bubblesort(array,size);
		vyvod(array,size);
	}
	delete[]array;
	return 0;
}
