#include <iostream>
using namespace std;

class inputan{
	public:
	void array(){
		 	 int angka[20];
	 	 int inputan;
	 	 
	 	 cout<<"masukan jumlah inputan=";
	 	 cin>>inputan;
	 	 
	 	 for(int i=0; i<inputan; i++){
	 	 	cout<<"data ke "<<1+i;
	 	 	cin>>angka[i];
		  }
		  
		for (int j=0; j<inputan; j++){
			if (angka[j]%2==0){
				cout<<angka[j];
			}
		}
	 }
};

 int main(){
 	inputan hasil;
 	hasil.array();
 	return 0;
}
