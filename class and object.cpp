#include <iostream>

using namespace std;

class pelajar{
	public:
		string nama;
		string nis;
};


int main(){
	pelajar data1;
	data1.nama = "rakean";
	data1.nis ="11907248";
	//pisah
	pelajar data2;
	data2.nama="mamat";
	data2.nis="11907255";
	cout<<"nama dari data1: "<<data1.nama<<endl;
	cout<<"nis dari data1: " <<data1.nis <<endl;
	cout<<"nama dari data1: "<<data2.nama<<endl;
	cout<<"nis dari data2: " <<data2.nis <<endl;
}
