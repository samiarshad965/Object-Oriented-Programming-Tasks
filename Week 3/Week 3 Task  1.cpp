#include <iostream>
using namespace std;
class Product 
{
private:
    string name;
    double price;
    int quantity;

public:
    // Setter for name
    void setName(string n)
	 {
        if(n == "")
		{
            cout <<"Error: Name cannot be empty"<< endl;
        } 
		else
		{
            name = n;
        }
    }
    // Setter for Price
    void setPrice(double p) 
	{
        if(p <= 0)
		{
            cout << "Error: Price must be greater than 0" << endl;
        } 
		else
		{
            price = p;
        }
    }
    // Setter for Quantity
    void setQuantity(int q) 
	{
        if(q < 0)
		{
            cout << "Error: Quantity cannot be negative" << endl;
        } 
		else
		{
            quantity = q;
        }
    }

    // Getters
    string getName() 
	{
        return name;
    }

    double getPrice()
	 {
        return price;
    }

    int getQuantity() 
	{
        return quantity;
    }
};

int main() 
{
    Product p1;
    p1.setName("");      // error
    p1.setPrice(-50);    // error
    p1.setQuantity(-2);  // error

    p1.setName("Laptop");
    p1.setPrice(1200.50);
    p1.setQuantity(5);

    cout << "Product: " << p1.getName() << endl;
    cout << "Price: $" << p1.getPrice() << endl;
    cout << "Quantity: " << p1.getQuantity() << endl;
    return 0;
}
