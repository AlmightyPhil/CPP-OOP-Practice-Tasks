#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Address
{
public:
	Address(string, string, string, string);
	void print();
	void setName(string);
	void setPhone(string);
	void setCity(string);
	void setStreet(string);
	void setSenderAddress(string);
	void setRecipientAddress(string);
	string getName();
	string getPhone();
	string getCity();
	string getStreet();
	//string getSenderAddress();
	//string getRecipientAddress();

private:
	string name;
	string phone;
	string city;
	string street;

	//string senderAddress;
	//string recipientAddrss;
};