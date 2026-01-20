#include<iostream>

using namespace std;

int main() 
{
	long long n; cin>>n;
	long long  res=0; 
	long long du=n; 
	if(du>=1000){
		res+=du/1000;
		du=du%1000;}
	if(du>=500){
		res+=du/500;
		du=du%500;}
	if(du>=200){
		res+=du/200;
		du=du%200;}
	if(du>=100){
		res+=du/100;
		du=du%100;}
	if(du>=50){
		res+=du/50;
		du=du%50;}
	if(du>=20){
		res+=du/20;
		du=du%20;}
	if(du>=10){
		res+=du/10;
		du=du%10;}
	if(du>=5){
		res+=du/5;
		du=du%5;}
	if(du>=2){
		res+=du/2;
		du=du%2;}
	if(du>=1){
		res++;}
	cout<<res; 
}
