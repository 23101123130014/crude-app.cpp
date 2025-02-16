#include <iostream>  //library for input and output operation
#include <string>  // enable the use of std:string
#include <vector>  // Include the vector library for use of std::vector
using namespace std;  // Use the standard namespace to avoid prefixing std::
/
struct Item
{
	int id; //Item ID
	string name; // Item Name
	double price; // Item Price
// Display the item details
	void display() const {
	cout<<"\n ID: " << id << ", NAME " << name << ", PRICE" << price;
	}
};
//function prototype
void createItem(vector<Item>& items); // Function to create a new item
void readItems(const vector<Item>& items); // Function to read and display all items
void updateItem(vector<Item>& items); // Function to update the existing product
{
vector<Item> items; //vector to store item
cout<<"\n 1: create item"; //choice to create item
	}
//function to read items

void updateItem(vector<Item>& items)
{
	int id; //variable to hold the id of the item to update
	cout<<"\n entet the item id to update"; //prompt user to enter the id of the item to update
	cin>>id;
	for(auto item : items)
	{
		if(item.id = id){
			cin.ignore();
			cout<<"\n enter the item name";
			getline(cin, item.name);
			cout<<"\n enter the item price ";
			cin>>item.price;
			cout<<"\n item update sucesfully";
			return;
		}
	}
	cout<<"\n Item with the given id not found";
}
	
//function to delete item

	void deleteItem(vector<Item>& items)
	{
	int id;
	cout<<"\n enter the item id to delete: ";
	cin>>id;
	for(auto it = items.begin(); it != items.end(); ++it)
	{
		if(it->id == id)
		{
			items.erase(it);
			cout<<"\n item deleted sucessfully";
			return;
		}
		
		}
		cout<<"\n item with id " << id <<" not found";	
	}
