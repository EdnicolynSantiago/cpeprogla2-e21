#include<iostream>
#include<iomanip>
#include<cstring>	
#include<fstream>
#include<stdio.h>			
using namespace std;

void equal(char Equal, int n){ //for basic design
	for(int i=0;i<n;i++){
		cout << Equal;
	}
}

void information(){
	
	
class destination{
	public:
	char from[50];
	char to[50];
	int tixprice;
	int st1;
	char st2[5];
	int depart;
	int arrive;
};
struct Passenger{
	char tName[10]; 
	char lName[50]; 
	char fName[50];
	int day;
	int month;
	int year;
	struct{
		char emailAd[50]; 
		char emailAd2[50];
		string pNum;
	}contactDetails;	
};

class Card{
	public:
	char cardHolderFN[50];
	char cardHolderLN[50];
	string cardNo;
	char cardtype[50];
	class{
		public:
		int month;
		int year;
	}cardExpiry;
	
};
	char W;
	char t;
	destination desti;
	Passenger pas;
	Card cardinfo;
	char resp;
	go:equal('=',50); // Number of equal signs as a design
	cout <<endl;
	bk:cout << "Choose your fun-tastic plane exterior: " << endl;
	cout << "a.Peenoy Pride \nb. Hot Pink Bubble Gum \nc. Goldent Tooth Luxor\n";
	cin >> t;
	if((t=='a')||(t=='A')){
		ofstream pnoy("c:\\cpefinal\\E21_Santiago_Ednicolyn\\pnoy.txt");
		cout << "There's a generated preview for this kind of plane in TXT file.";
		pnoy << "https://i.imgsafe.org/d23781940a.jpg ";
		cin.ignore();
		pnoy.close();
		cout << "\nAre you sure you want this exterior?[Y/N] ";
		cin >> W;
		if((W=='Y')||(W=='y')){
			goto destn;
		}
		if((W=='N')||(W=='n')){
			goto bk;
			cout << endl << endl;
		}
	}
	if((t=='b')||(t=='B')){
		ofstream bbgum("c:\\cpefinal\\E21_Santiago_Ednicolyn\\bbgum.txt");
		cout << "There's a generated preview for this kind of plane in TXT file.";
		bbgum << "https://i.imgsafe.org/d243866f9d.jpg";
		cin.ignore();
		bbgum.close();
		cout << "\nAre you sure you want this exterior?[Y/N] ";
		cin >> W;
		if((W=='Y')||(W=='y')){
			goto destn;
		}
		if((W=='N')||(W=='n')){
			goto bk;
			cout << endl;
		}
	}
	if((t=='c')||(t=='C')){
		ofstream gold("c:\\cpefinal\\E21_Santiago_Ednicolyn\\gold.txt");
		cout << "There's a generated preview for this kind of plane in TXT file.";
		gold << "https://i.imgsafe.org/d24bec5803.jpg";
		cin.ignore();
		gold.close();
		cout << "\nAre you sure you want this exterior?[Y/N] ";
		cin >> W;
		if((W=='Y')||(W=='y')){
			goto destn;
		}
		if((W=='N')||(W=='n')){
			goto bk;
			cout << endl;
		}
	}
	destn:cout <<setw(10)<<"\nDestination"<<endl; //This part shows the travel information from destination to seat number
	equal('=',50); // Number of equal signs as a design
	cout <<endl;
		ifstream destinations("Destinations.txt"); //This shows the destinations list imported from txt file
		string destin1;
		string destin2;
		cout<<"Vice Versa" <<endl;
		while(destinations>>destin1>>destin2){
			cout<<destin1<<" - "<<destin2<<endl;
		}
	equal('=',50);
	cout<<endl;
	cout <<"From: "; 
	cin.ignore();
	cin.getline(desti.from,49); //Getting initial location - INPUT
	cout<<"To:";
	cin.getline(desti.to,49);	//Getting the destination location - OUTPUT
	system("cls");
	equal('=',50);
	cout<<endl;
	ifstream time("time.txt"); //This part shows the departure and arrival time being imported from txt file
		int time1;
		int time2;
		cout<<"Departure Time"<<setw(15)<<"Arrival Time"<<endl; // This shows two column table of departure and arrival time
		
		while(time>>time1>>time2){
			cout<<time1<<setw(19)<<time2<<endl;
		}
		equal('=',50);
		cout<<endl;
		cout<<"Time of Departure:";
		cin>>desti.depart; // Getting the departure time - INPUT
		cout<<"Time of Arrival: ";
		cin>>desti.arrive;	// Getting the arrival time - INPUT
		system("cls");
	equal('=',50);
	cout<<endl;
	ifstream tixPrice("ticketPrice.txt"); //This part shows the ticket prices list imported from txt file
		string destina1;
		string destina2;
		char P;
		int Price;
		cout<<"Destinations (Vice Versa)"<<setw(15)<<"Ticket Price"<<setw(12)<<endl; // A table showing the destinations list together with their corresponding prices
		equal('=',50);
	    cout<<endl;
		while(tixPrice>>destina1>>destina2>>P>>Price){
			cout<<destina1<<" - "<<destina2<<"	"<<P<<Price<<endl;
		}
		cin.ignore();


	equal('=',50);
	cout<<endl;
	cout <<"Ticket Price:";
	cin >>desti.tixprice; //Getting the ticket price shown on the table - INPUT
	system("cls");
	
	equal('=',50);
	cout<<endl;	
	ifstream seat("seat.txt"); //This part shows the seat number list imported from txt file
		string Seat1,Seat2,Seat3,Seat4,Seat5,Seat6,Seat7,Seat8,Seat9,Seat10;
		int s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
		cout<<"Seat Plan"<<endl;
		equal('=',50);
		
		cout<<endl;
		while(seat>>s1>>Seat1>>s2>>Seat2>>s3>>Seat3>>s4>>Seat4>>s5>>Seat5>>s6>>Seat6>>s7>>Seat7>>s8>>Seat8>>s9>>Seat9>>s10>>Seat10){
			cout<<s1<<Seat1<<setw(2)<<s2<<Seat2<<setw(2)<<s3<<Seat3<<setw(7)<<s4<<Seat4<<setw(2)<<s5<<Seat5
				<<setw(2)<<s6<<Seat6<<setw(2)<<s7<<Seat7<<setw(7)<<s8<<Seat8<<setw(2)<<s9<<Seat9<<setw(3)<<s10<<Seat10<<endl<<endl;}
	equal('=',50);
	cout <<endl;
	
	cout<<"\nChoose your Plane Seat"<<endl;
	cout<<"Seat number: ";
	cin>>desti.st1;
	cin.ignore(); 
	cout<<"\nSeat letter: ";
	cin.getline(desti.st2,2);
	system("cls");
	equal('=',50);
	cout <<endl;
	psi:cout << "Passenger Information" << endl;
	equal('=',50);
	cout <<endl;
	cout << "\nTitle*: [Mr./Ms.] "; 
	cin.getline(pas.tName,49); // Getting the Title name - INPUT
	cin.ignore();
	cout << "\nFirst Name*: ";
	gets(pas.fName); // Getting the First name - INPUT
	cout << "\nLast Name*: ";
	cin.getline(pas.lName, 49); // Getting the Last name - INPUT
	cout << "\nDate of Birth (Format: MM-DD-YYYY)"<<endl; // Getting the Date of Birth of passenger - INPUT
	cout<<"\nEnter Birth Month: ";
	cin>>pas.month;
	cout<<"\nEnter Birth Date: ";
	cin>>pas.day;
	cout<<"\nEnter Birth Year: ";
	cin>>pas.year;
	equal('=',50);
	cout << endl;
	cout <<"         Contact Details"<<endl;
	equal('=',50);
	cout <<endl;
em: cout << "\nEmail Address*: ";
	cin.ignore();
	cin.getline(pas.contactDetails.emailAd,49); // Getting the Email Address - INPUT
	
	cout <<"Confirm Email address*: ";
	cin.getline(pas.contactDetails.emailAd2,49); // Getting the Email Address for confirmation - INPUT
	
	
	if(strlen(pas.contactDetails.emailAd)==strlen(pas.contactDetails.emailAd2)) // This parts shows if the email address is correct.
	{
		cout << "\nPhone Number*: ";
		cin >>pas.contactDetails.pNum; // Getting the Phone number - INPUT
		system("cls");
	equal('=',50);cout <<endl;
	cout <<"      Card Information"<<endl; //This part shows payment information
	equal('=',50);cout <<endl;
		cout<<"Card Holder's First Name: ";
		cin.ignore();
		cin.getline(cardinfo.cardHolderFN,49); // Getting the First name - INPUT
		cout <<"Card Holder's Last Name: ";
		cin.getline(cardinfo.cardHolderLN,49); // Getting the Last name - INPUT
		cout <<"Card Type (Visa/Matercard): ";
		cin.getline(cardinfo.cardtype, 49);	// Getting the Card Type - INPUT
		cout <<"Card Number (16-no spaces): ";
		cin >> cardinfo.cardNo; // Getting the Card Number - INPUT
		cout<<"Card Expiration Month: ";
		cin >>cardinfo.cardExpiry.month;
		cout<<"\nConfirm Card Expiration Year: ";
		cin>>cardinfo.cardExpiry.year; // Getting the Date of Expiry - INPUT
		
	}
	else
	{
		cout<<"Email address does not match.";
		goto em;
	}
	system("cls");
	soback:cout << endl;

	equal('=',50);cout <<endl;
	ofstream receipt("c:\\cpefinal\\E21_Santiago_Ednicolyn\\receipt.txt");
	receipt << "===BOOK FLIGHT INFORMATION SUMMARY===" << endl; //This part shows the summary of the travel/flight information
	cout << "      BOOK FLIGHT INFORMATION SUMMARY" << endl; //This part shows the summary of the travel/flight information
	equal('=',50);cout <<endl;
	equal('=',50);cout <<endl;
	receipt <<"===Contact Details==="<<endl; //Displaying the contact details of a passenger
	cout <<"         Contact Details"<<endl; //Displaying the contact details of a passenger
	equal('=',50);cout <<endl<<endl;
	receipt << "Full Name: " << pas.tName<<" " << strcat(pas.fName,"  ") << pas.lName << endl; // Displaying the full name - OUTPUT
	cout << "Full Name: " << pas.tName<<" " << strcat(pas.fName,"  ") << pas.lName << endl; // Displaying the full name - OUTPUT
	receipt << "Date of Birth: " << pas.month << "/" << pas.day << "/" << pas.year << endl; // Displaying the birth date - OUTPUT
	cout << "Date of Birth: " << pas.day << "/" << pas.month << "/" << pas.year << endl; // Displaying the birth date - OUTPUT
	receipt << "Email Address: " << pas.contactDetails.emailAd << endl; // Displaying the Email address - OUTPUT
	cout << "Email Address: " << pas.contactDetails.emailAd << endl; // Displaying the Email address - OUTPUT
	receipt << "Phone Number: " << pas.contactDetails.pNum << endl << endl; // Displaying the passenger's phone number - OUTPUT
	cout << "Phone Number: " << pas.contactDetails.pNum << endl << endl; // Displaying the passenger's phone number - OUTPUT
	equal('=',50);cout <<endl;
	receipt <<"         Flight Details"<<endl; // This part shows the information about passenger's flight
	cout <<"         Flight Details"<<endl; // This part shows the information about passenger's flight
	equal('=',50);cout <<endl<<endl;	
	receipt << "Destination: " << endl;
	cout << "Destination: " << endl;
	receipt<< "From: "<<desti.from<<"\nTo: "<<desti.to<<endl; // Displaying the location to their destination - OUTPUT
	cout<< "From: "<<desti.from<<"\nTo: "<<desti.to<<endl; // Displaying the location to their destination - OUTPUT
	receipt<<"Departure Time: "<<desti.depart<<endl;
	cout<<"Departure Time: "<<desti.depart<<endl;
	receipt<<"Arrival Time: "<<desti.arrive<<endl;
	cout<<"Arrival Time: "<<desti.arrive<<endl;
	receipt <<"Flight fee: "<<desti.tixprice<<endl; // Displaying the flight price - OUTPUT
	cout <<"Flight fee: "<<desti.tixprice<<endl; // Displaying the flight price - OUTPUT
	receipt << "\nReserved Flight Seat: "<<desti.st1<<desti.st2 << endl; // Displaying the seat number - OUTPUT
	cout << "\nReserved Flight Seat: "<<desti.st1<<desti.st2 << endl; // Displaying the seat number - OUTPUT
	receipt << "Card Type: " << cardinfo.cardtype << endl; // Displaying the card type used - OUTPUT
	cout << "Card Type: " << cardinfo.cardtype << endl; // Displaying the card type used - OUTPUT
	receipt << "Card Number: " << cardinfo.cardNo << endl<<endl; // Displaying the card number - OUTPUT|
	cout << "Card Number: " << cardinfo.cardNo << endl<<endl; // Displaying the card number - OUTPUT|
	receipt.close();
	equal('=',50);cout <<endl;
	cout << endl << "Submit the Details? <Y/N>" << endl;
	cin>>W;
	if((W == 'Y')|| (W =='y')) //This part shows the flight has been booked.
	{
		system("cls"); // Clears screen
		
	cout << "Your flight has been booked, please check your receipt in the text file. Thank you very much!";
	}
	else
	{
		cout <<"All your data will be Deleted. Do you want to continue? <Y/N>";
		cin >>t;
		//This part shows data will be deleted
		if((t== 'Y')|| (t =='y')){
			system("cls");

	cout<<"The data has been deleted. Goodbye!";
		}
		else{
		
			goto soback;
	}
	}


}
main(){
	int x;
bback:	equal('=',50);//call for the equal
	cout <<endl;
	cout<<"            WELCOME TO STEELLINES!" <<endl; //This part shows the main menu of the program
	equal('=',50);
	cout <<"\nPlease pick an option from the menu below:"<<endl;
	cout <<"1. Flight Schedule Information"<<endl;
	cout <<"2. Book a Flight"<<endl<<endl;
	cout <<"Enter your choice: ";
	cin>>x;
	system("cls");
	switch(x){
		case 1:{
				int q;
	// This shows the list of routes to choose from
back:cout<<"\nChoose your Flight:\n"<<endl;
	cout<<"1. Manila to Boracay"<<"\t\t\t"<<endl;
	cout<<"2. Manila to Catbalogan"<<endl;
	cout<<"3. Manila to Gen.Santos"<<"\t\t\t"<<endl;
	cout<<"4. Manila to Guimaras"<<endl;
	cout<<"5. Manila to Ilocos Norte"<<endl;
	cout<<"6. Manila to Mindoro"<<endl;
	cout<<"7. Manila to Palawan"<<endl;
	cout<<"8. Manila to Romblon"<<endl;
	cout<<"9. Manila to Siquijor"<<endl;
	cout<<"10. Manila to Surigao"<<endl;
	cout <<"\nEnter your Choice: ";
	cin>>q;

	switch(q){
	case 1:{
		char w,e;
		ifstream mnlTObor("mnlTObor.txt"); //This shows the departure, arrival and frequency from Manila to Bacolod imported from txt file
		string to;
		string from;
		string name1;
		int name2;
		string freq;
		int departure;
		int arrival;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTObor >>to>>from>>name1 >> name2 >>freq >> departure >> arrival){
			cout<<to<<setw(10)<<from<<setw(9)<<name1 <<name2 <<setw(13)<< freq <<setw(13)<<departure<<setw(14)<<arrival<<endl;
		}
		cout<<endl;
		cout<<"PRICE: 1,400 Php"<<endl;
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w; // Inputs the response - INPUT
		
		if((w=='y')||(w=='Y'))
		{
			system("cls");
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e; // Inputs the response - INPUT
			if((e=='y')||(e=='Y')){
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}
		case 2:
			{char w1,e1;
		ifstream mnlTOcat("mnlTOcat.txt"); //This shows the departure, arrival and frequency from Manila to Tagbiliran imported from txt file
		string to1;
		string from1;
		string name11;
		int name21;
		string freq1;
		int departure1;
		int arrival1;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOcat >>to1>>from1>>name11 >> name21 >>freq1 >> departure1 >> arrival1){
			cout<<to1<<setw(10)<<from1<<setw(9)<<name11 <<name21 <<setw(13)<< freq1 <<setw(13)<<departure1<<setw(14)<<arrival1<<endl;
		}
		cout<<endl;
		cout<<"PRICE: 1,200 Php"<<endl;
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w1; // Inputs the response - INPUT
		
		if((w1=='y')||(w1=='Y'))
		{
			
			goto back;
		} 
		else
		{
			cout <<" Do you want to book your flight now? (Y/N) ";
			cin >> e1; // Inputs the response - INPUT
			if((e1=='y')||(e1=='Y')){
				system("cls");
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}
	case 3:	{char w2,e2;
		ifstream mnlTOgen("mnlTOgen.txt"); //This shows the departure, arrival and frequency from Manila to Butuan imported from txt file
		string to2;
		string from2;
		string name12;
		int name22;
		string freq2;
		int departure2;
		int arrival2;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOgen >>to2>>from2>>name12 >> name22 >>freq2 >> departure2 >> arrival2){
			cout<<to2<<setw(10)<<from2<<setw(9)<<name12 <<name22 <<setw(13)<< freq2 <<setw(13)<<departure2<<setw(14)<<arrival2<<endl;
		}
		cout<<endl;
		cout<<"PRICE: 1,999 Php"<<endl;
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w2; // Inputs the response - INPUT
		
		if((w2=='y')||(w2=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e2; // Inputs the response - INPUT
			if((e2=='y')||(e2=='Y')){
				system("cls");
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}
		case 4:
			{char w3,e3;
		ifstream mnlTOgui("mnlTOgui.txt"); //This shows the departure, arrival and frequency from Manila to Cagayan De Oro imported from txt file
		string to3;
		string from3;
		string name13;
		int name23;
		string freq3;
		int departure3;
		int arrival3;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOgui >>to3>>from3>>name13 >> name23 >>freq3 >> departure3 >> arrival3){
			cout<<to3<<setw(10)<<from3<<setw(9)<<name13 <<name23 <<setw(13)<< freq3 <<setw(13)<<departure3<<setw(14)<<arrival3<<endl;
		}
		cout<<endl;
		cout<<"PRICE: 2,099 Php"<<endl;
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w3; // Inputs the response - INPUT
		
		if((w3=='y')||(w3=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e3; // Inputs the response - INPUT
			if((e3=='y')||(e3=='Y')){
				system("cls");
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}	
	case 5:
		{char w4,e4;
		ifstream mnlTOiloc("mnlTOiloc.txt");
		string to4;
		string from4;
		string name14;
		int name24;
		string freq4;
		int departure4;
		int arrival4;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOiloc >>to4>>from4>>name14 >> name24 >>freq4 >> departure4 >> arrival4){
			cout<<to4<<setw(10)<<from4<<setw(9)<<name14 <<name24 <<setw(13)<< freq4<<setw(13)<<departure4<<setw(14)<<arrival4<<endl;
		}
		cout<<endl;
		cout<<"PRICE: 2,299 Php"<<endl;
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w4; // Inputs the response - INPUT
		
		if((w4=='y')||(w4=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e4; // Inputs the response - INPUT
			if((e4=='y')||(e4=='Y')){
				system("cls");
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}	
	case 6:
		{char w5,e5;
		ifstream mnlTOmind("mnlTOmind.txt"); //This shows the departure, arrival and frequency from Manila to Cebu imported from txt file
		string to5;
		string from5;
		string name15;
		int name25;
		string freq5;
		int departure5;
		int arrival5;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOmind >>to5>>from5>>name15 >> name25 >>freq5 >> departure5 >> arrival5){
			cout<<to5<<setw(10)<<from5<<setw(9)<<name15 <<name25 <<setw(13)<< freq5<<setw(13)<<departure5<<setw(14)<<arrival5<<endl;
		}
		cout<<endl;
		cout<<"PRICE: 2,499 Php"<<endl;
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w5; // Inputs the response - INPUT
		
		if((w5=='y')||(w5=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e5; // Inputs the response - INPUT
			if((e5=='y')||(e5=='Y')){
				system("cls");
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}	
	case 7:
		{char w6,e6;
		ifstream mnlTOpal("mnlTOpal.txt"); //This shows the departure, arrival and frequency from Manila to Cotabato imported from txt file
		string to6;
		string from6;
		string name16;
		int name26;
		string freq6;
		int departure6;
		int arrival6;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOpal >>to6>>from6>>name16 >> name26 >>freq6 >> departure6>> arrival6){
			cout<<to6<<setw(10)<<from6<<setw(9)<<name16 <<name26 <<setw(13)<< freq6<<setw(13)<<departure6<<setw(14)<<arrival6<<endl;
		}
		cout<<endl;
		cout<<"PRICE: 1,999 Php"<<endl;
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w6; // Inputs the response - INPUT
		
		if((w6=='y')||(w6=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e6; // Inputs the response - INPUT
			if((e6=='y')||(e6=='Y')){
				system("cls");
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}
	case 8:
	{char w7,e7;
		ifstream mnlTOrom("mnlTOrom.txt"); //This shows the departure, arrival and frequency from Manila to Davao imported from txt file
		string to7;
		string from7;
		string name17;
		int name27;
		string freq7;
		int departure7;
		int arrival7;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOrom >>to7>>from7>>name17 >> name27 >>freq7 >> departure7 >> arrival7){
			cout<<to7<<setw(10)<<from7<<setw(9)<<name17 <<name27 <<setw(13)<< freq7<<setw(13)<<departure7<<setw(14)<<arrival7<<endl;
		}cout<<endl;
		cout<<"PRICE: 3,499 Php"<<endl;
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w7; // Inputs the response - INPUT
		
		if((w7=='y')||(w7=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e7; // Inputs the response - INPUT
			if((e7=='y')||(e7=='Y')){
				system("cls");
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}		
	case 9:
		{char w8,e8;
		ifstream mnlTOsiq("mnlTOsiq.txt"); //This shows the departure, arrival and frequency from Manila to Dipolog imported from txt file
		string to8;
		string from8;
		string name18;
		int name28;
		string freq8;
		int departure8;
		int arrival8;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOsiq >>to8>>from8>>name18 >> name28 >>freq8 >> departure8 >> arrival8){
			cout<<to8<<setw(10)<<from8<<setw(9)<<name18 <<name28 <<setw(13)<< freq8<<setw(13)<<departure8<<setw(14)<<arrival8<<endl;
		}
		cout<<endl;
		cout<<"PRICE: 2,999 Php"<<endl;
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w8; // Inputs the response - INPUT
		
		if((w8=='y')||(w8=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to Book your flight now? (Y/N) ";
			cin >> e8; // Inputs the response - INPUT
			if((e8=='y')||(e8=='Y')){
				system("cls");
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}	
	case 10:
			{char w9,e9;
		ifstream mnlTOsur("mnlTOsur.txt"); //This shows the departure, arrival and frequency from Manila to Dumaguete imported from txt file
		string to9;
		string from9;
		string name19;
		int name29;
		string freq9;
		int departure9;
		int arrival9;
		cout<<"FROM"<<"      "<<"TO"<<"       "<<"FLIGHT" <<"     " << "FREQUENCY" <<"     " <<"DEPARTURE" << "     " << "ARRIVAL"<< endl;
		while(mnlTOsur >>to9>>from9>>name19 >> name29>>freq9 >> departure9 >> arrival9){
			cout<<to9<<setw(10)<<from9<<setw(9)<<name19 <<name29 <<setw(13)<< freq9<<setw(13)<<departure9<<setw(14)<<arrival9<<endl;
		}
		cout<<endl;
		cout<<"PRICE: 2,199 Php"<<endl;
			equal('=',50);
		cout <<"\nDo you want to go back to the flight schedules? (Y/N)";
		cin >>w9; // Inputs the response - INPUT
		
		if((w9=='y')||(w9=='Y'))
		{
			goto back;
		} 
		else
		{
			cout <<" Do you want to book your flight now? (Y/N) ";
			cin >> e9; // Inputs the response - INPUT
			if((e9=='y')||(e9=='Y')){
				system("cls");
				goto bback;
			}
			else{
				goto bye;
			}
			
		}
	}	
		

		
		}
}
		
		{
			case 2:
				{
					information();
				}
	

	
	

} 
bye:
Bye:
return 0;
}
}
