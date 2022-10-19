//				UTP Kelas C 
//Kelompok 11
//Anggota:
//1. Elsa Dwi Agresty(2217051058)
//2.Maharani Wahyu Tantri(2217051051)
//3.Rita Irma Yani(2217051047)
//
//Tema: Dzikir Counter





#include <iostream>
using namespace std;



void header (){
	cout << "======================================================"<<endl;
	cout << "\t\t AHLAN WA SAHLAN TO DZIKIR COUNTER! \t\t"<<endl;
	cout << "======================================================"<<endl;
}
void closeHeader (){
	cout << "======================================================"<<endl;
	cout << "\t\t JAZAKALLAH KHAIRAN \t\t"<<endl;
	cout << " \t\t SEMOGA ISTIQOMAH DALAM BERDZIKIR \t\t"<<endl;
	cout << "======================================================"<<endl;
}

int main(){
  int D;
	int jumlah;
	string nama, dzikir,ya;
	int tasbih[100], hitungdzikir, dzikirkurang, jumlahdzikir,total;
	char kodedzikir;
	
	
	do {
	header (); 
	cout <<endl;
	
	cout <<"BERIKUT LIST DZIKIR YANG DAPAT ANDA AMALKAN HARI INI : "<<endl;
	cout <<"1. Istighfar : Astaghfirullahaladzim "<<endl;
	cout <<"2. Tahmid : Alhamdulillah "<<endl;
	cout <<"3. Tasbih  :Subhanallah "<<endl;
	cout <<"4. Takbir : Allahuakbar"<<endl;
	cout <<"5. Tahlil  :Laailahailallah"<<endl;
	cout <<"6. Shalawat  : Allahumma solli 'alaa muhammad,wa'alaa aali muhammad"<<endl;
	
	cout <<endl;
	cout <<"Nama kamu\t\t :";getline (cin, nama);
	cout << "Asssalamu'alaikum " << nama <<endl<<endl; 
	cout << " Rasulullah SAW bersabda,tiada suatu kaum yang duduk sambil berdzikir kepada Allah melainkan mereka akan dikelilingi oleh malaikat, diselimuti oleh rahmat dan Allah akan mengingat mereka di hadapan makhluk yang ada di sisi-Nya. (HR. Bukhari). " <<endl;
	cout <<endl;
	cout <<"Berapa kali anda ingin berdzikir : " ; cin >> jumlahdzikir;
	cout <<endl;
	
	for (int x=1; x<=jumlahdzikir; x++){
		    cout << "count dzikir " << x <<endl; 
			cout << "Kode Dzikir [1/2/3/4/5/6]\t : "; cin >> kodedzikir;
		if (kodedzikir == '1'){
			cout << "Dzikir yang anda pilih\t : Astaghfirullahaladzim \t\t\t\t\t\t \u0623\u0633\u062A\u063A\u0641\u0631\u0644\u0644\u0647 \u0627\u0644\u0639\u0638\u064A\u0645"<<endl;
      		tasbih[D]=1;
		} else if (kodedzikir == '2'){
			cout << "Dzikir yang anda pilih\t :  Alhamdulillah \t\t\t\t\t\t \u0627\u0644\u062D\u0645\u062F \u0644\u0644\u0647 "<<endl;
			tasbih[D]=1;
		} else if (kodedzikir == '3'){
			cout << "Dzikir yang anda pilih\t : Subhanallah \t\t\t\t\t\t\t \u0633\u0628\u062D\u0646 \u0627\u0644\u0644\u0647 "<<endl; 
			tasbih[D]=1;
		} else if (kodedzikir == '4'){
			cout << "Dzikir yang anda pilih\t : Lailahailallah \t\t\t\t\t\t \u0644\u0627\u0627\u0644\u0647 \u0627\u0644\u0627 \u0627\u0644\u0644\u0647"<<endl; 
			tasbih[D]=1;
		} else if (kodedzikir == '5'){
			cout << "Dzikir yang anda pilih\t : Allahuakbar \t\t\t\t\t\t\t \u0627\u0644\u0644\u0647 \u0627\u0643\u0628\u0631 "<<endl; 
			tasbih[D]=1;
    	}else if (kodedzikir  == '6'){
    		cout << "Dzikir yang anda pilih\t : Allahumma solli 'alaa muhammad,wa'alaa aali muhammad \t\t\t\t\t\t \u0627\u0644\u0644\u0647\u0645 \u0635\u0644 \u0639\u0644 \u0633\u064A\u062F\u0646\u0627 \u0645\u062D\u0645\u062F \u0648 \u0639\u0644\u0649 \u0622\u0644  \u0633\u064A\u062F\u0646 \u0645\u062D\u0645\u062F"<<endl;
    		tasbih[D]=1;
		} else {
			cout << "Maaf untuk saat ini anda bisa berdzikir dari enam pilihan diatas" <<endl; 

      
      }
		jumlah += tasbih[D];
    
      	}
      	
      	
      	cout <<endl;
	cout << "Jumlah Dzikir\t\t :"<< jumlah <<endl;
	cout << "Apakah anda ingin dzikir lagi?  [Y/T] : "; cin >> ya;
	cout <<endl;
	cin.ignore(1, '\n');

    jumlah = 0;	
	}
	while (ya == "Y"    || ya =="y");
	cout <<endl;
	closeHeader ();
	
	return 0;
}
