class MenuItem {
private:
	string name;
	string description;
	bool vegetarian;
	double price;
public:
	MenuItem(string n, string d, bool v, double p);
	string getName();
	string getDescription();
	double getPrice();
	bool isVegetarian();
	string toString();
};
