#include<iostream>

using namespace std;




int main()
{
	int tutar;
	cout<<"Lutfen cekilecek miktari girin: "<<endl;
	cin>>tutar;
	
	try{
		if(tutar<10 || tutar>2000)
			throw tutar;
		else
			cout<<"Paraniz hazirlaniyor. Lutfen Bekleyiniz!";
	}
	catch( int para){
		cout<<"Cekmek istenilen tutar "<<para<<" TL gecersizdir"<<endl;
		if(para < 10)
			cout<<"10TL'den daha az cekilemez!"<<endl;
		else
				cout<<"Ayni gunde 2000TL'den daha fazla cekilemez!"<<endl;
	}
}

