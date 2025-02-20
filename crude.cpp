using namespace std;  // Use the standard namespace to avoid prefixing std::
struct Item
	int id; //Item ID
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
cout<<"\n 1: create item"; //choice to create item
			getline(cin, item.name);
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
