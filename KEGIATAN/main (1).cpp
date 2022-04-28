#include <iostream>
using namespace std;
class data {
  public :
  void input();
  void output();
  void proses();
  
private:
  string dosen;
  string matkul;
  int bnyk_nil;
  int nilai[100];
  int max;
  int min;
  int jumlah;
  float rata;
};

void data::input(){
  cout<<"Penginputan Nilai Mahasiswa"<<endl;
  cout<<"==========================="<<endl;
  cout<<" Nama Dosen :";
  getline(cin,dosen);
  cout<<" Nama Matkul :";
  getline(cin,matkul);
  cout<<" Banyak Nilai :";
  cin>>bnyk_nil;
  nilai[bnyk_nil];
  for(int i=0; i<bnyk_nil; i++){
    cout<<"Masukka Nilai ["<<i+1<<"] = ";
    cin>>nilai[i];
  }
  jumlah=0;
}
void data::proses(){
  for(int i=0; i<bnyk_nil; i++) {
    if(nilai[i]>max)
      max=nilai[i];
  }
  for(int j=0; j<bnyk_nil; j++){
    if(nilai[j]<min)
      min=nilai[j];
  }
  for(int i=0; i<bnyk_nil; i++){
    jumlah+=nilai[i];
  }
  rata=jumlah/bnyk_nil;
}
void data::output(){
  cout<<" \n Nama Dosen  :"<<dosen;
  cout<<" \n Nama Matkul :"<<matkul;
  cout<<"\n\n Nilai \n";
  for(int i=0; i<bnyk_nil; i++){
    cout<<" Nilai ["<<i+1<<"] :" <<nilai[i];
    cout<<endl;
  }
  cout<<"\n Nilai Max   :"<<max;
  cout<<"\n Nilai Min   :"<<min;
  cout<<"\n Nilai Rata  :"<<rata;
  cout<<endl;
}
int main(){
  data run;
  run.input();
  run.proses();
  run.output();
}