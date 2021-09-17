#include<iostream>

#include<conio.h>

#include<stdio.h>
using namespace std;
struct sinhvien {
  char id[12];
  char hoten[20];
  float mark;
  int tuoi;
  char gioitinh[5];
};
void xuatsv(sinhvien y){
	cout<<"\nMa sinh vien : "<<y.id;
	cout<<"\nho ten : "<<y.hoten;
	cout<<"\ngioi tinh : "<<y.gioitinh;
	cout<<"\ndiem : "<<y.mark;
	cout<<"\ntuoi : "<<y.tuoi;
}
void nhapsv(sinhvien &sv)
{
    sinhvien trien;
  cout << "nhap ten ma so sinh vien : ";
  fflush(stdin);
  gets(trien.id);
  cout << "nhap hoten : ";
  fflush(stdin);
  gets(trien.hoten);
  cout << "nhap gioi tinh : ";
  fflush(stdin);
  gets(trien.gioitinh);
  cout << "nhap tuoi : ";
  cin >> trien.tuoi;
  cout << "nhap diem : ";
  cin >> trien.mark;	
}
void input(sinhvien a[],int n)
{
	for(i=0;i<n;i++){
		nhapsv(a[i]);
	}
}
void output(nhapsinhvien a[],int n){
	for(i=0;i<n;i++){
		suatsv(a[i]);
	}
}
int main() {
  sinhvien arr[100];
  int n;
  cout<<"nhap n : ";
  cin>>n;
  input(a,n);
  output(a,n);

}
