#include<iostream>
using namespace std;
main(){
	int workingdays;
	float dailyearnings;
	float exchangerate;
	cout<<" working days:";
	cin>> workingdays;
	cout<<" daily earning in dollars:";
	cin>> dailyearnings;
	cout<<"exchange rate:";
	cin>> exchangerate;
	float salaryperm;
	salaryperm=workingdays*dailyearnings;
	float salarypery;
	salarypery=salaryperm*12;
	float salafterbonus;
	salafterbonus=salarypery*2.5+salarypery;
	float salaftertax;
	salaftertax=salafterbonus-(25/100)*salafterbonus;
	float earningsperd;
	earningsperd=salaftertax*(exchangerate/365);
	cout<<" Earnings per day in rps is "<< earningsperd;
} 