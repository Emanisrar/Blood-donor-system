#include<iostream>
#include<string>
#include<fstream>
using namespace std;
static int i = 0;
struct donor
{
	string name;
	string phone_no;
	string blood_group;
	string email;
	string d_count;
	string date;
};
void input_data()
{
	donor d[1000];
	cin.ignore();
	cout << " Enter the name of the donor : ";
	getline(cin, d[i].name);
	cout << " Enter the blood group of the donor : ";
	getline(cin, d[i].blood_group);
	cout << " Enter the phone number of the donor : ";
	getline(cin, d[i].phone_no);
	cout << " Enter the email of the donor : ";
	getline(cin, d[i].email);
	cout << " Enter the donation count of the donor: ";
	getline(cin,d[i].d_count);
	cout << " Enter the date of donation of the donor: ";
	getline( cin, d[i].date);
	cout << endl;

	ofstream record;
	record.open("bds_donor_data.txt", ios::app);
	record << d[i].name << endl;
	record << d[i].blood_group << endl;
	record << d[i].phone_no << endl;
	record << d[i].email << endl;
	record << d[i].d_count << endl;
	record << d[i].date << endl;
	i++;

	record.close();
}
void display()
{
	donor dis[1000];
	ifstream read;
	read.open("bds_donor_data.txt");
		int k=0;
		while(!read.eof())
	{
		
			getline(read,dis[k].name);
			getline(read,dis[k].blood_group);
			getline(read,dis[k].phone_no);
			getline(read,dis[k].email);
			getline(read,dis[k].d_count);
			getline(read,dis[k].date);
			k++;
	}
	k=k-1;

	cout<<endl;
	for(int l=0; l<k; l++)
	{
		cout<<"Donor "<<l+1<<" : "<<endl;
		
		cout<<"Name: "<<dis[l].name<<endl;
 		cout<<"Blood group: "<<dis[l].blood_group<<endl;
		cout<<"Phone number: "<<dis[l].phone_no<<endl;
 		cout<<"Email: "<<dis[l].email<<endl;
 		cout<<"Donation count: "<<dis[l].d_count<<endl;
 		cout<<"Last date of donation: "<<dis[l].date<<endl;
 		cout<<endl;
	}
	read.close();
}
void nameMatch(string namedonor)
{
	donor d1[1000];

	ifstream record;
	int k = 0;
	record.open("bds_donor_data.txt");
	while (!record.eof())
	{
		
		getline(record, d1[k].name);
		getline(record, d1[k].blood_group);
		getline(record, d1[k].phone_no);
		getline(record, d1[k].email);
		getline(record, d1[k].d_count);
		getline(record, d1[k].date);
		k++;
	}
	//k=k-1;
	record.close();
	for (int j = 0; j < k; j++)
	{
		if (namedonor == d1[j].name)
		{
			cout << " SHOWING DATA OF DONOR "<<j+1 << endl;
			cout << " Name of the donor : " << d1[j].name << endl;
			cout << " Blood group of the donor: " << d1[j].blood_group << endl;
			cout << " Phone number of the donor : " << d1[j].phone_no << endl;
			cout << " Email of the donor : " << d1[j].email << endl;
			cout << " Donation count of the donor: " <<d1[j].d_count<<endl;
			cout << " Date of donation of the donor: " <<d1[j].date<<endl;
		}
	}
	cout << endl;
}

void bloodMatch(string blood_group)
{
	donor d2[1000];
	ifstream record;
	int k = 0;
	record.open("bds_donor_data.txt");
	while (!record.eof())
	{
		getline(record, d2[k].name);
		getline(record, d2[k].blood_group);
		getline(record, d2[k].phone_no);
		getline(record, d2[k].email);
		getline(record, d2[k].d_count);
		getline(record, d2[k].date);
		k++;
	}
	k=k-1;
	record.close();
	for (int j = 0; j < k; j++)
	{
		if (blood_group == d2[j].blood_group)
		{
			cout << " SHOWING DATA OF DONOR "<<j+1 << endl;
			cout << " Name of the donor : " << d2[j].name << endl;
			cout << " Blood group of the donor : " << d2[j].blood_group << endl;
			cout << " Phone number of the donor : " << d2[j].phone_no << endl;
			cout << " Email of the donor : " << d2[j].email << endl;
			cout << " Donation count of the donor: " <<d2[j].d_count<<endl;
			cout << " Date of donation of the donor: " <<d2[j].date<<endl;
		}
	}
	cout << endl;
}

void updatedata(string name)
{
	donor d3[1000];
	string success;
	ifstream record;
	int z = 0;
	record.open("bds_donor_data.txt");
	ofstream t_file;
	t_file.open("temp.txt", ios::app);
	while (!record.eof())
	{
		getline(record, d3[z].name);
		getline(record, d3[z].blood_group);
		getline(record, d3[z].phone_no);
		getline(record, d3[z].email);
		getline(record, d3[z].d_count);
		getline(record, d3[z].date);
		z++;
	}
	z=z-1;
	record.close();

	for (int i=0; i<z; i++)
	{
		if (name == d3[i].name)
		{
			cout << " PREVIOUS DATA OF THE DOONOR "<<i+1<<": " << endl;
			cout << " Name of the donor : " << d3[i].name << endl;
			cout << " Blood group of the donor : " << d3[i].blood_group << endl;
			cout << " Phone number of the donor : " << d3[i].phone_no << endl;
			cout << " Email of the donor : " << d3[i].email << endl;
			cout << " Donation count of the donor: " <<d3[i].d_count<<endl;
			cout << " Date of donation of the donor: " <<d3[i].date<<endl;
			cout<<endl<<endl;
			
			
			cout << " NOW UPDATE THE DATA OF THE DOONOR "<<i+1<<": "<< endl;
			cout << " Enter the name of the donor : ";
      //cin.ignore();
			getline(cin, d3[i].name);
			cout << " Enter the blood group of the donor : ";
			getline(cin, d3[i].blood_group);
			cout << " Enter the phone number of the donor : ";
			getline(cin, d3[i].phone_no);
			cout << " Enter the email of the donor : ";
			getline(cin, d3[i].email);
			cout <<endl;
			cout <<"  Was the donation of this donor successful? Enter (yes) if it was successful: ";
			cin >> success;
			cin.ignore();
			if(success == "yes"|| success=="Yes")
			{
				cout<<endl;
				cout << " Update the donation count of this donor by increasing one into already  mentioned count: ";
				getline(cin,d3[i].d_count);
				cout << " Update the date of donation of the donor too: ";
				getline(cin, d3[i].date);
			}
			if(success=="no" || success=="No")
			{
				cout << " Donation count and date of donation remains the same because the donation was not successful."<<endl;
			}

			
			

			// Adding the update record to the file.
			t_file << d3[i].name << endl;
			t_file << d3[i].blood_group << endl;
			t_file << d3[i].phone_no << endl;
			t_file << d3[i].email << endl;
			t_file << d3[i].d_count<< endl;
			t_file << d3[i].date<<endl;
		}
		else
		{
			t_file << d3[i].name << endl;
			t_file << d3[i].blood_group << endl;
			t_file << d3[i].phone_no << endl;
			t_file << d3[i].email << endl;
			t_file << d3[i].d_count<< endl;
			t_file << d3[i].date<<endl;
		}
	}
	t_file.close();
	remove("bds_donor_data.txt");
	rename("temp.txt", "bds_donor_data.txt");
}

void removedata(string name_donor_remove)
{
	donor d4[1000];
	int x = 0;
	ifstream record;
	record.open("bds_donor_data.txt");
	ofstream t_file;
	t_file.open("temp.txt");
	while (!record.eof())
	{
		getline(record, d4[x].name);
		getline(record, d4[x].blood_group);
		getline(record, d4[x].phone_no);
		getline(record, d4[x].email);
		getline(record, d4[x].d_count);
		getline(record, d4[x].date);
		
		x++;
	}
	x=x-1;
	record.close();
	for (int i = 0; i<x; i++)
	{
		if (name_donor_remove!=d4[i].name)
		{
			t_file << d4[i].name << endl;
			t_file << d4[i].blood_group << endl;
			t_file << d4[i].phone_no << endl;
			t_file << d4[i].email << endl;
			t_file << d4[i].d_count<< endl;
			t_file << d4[i].date<<endl;
		}
		if (name_donor_remove==d4[i].name)
		{	
		// data of the donor mentioned removed from the file.	
		}
    }
	t_file.close();
	remove("bds_donor_data.txt");
	rename("temp.txt", "bds_donor_data.txt");

}

int main()
{
		cout << "                             BLOOD DONATION MANAGEMENT SYSTEM               "<<endl;
	int choice;
	while (true)
	{
		cout<<endl;
		cout<<endl;
		cout << "------------------------------------------------------------------------------------"<<endl;
		cout << "                                |MENU DRIVEN PROGRAM|        " << endl;
		cout << "------------------------------------------------------------------------------------"<<endl;
		cout << " 1)Add the donor's record. " << endl;
		cout << " 2)View the donor's record " <<endl;
		cout << " 3)Search the donor's record based on name.(To respond a blood request)" << endl;
		cout << " 4)Search a list of donor's based on blood group. (To respond a blood request)" << endl;
		cout << " 5)Update the donor's record. " << endl;
		cout << " 6)Remove donor's record. " << endl;
		cout << " 7)Exit the program. " << endl;
		cout << "------------------------------------------------------------------------------------"<<endl;
		cout << " Now choose the option of the menu driven program : ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case 1:
		{
			input_data();
			continue;
		}
		case 2:
		{
			cout<<"The data of donors stored in file is shown below: "<<endl;
			display();
			cout<<endl;
			continue;
		}
		case 3:
		{
			string name;
			cout << "Enter the name of the donor whose record you want to display : ";
      cin.ignore();
		  getline(cin,name);
			cout << endl;
			nameMatch(name);
			cout << endl;
			continue;
		}
		case 4:
		{
			string b_group;
			cout << " Enter the blood group of the donor whose record you want to display: ";
			cin>>b_group;
			cout << endl;
			bloodMatch(b_group);
			cout << endl;
			continue;
		}
		case 5:
		{
			string nameupdate;
			cout << " Enter the name of the donor whose record you want to update : ";
			cin.ignore();
		  getline(cin,nameupdate);
			cout<<endl;
			updatedata(nameupdate);
			cout << endl;
			continue;
		}
		case 6:
		{
			string nameremove;
			cout << " Enter the name of the donor whose record you want to remove : ";
			cin.ignore();
		  getline(cin,nameremove);
			cout << endl;
			removedata(nameremove);
			cout << endl;
			continue;
		}
		case 7:
		{
			cout << " Goodbye. The program has ended. " << endl;
			break;
		}
		default:
		{
			cout << " Invalid input";
  			cout << " Must be 1 or 2 or 3 or 4 or 5 or 6 or 7" << endl;
 			continue;
		}
	}
break;
}

	return 0;
}