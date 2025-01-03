#include <iostream> //library for input and output operation
#include <string> // enable the use of std:string
#include <vector>
using namespace std;  // Use the standard namespace to avoid prefixing std::
struct Item
{
	int id;
	string name;
	double price;
	void display() const {
	cout<<"\n ID: " << id << ", NAME " << name << ", PRICE" << price;
	}
};
//function prototype
void createItem(vector<Item>& items);
void readItems(const vector<Item>& items);
void updateItem(vector<Item>& items);
void deleteItem(vector<Item>& items);

int main()
{
	int choice;
vector<Item> items;

do
{
cout<<"-----crude application menu----";
cout<<"\n 1: create item";
cout<<"\n 2: read items";
cout<<"\n 3: update item";
cout<<"\n 4: delete item";
cout<<"\n 5: Exit";
cout<<"choose the choice above";
cin>>choice;

	switch(choice)
	{
		case 1:
			 createItem(items);
			break;
			case 2:
				 readItems(items);
				break;
				case 3:
					 updateItem(items);
					break;
					case 4:
						deleteItem(items);
						case 5:
							cout<<"\n exting crude application";
							break;
							default:
								cout<<"\n enter correct choice it is long choice";
	}
	
}
while(choice != 5);
return 0;	
}
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
			item.display();
			
						}
		}
}

//function to update item
void updateItem(vector<Item>& items)
{
	int id;
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