#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "Hilmys.h"

bool cekLosing(Person *Hilmys){
	if((Health(*Hilmys) == 0))) return true;
	return false;
}

bool cekWinning(Person *Hilmys){
	if((Health(*Hilmys) == 100) && (Social(*Hilmys) == 100) && (Hygienic(*Hilmys) == 100) && (Hygienic(*Hilmys) == 100)) return true;
	return false;
}

void printStat(Person *Hilmys, activities *Act){
	printf("\n");
	printf("Saat ini stat dari Hilmys adalah: \n");
	printf("%s%d%s","[Health: ", Health(*Hilmys), "]\n");
	printf("%s%d%s","[Social: ", Social(*Hilmys), "]\n");
	printf("%s%d%s","[Hygienic: ", Hygienic(*Hilmys), "]\n");
	printf("%s%d%s","[Money: ", Hygienic(*Hilmys), "]\n");
	printf("\n");
}

void kurangStat(Person *Hilmys, int health, int social, int hygienic, int money){
	Health(*Hilmys) -= health;
	Social(*Hilmys) -= social;
	Hygienic(*Hilmys) -= hygienic;
	Money(*Hilmys) -= money;
}

void tambahStat(Person *Hilmys, int health, int social, int hygienic, int money){
	Health(*Hilmys) = mini(health+Health(*Hilmys), 100);
	Social(*Hilmys) = mini(social+Social(*Hilmys), 100);
	Hygienic(*Hilmys) = mini(hygienic+Hygienic(*Hilmys), 100);
	Money(*Hilmys) = mini(money+Money(*Hilmys), 100);
}

bool isEnoughStat(int userVal, int param){
	if(userVal < param) return false;
	return true;
}

void init(Person *Hilmys, activities *Act, int val){
	//Inisialisasi Stat Awal Hilmys
		//Mulai
		Health(*Hilmys) = val;
		Social(*Hilmys) = val;
		Hygienic(*Hilmys) = val;
		Money(*Hilmys) = val;
		//Selesai
	//Inisialisasi Activities
		//inisialisasi aktivitas Tidur
		(*Act).Tidur.healthReq = 0; 
		(*Act).Tidur.socialReq = 0;
		(*Act).Tidur.hygienicReq = 0;
		(*Act).Tidur.moneyReq = 0;
		
		//inisialisasi aktivitas Makan 
		(*Act).Makan.healthReq = 5; //untuk makan perlu sehat dan ada uang
		(*Act).Makan.socialReq = 0;
		(*Act).Makan.hygienicReq = 0; 
		(*Act).Makan.moneyReq = 0; 
		
		//inisialisasi aktivitas Mandi
		(*Act).MCK.healthReq = 5; //untuk mandi perlu sehat dan ada uang buat beli sabun :v
		(*Act).MCK.socialReq = 5;
		(*Act).MCK.hygienicReq = 5;
		(*Act).MCK.moneyReq = 5;
}
