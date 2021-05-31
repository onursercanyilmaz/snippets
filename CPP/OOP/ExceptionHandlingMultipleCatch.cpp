#include<iostream>

using namespace std;




int main()
{
	int tutar;
	cout<<"Lutfen cekilecek miktari girin: "<<endl;
	cin>>tutar;
	
	try{
		if(tutar<10)
			throw tutar;
		else if(tutar>2000)
			throw 'E';
		else
			cout<<"Paraniz hazirlaniyor. Lutfen Bekleyiniz!";
	}
	catch(int para){
		cout<<"Cekmek istenilen tutar "<<para<<" TL gecersizdir"<<endl<<"10TL'den daha az cekilemez!"<<endl;
	}
	catch (char e)
	{
				cout<<"Cekmek istenilen tutar "<<tutar<<"TL, Ayni gunde 2000TL'den daha fazla cekilemez!"<<endl;
	}
}

