#include <iostream> //library for input and output operation
#include <string> // enable the use of std:string
#include <vector> // Include the vector library for using std::vector
using namespace std;  // Use the standard namespace to avoid prefixing std::
// Define a structure for an Item
struct Item
{
	int id; // Item ID
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
void deleteItem(vector<Item>& items); //function to delete exiting particular item

int main()
{
	int choice; //variable to handle user input
vector<Item> items; //vector to store item
//for displaying crude application menu
do
{
cout<<"-----crude application menu----"; //alert the menu about 
cout<<"\n 1: create item"; //choice to create item
cout<<"\n 2: read items"; //choice to read items
cout<<"\n 3: update item"; //choice to update item
cout<<"\n 4: delete item"; //choice to delete item
cout<<"\n 5: Exit"; //choice for exiting crude application
cout<<"choose the choice above"; //prompot user to choose the choice above
cin>>choice;
//switch on various action on bases of the user choice
	switch(choice)
	{
		case 1:
			 createItem(items); //case which call function to create item
			break;
			case 2:
				 readItems(items); //case which calls function to read items
				break;
				case 3:
					 updateItem(items); //case which calls function to update item
					break;
					case 4:
						deleteItem(items); //case which calls funtion to delete item
						case 5:
							cout<<"\n exting crude application"; //case for exiting the application
							break;
							default:
								cout<<"\n enter correct choice it is long choice"; //alert one to enter correct choice
	}
	
}
while(choice != 5);
return 0;	
}
//definition of function to create item
void createItem(vector<Item>& items)
{
Item newItem;
cout<<"\n enter the item id ";
cin>>newItem.id;
cin.ignore();
cout<<"\n enter the item name";
getline(cin, newItem.name);
items.push_back(newItem);

cout<<"\n item created sucessfully";

}
//function to read items

void readItems(const vector<Item>& items)
{
	if(items.empty())
	{
		cout<<"\n no item found";
		}
		else{
			cout<<"\n item list";
			for(const auto& item : items)
			{
			item.display(); //it display the items found in the vector
			
						}
		}
}

//definition of the function to read item
void updateItem(vector<Item>& items)
{
	int id; //variable to hold the id of the item to update
	cout<<"\n entet the item id to update";
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