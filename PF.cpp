#include <iostream>
#include <ctime>
#include <string>
using namespace std;

// Global constants and variables
const int cart_size = 10;
string cart[cart_size];
int cartPrices[cart_size];
int cartQuantities[cart_size]; 
int cartCount = 0;
int totalCustomers = 0; 
const int MAX_PURCHASE_HISTORY = 100; 
string purchaseHistory[MAX_PURCHASE_HISTORY]; 
int purchaseCount = 0; 





void addToCart(string item, int price) {
    if (cartCount < cart_size) {
        cart[cartCount] = item;
        cartPrices[cartCount] = price;
        cartCount++;
        cout << item << " added to cart with price: " << price << " Rs\n";
    } else {
        cout << "Cart is full!\n";
    }
}

void purchase() {
    if (cartCount == 0) {
        cout << "\n\n--------------------------------------\n\n\n";
        cout << "Your Cart is Empty, Please add Something\n";
        return; 
    }

    // USER DETAILS........
    string name, no, location;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your phone number: ";
    cin >> no;
    cout << "Enter your location: ";
    cin >> location;

    
    char proceed;
    cout << "\nDo you want to proceed with the purchase? (y/n): ";
    cin >> proceed;

    if (proceed == 'y' || proceed == 'Y') {
        int totalBill = 0; 
        cout << "\nProceeding with the Payment........................\n";
        cout << "\n\n---------------------------------------------\n\n\n";
        cout << "\t\t\tItems in Your Cart\t\t\t \n";

        for (int i = 0; i < cartCount; i++) {
            cout << i + 1 << ") " << cart[i] << " - " << cartPrices[i] << " Rs\n";
            totalBill += cartPrices[i]; 
        }

        static int receiptNo = 1;
        cout << "\n--------------------------------------------\n";
        cout << "\t\t\tReceipt No: " << receiptNo++ << "\n"; 
        cout << "Total Bill: " << totalBill << " Rs\n";
        cout << "Account Number For Payment: 0321-3858532\n";
        cout << "Location: " << location << "\n";
        cout << "Customer Name: " << name << "\n";
        cout << "Phone Number: " << no << "\n";

        // Get current time
        time_t now = time(0);
        char* dt = ctime(&now);
        cout << "Time of Purchase: " << dt;

        cout << "\t\tThanks For Purchasing from AL-Syed Cloth Shop!\t\t\t\n";
        cout << "\n\n--------------------------------------\n\n\n";

        
        if (purchaseCount < MAX_PURCHASE_HISTORY) {
            purchaseHistory[purchaseCount++] = "Receipt No: " + to_string(receiptNo - 1) + ", Total: " + to_string(totalBill) + " Rs, Name: " + name + ", Phone: " + no + ", Location: " + location + ", Time: " + string(dt);
        } else {
            cout << "Purchase history is full!\n";
        }

        cartCount = 0;

        // for again shopiing
        char continueShopping;
        cout << "\t\t\tDo you want to continue shopping? (y/n)\t\t\t: ";
        cin >> continueShopping;

        if (continueShopping == 'y' || continueShopping == 'Y') {
            return; // Continue shopping
        } else {
            exit(0); // Exit the program
        }
    } else {
        cout << "\t\t\tPurchase cancelled.\t\t\t\n";
    }
}

int viewCart() {
    if(cartCount == 0) {
        cout << "\t\t\tYour Cart Is Empty\t\t\t\n";
    } else {
        cout << "\n\n--------------------------------------\n\n\n";
        cout << "\t\tItems in your cart:\n\n";
        for (int i = 0; i < cartCount; i++) {
            cout << i + 1 << ") " << cart[i] << " - " << cartPrices[i] << " Rs\n";
        }
    }

    
    cout << "\n--------------------------------------------\n";
    cout << " 97) Purchase\n";
    cout << " 98) Go-Back\n";
    cout << " 99) Exit\n";
    cout << "Please select an option: ";

    
    int choice;
    cin >> choice;

    // Handle the user's choice
    if (choice == 97) {
        purchase(); 
    } else if (choice == 98) {
        return 1; 
    } else if (choice == 99) {
        exit(0); 
    } else {
        cout << "Invalid choice. Please try again.\n";
    }

    return 0; // Return to the previous menu
}







int ladiesZellburBoldColors(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n";        
        cout << "   1. Crimson Red with Gold Patterns\n";
        cout << "   2. Deep Purple with Black Floral Print\n";
        cout << "   3. Jet Black with Golden Threadwork\n";
        cout << "   4. Ruby Red with White Paisley Designs\n";
        cout << "   5. Royal Blue with Silver Embroidery\n\n";        


        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);         }
        if     (choose == 98){ return 1;        }
        if     (choose == 97){ purchase();      }
        else if(choose == 96){ viewCart();      }

        if (choose == 1) {
            addToCart("Crimson Red with Gold Patterns", 3499);
        } 
        else if (choose == 2) {
            addToCart("Royal Blue with Silver Embroidery", 3499);
        } 
        else if (choose == 3) {
            addToCart("Deep Purple with Black Floral Print", 3499);
        } 
        else if (choose == 4) {
            addToCart("Jet Black with Golden Threadwork", 3499);
        } 
        else if (choose == 5) {
            addToCart("Ruby Red with White Paisley Designs", 3499);
        } 
        else {
            cout << "Invalid choice! Please select a valid option.\n";
        }        
    }
}

int ladiesZellburCoolColors(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n";        
        cout << "Select a Cool Color:\n";
        cout << "   1. Sky Blue with White Floral Prints\n";
        cout << "   2. Teal with Aqua Geometric Patterns\n";
        cout << "   3. Turquoise with Silver Leaf Prints\n";
        cout << "   4. Navy Blue with Gray Stripes\n";
        cout << "   5. Periwinkle with Soft Lavender Designs\n\n";
    

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);         }
        if     (choose == 98){ return 1;        }
        if     (choose == 97){ purchase();      }
        else if(choose == 96){ viewCart();      }

        else if (choose == 1) {
            addToCart("Sky Blue with White Floral Prints", 1590);
        } 
        else if (choose == 2) {
            addToCart("Teal with Aqua Geometric Patterns", 1590);
        } 
        else if (choose == 3) {
            addToCart("Turquoise with Silver Leaf Prints", 1590);
        } 
        else if (choose == 4) {
            addToCart("Navy Blue with Gray Stripes", 1590);
        } 
        else if (choose == 5) {
            addToCart("Periwinkle with Soft Lavender Designs", 1590);
        } 
        else {
            cout << "Invalid choice! Please select a valid option.\n";
        }        
    }
}

int ladiesZellburPastelColors(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n";        
        cout << "Select a Pastel Color:\n";
        cout << "   1. Pastel Pink with White Lace Print\n";
        cout << "   2. Pastel Blue with Soft Floral Designs\n";
        cout << "   3. Pastel Green with Golden Vine Patterns\n";
        cout << "   4. Pastel Yellow with Delicate White Embroidery\n";
        cout << "   5. Lilac with Silver Paisley Print\n\n";

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);         }
        if     (choose == 98){ return 1;        }
        if     (choose == 97){ purchase();      }
        else if(choose == 96){ viewCart();      }

        else if (choose == 1) {
            addToCart("Pastel Pink with White Lace Print", 1590);
        } 
        else if (choose == 2) {
            addToCart("Pastel Blue with Soft Floral Designs", 1590);
        } 
        else if (choose == 3) {
            addToCart("Pastel Green with Golden Vine Patterns", 1590);
        } 
        else if (choose == 4) {
            addToCart("Pastel Yellow with Delicate White Embroidery", 1590);
        } 
        else if (choose == 5) {
            addToCart("Lilac with Silver Paisley Print", 1590);
        } 
        else {
            cout << "Invalid choice! Please select a valid option.\n";
        }        
    }
}

int ladiesZellburNeutralColors(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n";        
        cout << "Select a Neutral Color:\n";
        cout << "   1. Beige with Golden Threadwork\n";
        cout << "   2. Ivory with Brown Floral Designs\n";
        cout << "   3. Soft Gray with Black Leaf Prints\n";
        cout << "   4. Champagne with Pearl Beaded Embroidery\n";
        cout << "   5. Taupe with White Paisley Patterns\n\n";        

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;

    if     (choose == 99){ exit(0);         }
    if     (choose == 98){ return 1;        }
    if     (choose == 97){ purchase();      }
    else if(choose == 96){ viewCart();      }

    else if (choose == 1) {
        addToCart("Beige with Golden Threadwork", 1590);
    } 
    else if (choose == 2) {
        addToCart("Ivory with Brown Floral Designs", 1590);
    } 
    else if (choose == 3) {
        addToCart("Soft Gray with Black Leaf Prints", 1590);
    } 
    else if (choose == 4) {
        addToCart("Champagne with Pearl Beaded Embroidery", 1590);
    } 
    else if (choose == 5) {
        addToCart("Taupe with White Paisley Patterns", 1590);
    } 
    else {
        cout << "Invalid choice! Please select a valid option.\n";
    }    

    }
}

int ladiesZellburQualities(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Slect Which Type of Brand You Want\n";

        cout<<"1. Bold & Elegant Colors\n";
        cout<<"2. Cool Colors\n";
        cout<<"3. Pastel Colors\n";
        cout<<"4. Neutral Colors\n\n";
        // cout<<"5. \n";

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;

    if     (choose == 99){ exit(0);         }
    if     (choose == 98){ return 1;        }
    if     (choose == 97){ purchase();      }
    else if(choose == 96){ viewCart();      }

        else if (choose == 1){ ladiesZellburBoldColors();}
        else if (choose == 2){ ladiesZellburCoolColors();}
        else if (choose == 3){ ladiesZellburPastelColors();}
        else if (choose == 4){ ladiesZellburNeutralColors();}
        else {
            cout << "Invalid choice! Please select a valid option.\n";
        } 
    }
 
}



int ladiesSayaBoldColors(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n"; 
        cout << "Select a Bold & Elegant Color:\n";
        cout << "   1. Crimson Red with Gold Patterns\n";
        cout << "   2. Royal Blue with Silver Embroidery\n";
        cout << "   3. Deep Purple with Black Floral Print\n";
        cout << "   4. Jet Black with Golden Threadwork\n";
        cout << "   5. Ruby Red with White Paisley Designs\n\n";
        
        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;

    if     (choose == 99){ exit(0);         }
    if     (choose == 98){ return 1;        }
    if     (choose == 97){ purchase();      }
    else if(choose == 96){ viewCart();      }

    else if (choose == 1) {
        addToCart("Crimson Red with Gold Patterns", 3499);
    } 
    else if (choose == 2) {
        addToCart("Royal Blue with Silver Embroidery", 3499);
    } 
    else if (choose == 3) {
        addToCart("Deep Purple with Black Floral Print", 3499);
    } 
    else if (choose == 4) {
        addToCart("Jet Black with Golden Threadwork", 3499);
    } 
    else if (choose == 5) {
        addToCart("Ruby Red with White Paisley Designs", 3499);
    } 
    else {
        cout << "Invalid choice! Please select a valid option.\n";
    }    
    }
}

int ladiesSayaCoolColors(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n";        
        cout << "Select a Cool Color:\n";
        cout << "   1. Sky Blue with White Floral Prints\n";
        cout << "   2. Teal with Aqua Geometric Patterns\n";
        cout << "   3. Turquoise with Silver Leaf Prints\n";
        cout << "   4. Navy Blue with Gray Stripes\n";
        cout << "   5. Periwinkle with Soft Lavender Designs\n\n";

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);         }
        if     (choose == 98){ return 1;        }
        if     (choose == 97){ purchase();      }
        else if(choose == 96){ viewCart();      }

        else if (choose == 1) {
            addToCart("Sky Blue with White Floral Prints", 3499);
        } 
        else if (choose == 2) {
            addToCart("Teal with Aqua Geometric Patterns", 3499);
        } 
        else if (choose == 3) {
            addToCart("Turquoise with Silver Leaf Prints", 3499);
        } 
        else if (choose == 4) {
            addToCart("Navy Blue with Gray Stripes", 3499);
        } 
        else if (choose == 5) {
            addToCart("Periwinkle with Soft Lavender Designs", 3499);
        } 
        else {
            cout << "Invalid choice! Please select a valid option.\n";
        }        
    }
}

int ladiesSayaPastelColors(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n";        
        cout << "Select a Pastel Color:\n";
        cout << "   1. Pastel Pink with White Lace Print\n";
        cout << "   2. Pastel Blue with Soft Floral Designs\n";
        cout << "   3. Pastel Green with Golden Vine Patterns\n";
        cout << "   4. Pastel Yellow with Delicate White Embroidery\n";
        cout << "   5. Lilac with Silver Paisley Print\n\n";

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);         }
        if     (choose == 98){ return 1;        }
        if     (choose == 97){ purchase();      }
        else if(choose == 96){ viewCart();      }

        else if (choose == 1) {
            addToCart("Pastel Pink with White Lace Print", 3499);
        } 
        else if (choose == 2) {
            addToCart("Pastel Blue with Soft Floral Designs", 3499);
        } 
        else if (choose == 3) {
            addToCart("Pastel Green with Golden Vine Patterns", 3499);
        } 
        else if (choose == 4) {
            addToCart("Pastel Yellow with Delicate White Embroidery", 3499);
        } 
        else if (choose == 5) {
            addToCart("Lilac with Silver Paisley Print", 3499);
        } 
        else {
            cout << "Invalid choice! Please select a valid option.\n";
        }
    
    }
}

int ladiesSayaNeutralColors(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n";        
        cout << "Select a Neutral Color:\n";
        cout << "1. Beige with Golden Threadwork\n";
        cout << "2. Ivory with Brown Floral Designs\n";
        cout << "3. Soft Gray with Black Leaf Prints\n";
        cout << "4. Champagne with Pearl Beaded Embroidery\n";
        cout << "5. Taupe with White Paisley Patterns\n/n";

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);         }
        if     (choose == 98){ return 1;        }
        if     (choose == 97){ purchase();      }
        else if(choose == 96){ viewCart();      }

        else if (choose == 1) {
            addToCart("Beige with Golden Threadwork", 3499);
        } 
        else if (choose == 2) {
            addToCart("Ivory with Brown Floral Designs", 3499);
        } 
        else if (choose == 3) {
            addToCart("Soft Gray with Black Leaf Prints", 3499);
        } 
        else if (choose == 4) {
            addToCart("Champagne with Pearl Beaded Embroidery", 3499);
        } 
        else if (choose == 5) {
            addToCart("Taupe with White Paisley Patterns", 3499);
        } 
        else {
            cout << "Invalid choice! Please select a valid option.\n";
        }        
    }
}

int ladiesSayaQualities(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Slect Which Type of Brand You Want\n";

        cout<<"1. Bold & Elegant Colors\n";
        cout<<"2. Cool Colors\n";
        cout<<"3. Pastel Colors\n";
        cout<<"4. Neutral Colors\n\n";
        // cout<<"5. \n";

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;

    if     (choose == 99){ exit(0);         }
    if     (choose == 98){ return 1;        }
    if     (choose == 97){ purchase();      }
    else if(choose == 96){ viewCart();      }

    else if(choose ==  1){ ladiesSayaBoldColors();}
    else if(choose ==  2){ ladiesSayaCoolColors();}
    else if(choose ==  3){ ladiesSayaPastelColors();}
    else if(choose ==  4){ ladiesSayaNeutralColors();}
    
    }
}



int ladiesAlkaramBoldColors(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n";
        cout << "Select a Bold & Elegant color:\n";
        cout << "1. Deep Red with Gold Embroidery\n";
        cout << "2. Royal Blue with Silver Accents\n";
        cout << "3. Emerald Green with Black Detailing\n";
        cout << "4. Plum with Golden Floral Prints\n";
        cout << "5. Maroon with Beige Traditional Patterns\n";
        cout << "6. Dark Purple with Silver Embossed Work\n";
        cout << "7. Bottle Green with Bronze Print\n";
        cout << "8. Black with Red & Gold Embroidery\n";
        cout << "9. Ruby Pink with Gold Lace Work\n\n";
        


        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);         }
        if     (choose == 98){ return 1;        }
        if     (choose == 97){ purchase();      }
        else if(choose == 96){ viewCart();      }

        else if (choose == 1) {
            addToCart("Deep Red with Gold Embroidery", 4990);
        } 
        else if (choose == 2) {
            addToCart("Royal Blue with Silver Accents", 4990);
        } 
        else if (choose == 3) {
            addToCart("Emerald Green with Black Detailing", 4990);
        } 
        else if (choose == 4) {
            addToCart("Plum with Golden Floral Prints", 4990);
        } 
        else if (choose == 5) {
            addToCart("Maroon with Beige Traditional Patterns", 4990);
        } 
        else if (choose == 6) {
            addToCart("Dark Purple with Silver Embossed Work", 4990);
        } 
        else if (choose == 7) {
            addToCart("Bottle Green with Bronze Print", 4990);
        } 
        else if (choose == 8) {
            addToCart("Black with Red & Gold Embroidery", 4990);
        } 
        else if (choose == 9) {
            addToCart("Ruby Pink with Gold Lace Work", 4990);
        } 
        else {
            cout << "Invalid choice! Please select a valid option.\n";
        }
    
    }
}

int ladiesAlkaramCoolColors(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n";
        cout << "Select a cool color:\n";
        cout << "1. Teal with White Geometric Print\n";
        cout << "2. Sky Blue with Navy Floral\n";
        cout << "3. Lavender with Soft Pink Embroidery\n";
        cout << "4. Cool Grey with Ice Blue Detailing\n";
        cout << "5. Mint Green with White Lace Work\n";
        cout << "6. Aqua Blue with Coral Accents\n";
        cout << "7. Turquoise with Silver Embroidery\n";
        cout << "8. Pastel Blue with White Thread Work\n\n";

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);         }
        if     (choose == 98){ return 1;        }
        if     (choose == 97){ purchase();      }
        else if(choose == 96){ viewCart();      }

        else if (choose == 1) {
            addToCart("Teal with White Geometric Print", 4990);
        } 
        else if (choose == 2) {
            addToCart("Sky Blue with Navy Floral", 4990);
        } 
        else if (choose == 3) {
            addToCart("Lavender with Soft Pink Embroidery", 4990);
        } 
        else if (choose == 4) {
            addToCart("Cool Grey with Ice Blue Detailing", 4990);
        } 
        else if (choose == 5) {
            addToCart("Mint Green with White Lace Work", 4990);
        } 
        else if (choose == 6) {
            addToCart("Aqua Blue with Coral Accents", 4990);
        } 
        else if (choose == 7) {
            addToCart("Turquoise with Silver Embroidery", 4990);
        } 
        else if (choose == 8) {
            addToCart("Pastel Blue with White Thread Work", 4990);
        } 
        else {
            cout << "Invalid choice! Please select a valid option.\n";
        }
    
    }
}

int ladiesAlkaramPastelColors(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n";
        cout << "Select a pastel color:\n";
        cout << "1. Baby Pink with White Floral\n";
        cout << "2. Peach with Golden Print\n";
        cout << "3. Soft Lavender with Silver Motifs\n";
        cout << "4. Light Mint with Aqua Leaf Patterns\n";
        cout << "5. Powder Blue with Pearl White Embroidery\n";
        cout << "6. Blush Pink with Light Gold Detailing\n";
        cout << "7. Champagne with Soft Pink Prints\n";
        cout << "8. Frosty Lilac with Pearl White Work\n";
        cout << "9. Dusty Mauve with Silver Beads\n\n";

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);         }
        if     (choose == 98){ return 1;        }
        if     (choose == 97){ purchase();      }
        else if(choose == 96){ viewCart();      }
        else if (choose == 1) {
            addToCart("Baby Pink with White Floral", 4990);
        } 
        else if (choose == 2) {
            addToCart("Peach with Golden Print", 4990);
        } 
        else if (choose == 3) {
            addToCart("Soft Lavender with Silver Motifs", 4990);
        } 
        else if (choose == 4) {
            addToCart("Light Mint with Aqua Leaf Patterns", 4990);
        } 
        else if (choose == 5) {
            addToCart("Powder Blue with Pearl White Embroidery", 4990);
        } 
        else if (choose == 6) {
            addToCart("Blush Pink with Light Gold Detailing", 4990);
        } 
        else if (choose == 7) {
            addToCart("Champagne with Soft Pink Prints", 4990);
        } 
        else if (choose == 8) {
            addToCart("Frosty Lilac with Pearl White Work", 4990);
        } 
        else if (choose == 9) {
            addToCart("Dusty Mauve with Silver Beads", 4990);
        } 
        else {
            cout << "Invalid choice! Please select a valid option.\n";
        }        
    }
}

int ladiesAlkaramNeutralColors(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n";
        cout << "1. Neutral Colors: \n";
        cout << "2. Ivory with Black Embroidered Borders \n";
        cout << "3. Beige with Rust Ethnic Prints \n";
        cout << "4. Taupe with White and Gold Block Print \n";
        cout << "5. Warm Gray with Multicolor Floral Work \n";
        cout << "6. Off-White with Copper Accents \n";
        cout << "7. Ash Gray with Maroon Floral Print \n";
        cout << "8. Sand Brown with Black Tribal Designs \n";
        cout << "9. Pearl White with Silver Thread Work \n\n";

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);         }
        if     (choose == 98){ return 1;        }
        if     (choose == 97){ purchase();      }
        else if(choose == 96){ viewCart();      }

        if (choose == 1) {
            addToCart("Ivory with Black Embroidered Borders", 4990);
        } 
        else if (choose == 2) {
            addToCart("Beige with Rust Ethnic Prints", 4990);
        } 
        else if (choose == 3) {
            addToCart("Taupe with White and Gold Block Print", 4990);
        } 
        else if (choose == 4) {
            addToCart("Warm Gray with Multicolor Floral Work", 4990);
        } 
        else if (choose == 5) {
            addToCart("Off-White with Copper Accents", 4990);
        } 
        else if (choose == 6) {
            addToCart("Ash Gray with Maroon Floral Print", 4990);
        } 
        else if (choose == 7) {
            addToCart("Sand Brown with Black Tribal Designs", 4990);
        } 
        else if (choose == 8) {
            addToCart("Pearl White with Silver Thread Work", 4990);
        } 
        else {
            cout << "Invalid choice! Please select a valid option.\n";
        }      
    }
}

int ladiesAlkaramQualities(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Slect Which Type of Brand You Want\n";

        cout<<"1. Bold & Elegant Colors\n";
        cout<<"2. Cool Colors\n";
        cout<<"3. Pastel Colors\n";
        cout<<"4. Neutral Colors\n\n";
        // cout<<"5. \n";  

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;

    if     (choose == 99){ exit(0);         }
    if     (choose == 98){ return 1;        }
    if     (choose == 97){ purchase();      }
    else if(choose == 96){ viewCart();      }

        else if(choose == 1){ ladiesAlkaramBoldColors();   }
        else if(choose == 2){ ladiesAlkaramCoolColors();   }
        else if(choose == 3){ ladiesAlkaramPastelColors(); }
        else if(choose == 4){ ladiesAlkaramNeutralColors();}
        else if(choose == 5){ }
    }
}



int ladiesLimelightBoldColors(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n";        
        cout << "1. Crimson Red\n";
        cout << "2. Royal Blue\n";
        cout << "3. Emerald Green\n";
        cout << "4. Deep Purple\n";
        cout << "5. Jet Black\n";
        cout << "6. Fiery Orange\n";
        cout << "7. Sunshine Yellow\n";
        cout << "8. Magenta\n";
        cout << "9. Electric Blue\n";
        cout << "10. Ruby Red\n\n";

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);         }
        if     (choose == 98){ return 1;        }
        if     (choose == 97){ purchase();      }
        else if(choose == 96){ viewCart();      }

        else if (choose == 1) {
            addToCart("Crimson Red", 2299);
        } 
        else if (choose == 2) {
            addToCart("Royal Blue", 2299);
        } 
        else if (choose == 3) {
            addToCart("Emerald Green", 2299);
        } 
        else if (choose == 4) {
            addToCart("Deep Purple", 2299);
        } 
        else if (choose == 5) {
            addToCart("Jet Black", 2299);
        } 
        else if (choose == 6) {
            addToCart("Fiery Orange", 2299);
        } 
        else if (choose == 7) {
            addToCart("Sunshine Yellow", 2299);
        } 
        else if (choose == 8) {
            addToCart("Magenta", 2299);
        } 
        else if (choose == 9) {
            addToCart("Electric Blue", 2299);
        } 
        else if (choose == 10) {
            addToCart("Ruby Red", 2299);
        } 
        else {
            cout << "Invalid choice! Please select a valid option.\n";
        }
    }
}

int ladiesLimelightCoolColors(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n";        
        cout << "1. Sky Blue\n";
        cout << "2. Teal\n";
        cout << "3. Turquoise\n";
        cout << "4. Aqua\n";
        cout << "5. Mint Green\n";
        cout << "6. Emerald Green\n";
        cout << "7. Navy Blue\n";
        cout << "8. Cyan\n";
        cout << "9. Lavender\n";
        cout << "10. Periwinkle\n\n";  

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);         }
        if     (choose == 98){ return 1;        }
        if     (choose == 97){ purchase();      }
        else if(choose == 96){ viewCart();      }

        if (choose == 1) {
            addToCart("Sky Blue", 2299);
        } 
        else if (choose == 2) {
            addToCart("Teal", 2299);
        } 
        else if (choose == 3) {
            addToCart("Turquoise", 2299);
        } 
        else if (choose == 4) {
            addToCart("Aqua", 2299);
        } 
        else if (choose == 5) {
            addToCart("Mint Green", 2299);
        } 
        else if (choose == 6) {
            addToCart("Emerald Green", 2299);
        } 
        else if (choose == 7) {
            addToCart("Navy Blue", 2299);
        } 
        else if (choose == 8) {
            addToCart("Cyan", 2299);
        } 
        else if (choose == 9) {
            addToCart("Lavender", 2299);
        } 
        else if (choose == 10) {
            addToCart("Periwinkle", 2299);
        } 
        else {
            cout << "Invalid choice! Please select a valid option.\n";
        }
    
    }
}

int ladiesLimelightPastelColors(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n";        
        cout << "1. Pastel Pink\n";
        cout << "2. Pastel Blue\n";
        cout << "3. Pastel Green\n";
        cout << "4. Pastel Yellow\n";
        cout << "5. Pastel Purple\n";
        cout << "6. Pastel Orange\n";
        cout << "7. Pastel Peach\n";
        cout << "8. Pastel Mint\n";
        cout << "9. Pastel Lilac\n";
        cout << "10. Pastel Cyan\n\n";   

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);         }
        if     (choose == 98){ return 1;        }
        if     (choose == 97){ purchase();      }
        else if(choose == 96){ viewCart();      }

        else if (choose == 1) {
            addToCart("Pastel Pink", 2299);
        } 
        else if (choose == 2) {
            addToCart("Pastel Blue", 2299);
        } 
        else if (choose == 3) {
            addToCart("Pastel Green", 2299);
        } 
        else if (choose == 4) {
            addToCart("Pastel Yellow", 2299);
        } 
        else if (choose == 5) {
            addToCart("Pastel Purple", 2299);
        } 
        else if (choose == 6) {
            addToCart("Pastel Orange", 2299);
        } 
        else if (choose == 7) {
            addToCart("Pastel Peach", 2299);
        } 
        else if (choose == 8) {
            addToCart("Pastel Mint", 2299);
        } 
        else if (choose == 9) {
            addToCart("Pastel Lilac", 2299);
        } 
        else if (choose == 10) {
            addToCart("Pastel Cyan", 2299);
        } 
        else {
            cout << "Invalid choice! Please select a valid option.\n";
        }
    
    }
}

int ladiesLimelightNeutralColors(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n";        
        cout << "1. Ivory\n";
        cout << "2. Beige\n";
        cout << "3. Champagne\n";
        cout << "4. Pale Pink (Blush)\n";
        cout << "5. Soft Gray\n";
        cout << "6. Pastel Blue\n";
        cout << "7. Mint Green\n";
        cout << "8. Lavender\n\n";
       
        
        
        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);         }
        if     (choose == 98){ return 1;        }
        if     (choose == 97){ purchase();      }
        else if(choose == 96){ viewCart();      }

        else if (choose == 1) {
            addToCart("Ivory", 2299);
        } 
        else if (choose == 2) {
            addToCart("Beige", 2299);
        } 
        else if (choose == 3) {
            addToCart("Champagne", 2299);
        } 
        else if (choose == 4) {
            addToCart("Pale Pink (Blush)", 2299);
        } 
        else if (choose == 5) {
            addToCart("Soft Gray", 2299);
        } 
        else if (choose == 6) {
            addToCart("Pastel Blue", 2299);
        } 
        else if (choose == 7) {
            addToCart("Mint Green", 2299);
        } 
        else if (choose == 8) {
            addToCart("Lavender", 2299);
        } 
        else {
            cout << "Invalid choice! Please select a valid option.\n";
        }
    }
}

int ladiesLimelightQualities(){
    int choose;
    while(true){
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Slect Which Type of Color You Want\n";
        
        cout<<"1. Bold & Elegant Colors\n";
        cout<<"2. Cool Colors\n";
        cout<<"3. Pastel Colors\n";
        cout<<"4. Neutral Colors\n\n";
      


        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;

    if     (choose == 99){ exit(0);         }
    if     (choose == 98){ return 1;        }
    if     (choose == 97){ purchase();      }
    else if(choose == 96){ viewCart();      }

    else if(choose == 1){ ladiesLimelightBoldColors();   }
    else if(choose == 2){ ladiesLimelightCoolColors();   }
    else if(choose == 3){ ladiesLimelightPastelColors(); }
    else if(choose == 4){ ladiesLimelightNeutralColors();}
    else cout<<" Please choose option between 1 to 4 \n";

    }
}



int gentsWashingWearTrendy(){
    int choose;
    while (true)
    {
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Choose Color You Want\n";
        cout<<" Trendy & Designer Colors\n";
	        cout<<" 1) Mustard Yellow\n";
	        cout<<" 2) Ferozii Blue\n";
            cout<<" 3) Dark Purple\n\n";


        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;

    if     (choose == 99){ exit(0);}
    if     (choose == 98){ return 1;}
    if     (choose == 97){ purchase();}
    else if(choose == 96){ viewCart();}

    else if(choose ==  1){  addToCart("Washing Wear, Mustard Yellow"    , 2500);}
    else if(choose ==  2){  addToCart("Washing Wear, Ferozii Blue"      , 2500);}
    else if(choose ==  3){  addToCart("Washing Wear, Dark Purple"       , 2500);}
    else cout<<"  Enter Number Between 1 to 3 for Shoping  \n";


    }
 
}

int gentsWashingWearWinter(){
    int choose;
    while (true)
    {
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Choose Color You Want\n";
        cout<<" Dark & Bold Colors (Winter & Festive Wear)\n";
	        cout<<" 1) Black\n";
    	    cout<<" 2) Navy Blue\n";
            cout<<" 3) Dark Brown\n";
            cout<<" 4) Charcoal\n";
            cout<<" 5) Maroon\n";
	        cout<<" 6) Dark Green\n";
            cout<<" 7) Coffee Brown\n\n";



        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;

    if     (choose == 99){ exit(0);}
    if     (choose == 98){ return 1;}
    if     (choose == 97){ purchase();}
    else if(choose == 96){ viewCart();}

    else if(choose ==  1){  addToCart("Washing Wear, Black"         , 2500);}
    else if(choose ==  2){  addToCart("Washing Wear, Navy Blue"     , 2500);}
    else if(choose ==  3){  addToCart("Washing Wear, Dark Brown"    , 2500);}
    else if(choose ==  4){  addToCart("Washing Wear, Charcoal"      , 2500);}
    else if(choose ==  5){  addToCart("Washing Wear, Maroon"        , 2500);}
    else if(choose ==  6){  addToCart("Washing Wear, Dark Green"    , 2500);}
    else if(choose ==  7){  addToCart("Washing Wear, Coffee Brown"  , 2500);}
    else cout<<"  Enter Number Between 1 to  for Shoping  \n";


    }
 
}

int gentsWashingWearFormal(){
    int choose;
    while (true)
    {
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Choose Color You Want\n";
        cout<<"  Medium & Standard Colors (Formal & Office Wear)\n";
            cout<<" 1) Skin\n";
    	    cout<<" 2) Steel Grey\n";
    	    cout<<" 3) Olive Green\n";
    	    cout<<" 4) Light Purple\n\n";



        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;

    if     (choose == 99){ exit(0);}
    if     (choose == 98){ return 1;}
    if     (choose == 97){ purchase();}
    else if(choose == 96){ viewCart();}

    else if(choose ==  1){  addToCart("Washing Wear, Skin"          , 2500);}
    else if(choose ==  2){  addToCart("Washing Wear, Steel Grey"    , 2500);}
    else if(choose ==  3){  addToCart("Washing Wear, Olive Green"   , 2500);}
    else if(choose ==  4){  addToCart("Washing Wear, Light Purple"  , 2500);}

    else cout<<"  Enter Number Between 1 to 4 for Shoping  \n";


    }
 
}

int gentsWashingWearSummar(){
    int choose;
    while (true)
    {
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Choose Color You Want\n";
        cout<<" Light & Soft Colors (Summer & Casual Wear)\n";
           cout<<" 1) White\n";
           cout<<" 2) Half-White\n";
           cout<<" 3) Sky Blue\n";
           cout<<" 4) Mint Green\n";
           cout<<" 5) Baby Pink\n";
	       cout<<" 6) Lemon Yellow \n\n";




        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;

    if     (choose == 99){ exit(0);}
    if     (choose == 98){ return 1;}
    if     (choose == 97){ purchase();}
    else if(choose == 96){ viewCart();}

    else if(choose ==  1){  addToCart("Washing Wear, White"         , 2500);}
    else if(choose ==  2){  addToCart("Washing Wear, Half-White"    , 2500);}
    else if(choose ==  3){  addToCart("Washing Wear, Sky Blue"      , 2500);}
    else if(choose ==  4){  addToCart("Washing Wear, Mint Green"    , 2500);}
    else if(choose ==  5){  addToCart("Washing Wear, Baby Pink"     , 2500);}
    else if(choose ==  6){  addToCart("Washing Wear, Lemon Yellow"  , 2500);}
    else cout<<"  Enter Number Between 1 to 6 for Shoping  \n";

    }
    
}


int gentsKtCottonTrendy(){
    int choose;
    while (true)
    {
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Choose Color You Want\n";
        cout<<"  Trendy-Unique-Color\n";
    	cout<<" 1) Mustard\n";
        cout<<" 2) Teal-Blue\n";
        cout<<" 3) Coffee-Brown\n";
        cout<<" 4) Mehndii-Green\n\n";

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;

    if     (choose == 99){ exit(0);}
    if     (choose == 98){ return 1;}
    if     (choose == 97){ purchase();}
    else if(choose == 96){ viewCart();}

    else if(choose == 1 ){ addToCart("KT-Cotton, Mustard           ", 1500);}
    else if(choose == 2 ){ addToCart("KT-Cotton, Teal-Blue         ", 1500);}
    else if(choose == 3 ){ addToCart("KT-Cotton, Coffee-Brown      ", 1500);}  
    else if(choose == 4 ){ addToCart("KT-Cotton, Mehndii-Green     ", 1500);}

    
   
    else cout<<" Enter Number Between 1 to 4 for Shoping  \n";
    }
    
}

int gentsKtCottonDark(){
    int choose;
    while (true)
    {
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Choose Color You Want\n";
        cout<<" Dark & Bold-Colors\n";        
        cout<<" 1) Black\n";
    	cout<<" 2) Charcoal-Grey\n";
    	cout<<" 3) Maroon\n";
    	cout<<" 4) Olive-Green\n";
    	cout<<" 5) Chocolate-brown\n\n";

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;

    if     (choose == 99){ exit(0);}
    if     (choose == 98){ return 1;}
    if     (choose == 97){ purchase();}
    else if(choose == 96){ viewCart();}

    else if(choose == 1 ){ addToCart("KT-Cotton, Black          ", 1500);}
    else if(choose == 2 ){ addToCart("KT-Cotton, Charcoal-Grey  ", 1500);}
    else if(choose == 3 ){ addToCart("KT-Cotton, Maroon         ", 1500);}  
    else if(choose == 4 ){ addToCart("KT-Cotton, Olive-Green    ", 1500);}
    else if(choose == 5 ){ addToCart("KT-Cotton, Chocolate-brown", 1500);}
   
    
   
    else cout<<" Enter Number Between 1 to 5 for Shoping  \n";

    }
    

}

int gentsKtCottonLight(){
    int choose;
    while (true)
    {
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Choose Color You Want\n";
        cout<<" Light & Soft-Colors\n";
        cout<<" 1) White\n";
        cout<<" 2) Half-White\n";
        cout<<" 3) Light-Grey\n";
        cout<<" 4) Sky-blue\n";
        cout<<" 5) Cream\n";
	    cout<<" 6) Light-Pink\n\n";

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;

    if     (choose == 99){ exit(0);}
    if     (choose == 98){ return 1;}
    if     (choose == 97){ purchase();}
    else if(choose == 96){ viewCart();}

    else if(choose == 1 ){ addToCart("KT-Cotton, White          ", 1500);}
    else if(choose == 2 ){ addToCart("KT-Cotton, Half-White     ", 1500);}
    else if(choose == 3 ){ addToCart("KT-Cotton, Light-Grey     ", 1500);}  
    else if(choose == 4 ){ addToCart("KT-Cotton, Sky-blue       ", 1500);}
    else if(choose == 5 ){ addToCart("KT-Cotton, Cream          ", 1500);}
    else if(choose == 6 ){ addToCart("KT-Cotton, Light-Pink     ", 1500);}
    
   
    else cout<<" Enter Number Between 1 to 6 for Shoping  \n";

    }
    

}


int gentsLathaTrendy(){
    int choose;
    while (true)
    {
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Choose Color You Want\n";

        cout<<"  Trendy-Unique-Color\n";
	    cout<<" 1) Mustard\n";
        cout<<" 2) Teal-Blue\n";
        cout<<" 3) Coffee-Brown\n";
        cout<<" 4) Mehndii-Green\n\n";

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;

    if     (choose == 99){ exit(0);}
    if     (choose == 98){ return 1;}
    if     (choose == 97){ purchase();}
    else if(choose == 96){ viewCart();}

    else if(choose == 1 ){ addToCart("Latha, Mustard"          , 2500);}
    else if(choose == 2 ){ addToCart("Latha, Teal-Blue"        , 2500);}
    else if(choose == 3 ){ addToCart("Latha, Coffee-Brown"     , 2500);}
    else if(choose == 4 ){ addToCart("Latha, Mehndii-Green"    , 2500);}

    }
}

int gentsLathaDark(){
    int choose;
    while (true)
    {
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Choose Color You Want\n";

        cout<<" Dark & Elegant-Colors\n";
        cout<<" 1) Black\n";
	    cout<<" 2) Navy-Blue\n";
    	cout<<" 3) Charcoal\n";
    	cout<<" 4) Maroon\n";
	    cout<<" 5) Chocolate-brown\n\n";


        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;

    if     (choose == 99){ exit(0);}
    if     (choose == 98){ return 1;}
    if     (choose == 97){ purchase();}
    else if(choose == 96){ viewCart();}

    else if(choose == 1 ){ addToCart("Latha, Black"              , 2500);}
    else if(choose == 2 ){ addToCart("Latha, Navy-Blue"          , 2500);}
    else if(choose == 3 ){ addToCart("Latha, Charcoal"           , 2500);}
    else if(choose == 4 ){ addToCart("Latha, Maroon"             , 2500);}
    else if(choose == 4 ){ addToCart("Latha, Chocolate-brown"    , 2500);}



    }
    

}

int gentsLathaLight(){
    int choose;
    while (true)
    {
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Choose Color You Want\n";

        cout<<" Choose Color You Want\n";
        cout<<" Light & Soft-Colors\n";
        cout<<" 1) White\n";
        cout<<" 2) Half-White\n";
        cout<<" 3) Light-Grey\n";
        cout<<" 4) Sky-blue\n";
        cout<<" 5) Cream\n";
    	cout<<" 6) Light-Pink\n\n";

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);}
        if     (choose == 98){ return 1;}
        if     (choose == 97){ purchase();}
        else if(choose == 96){ viewCart();}

        else if(choose == 1 ){ addToCart("Latha, White"          , 2500);}
        else if(choose == 2 ){ addToCart("Latha, Half-White"     , 2500);}
        else if(choose == 3 ){ addToCart("Latha, Light-Grey"     , 2500);}
        else if(choose == 4 ){ addToCart("Latha, Sky-blue"       , 2500);}
        else if(choose == 5 ){ addToCart("Latha, Cream"          , 2500);}
        else if(choose == 6 ){ addToCart("Latha, Light-Pink"     , 2500);}
        
        
        else cout<<" Enter Number Between 1 to 6: ";
    }

}


int gentsCottonTrendy(){
    int choose;
    while (true)
    {
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Choose Color You Want\n";
        cout<<" 1) Mustard Yellow\n";
        cout<<" 2) Ferozii Blue\n";
        cout<<" 3) Dark Purple\n\n";

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);}
        if     (choose == 98){ return 1;}
        if     (choose == 97){ purchase();}
        else if(choose == 96){ viewCart();}

        else if (choose == 1){  addToCart("Cotton, Mustard Yellow", 3500);}
        else if (choose == 2){  addToCart("Cotton, Ferozii Blue  ", 3500);}
        else if (choose == 3){  addToCart("Cotton, Dark Purple   ", 3500);}
        else cout<<" Enter Number Between 1 to 3: ";
    }

 }

 int gentsCottonWinter(){
    int choose;
    while (true)
    {
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Choose Color You Want\n";
        
        cout<<" 1) Black\n";
        cout<<" 2) Navy Blue\n";
        cout<<" 3) Dark Brown\n";
        cout<<" 4) Charcoal\n";
        cout<<" 5) Maroon\n";
        cout<<" 6) Dark Green\n";
        cout<<" 7) Coffee Brown\n\n";

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);}
        if     (choose == 98){ return 1;}
        if     (choose == 97){ purchase();}
        else if(choose == 96){ viewCart();}

        else if (choose == 1){  addToCart("Cotton, Black", 3500);       }
        else if (choose == 2){  addToCart("Cotton, Navy Blue", 3500);   }
        else if (choose == 3){  addToCart("Cotton, Dark Brown", 3500);  }
        else if (choose == 4){  addToCart("Cotton, Charcoal", 3500);    }
        else if (choose == 5){  addToCart("Cotton, Maroon", 3500);      }
        else if (choose == 6){  addToCart("Cotton, Dark Green", 3500);  }
        else if (choose == 7){  addToCart("Cotton, Coffee Brown", 3500);}
    }

 }
 
 int gentsCottonFormal(){
    int choose;
    while (true)
    {
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Choose Color You Want\n";
                cout<<" 1) Skin\n";
                cout<<" 2) Steel Grey\n";
                cout<<" 3) Olive Green\n";
                cout<<" 4) Light Purple\n\n";




        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);}
        if     (choose == 98){ return 1;}
        if     (choose == 97){ purchase();}
        else if(choose == 96){ viewCart();}

        else if (choose == 1){ addToCart("Cotton, Skin" , 3500);        }
        else if (choose == 2){ addToCart("Cotton, Steel Grey", 3500);   }
        else if (choose == 3){ addToCart("Cotton, Olive Green", 3500);  }
        else if (choose == 4){ addToCart("Cotton, Light Purple", 3500); }
        
    }
    

 }

int gentsCottonSummar(){
    int choose;
    while (true)
    {
                
              cout << "\n\n--------------------------------------\n\n\n";
              cout<<" Nw Choose Color \n";
                cout<<" 1) White\n";
                cout<<" 2) Half-White\n";
                cout<<" 3) Sky Blue\n";
                cout<<" 4) Mint Green\n";
                cout<<" 5) Baby Pink\n";
                cout<<" 6) Lemon Yellow \n\n";

        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);}
        if     (choose == 98){ return 1;}
        if     (choose == 97){ purchase();}
        else if(choose == 96){ viewCart();}

        else if (choose == 1){  addToCart("Cotton, White", 3500);       }
        else if (choose == 2){  addToCart("Cotton, Half-White", 3500);  }
        else if (choose == 3){  addToCart("Cotton, Sky-Blue", 3500);    }
        else if (choose == 4){  addToCart("Cotton, Mint Green", 3500);  }
        else if (choose == 5){  addToCart("Cotton, Baby Pink", 3500);   }
        else if (choose == 6){  addToCart("Cotton, Lemon Yellow", 3500);}

    }
    
}


 int gents_WashingWear_Qualities(){
     int choose;
     while (true)
     {
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" 1. Light & Soft Colors (Summer & Casual Wear)\n";
        cout<<" 2. Medium & Standard Colors (Formal & Office Wear)\n";
        cout<<" 3. Dark & Bold Colors (Winter & Festive Wear)\n";
        cout<<" 4. Trendy & Designer Colors\n\n";

        
        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);}
        if     (choose == 98){ return 1;}
        if     (choose == 97){ purchase();}
        else if(choose == 96){ viewCart();}

        else if (choose == 1){  gentsWashingWearSummar();}
        else if (choose == 2){  gentsWashingWearFormal();}
        else if (choose == 3){  gentsWashingWearTrendy();}
        else if (choose == 4){  gentsWashingWearTrendy();}

     }
     
 }

 int gents_KT_Cotton_Qualities(){
    int choose;
    while (true)
    {
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Choose What type of clothes you want in cotton \n";
        cout<<"1. Light & Soft-Colors\n";
        cout<<"2. Dark & Bold-Colors\n";  
        cout<<"3. Trendy-Unique-Color\n\n";

        
        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);}
        if     (choose == 98){ return 1;}
        if     (choose == 97){ purchase();}
        else if(choose == 96){ viewCart();}

        else if (choose == 1){  gentsKtCottonLight();}
        else if (choose == 2){  gentsKtCottonDark();}
        else if (choose == 3){  gentsKtCottonTrendy();}

    }
 }

 int gents_Latha_Qualities(){
    int choose;
    while (true)
    {
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Choose Color Type You Want\n";
        cout<<"1. Light & Soft-Colors\n";
        cout<<"2. Dark & Elegant-Colors\n";
        cout<<"3. Trendy-Unique-Color\n\n";


        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);}
        if     (choose == 98){ return 1;}
        if     (choose == 97){ purchase();}
        else if(choose == 96){ viewCart();}

        else if (choose == 1){  gentsLathaLight();}
        else if (choose == 2){  gentsLathaDark();}
        else if (choose == 3){  gentsLathaTrendy();}
        else cout<<" Invalid Number ";
        

    }
    
  
 }

int gents_Cotton_Qualities(){
    int choose;
    while (true)
    {
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Choose What type of clothes you want in cotton \n";

        cout<<"1. Light & Soft Colors (Summer & Casual Wear)\n";
        cout<<"2. Medium & Standard Colors (Formal & Office Wear)\n";
        cout<<"3. Dark & Bold Colors (Winter & Festive Wear)\n";
        cout<<"4. Trendy & Designer Colors\n\n";


        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);}
        if     (choose == 98){ return 1;}
        if     (choose == 97){ purchase();}
        else if(choose == 96){ viewCart();}

        else if (choose == 1){  gentsCottonSummar();}
        else if (choose == 2){  gentsCottonFormal();}
        else if (choose == 3){  gentsCottonWinter();}
        else if (choose == 4){  gentsCottonTrendy();}
        
        
        
    }
    
}


int gentsClothes(){
    int choose;
    while (true)
    {
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Choose The Quality Of Clothes You Want \n";
        cout<<" 1. Cotton,         Price = 3500\n";
        cout<<" 2. Latha,          Price = 2500\n";
        cout<<" 3. Kt-Cotton,      Price = 1500\n";
        cout<<" 4. Washing Wear,   Price = 2500\n\n";
    
        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);}
        if     (choose == 98){ return 1;}
        if     (choose == 97){ purchase();}
        else if(choose == 96){ viewCart();}
    
    
        else if(choose == 4){ gents_WashingWear_Qualities();}
        else if(choose == 3){ gents_KT_Cotton_Qualities();  }
        else if(choose == 2){ gents_Latha_Qualities();      }
        else if(choose == 1){ gents_Cotton_Qualities();     }
        else cout<<"  Enter Number Between 1 to 4 for Gents Shoping  \n";
        }
    }
    
int ladiesClothes(){
        int choose;
        while (true)
        {
        cout << "\n\n--------------------------------------\n\n\n";
        cout<<" Slect Which Type of Brand You Want\n";
        cout<<"1. Limelight Lawn, 2299\n";
        cout<<"2. Al karam,  4499\n";
        cout<<"3. Saya, 3499\n";
        cout<<"4. Zellbury, Winter Collection, 1590 \n\n";
//        cout<<"5 Khaddar , 1790";
    
    
        cout<<" 96) View Cart\n";
        cout<<" 97) Purchase\n";
        cout<<" 98) Go-Back\n";
        cout<<" 99) Exit\n";
        cin>>choose;
    
        if     (choose == 99){ exit(0);         }
        if     (choose == 98){ return 1;        }
        if     (choose == 97){ purchase();      }
        else if(choose == 96){ viewCart();      }
    
        else if(choose == 1){ ladiesLimelightQualities();   }
        else if(choose == 2){ ladiesAlkaramQualities();     }
        else if(choose == 3){ ladiesSayaQualities();        }
        else if(choose == 4){ ladiesZellburQualities();     }
 //       else if(choose == 5){    }
    
        }
        
    
     }

int others(){
    int choose;
    while (true)
    {

        cout << "\n\n--------------------------------------\n\n\n";
    cout<<" Slect Your Type of Clothes You Want\n";
    cout<<" 1) Ajrak,   Price = 1000\n";
    cout<<" 2) Hijab,   Price = 550\n";
    cout<<" 3) Romal,   Price = 550\n";
    cout<<" 4) Shal,    Price = 2000\n\n";

    cout<<" 96) View Cart\n";
    cout<<" 97) Purchase\n";
    cout<<" 98) Go-Back\n";
    cout<<" 99) Exit\n";
    cin>>choose;

    if     (choose == 99){ exit(0);}
    if     (choose == 98){ return 1;}
    if     (choose == 97){ purchase();}
    else if(choose == 96){ viewCart();}


    else if(choose == 4){ addToCart("Shal", 2000);}
    else if(choose == 3){ addToCart("Romal", 550);}
    else if(choose == 2){ addToCart("Hijab", 550);}
    else if(choose == 1){ addToCart("Ajrak",1000);}
    else cout<<"    \n";
    }
}

int shoping(){
    int choose;
    while (true)
    {
    cout << "\n\n--------------------------------------\n\n\n";
    cout<<" Slect Your Type of Clothes You Want\n";
    cout<<" 1) Gents Clothes\n";
    cout<<" 2) Ladies Clothes\n";
    cout<<" 3) Others\n";


    cout<<" 96) View Cart\n";
    cout<<" 97) Purchase\n";
    cout<<" 98) Go-Back\n";
    cout<<" 99) Exit\n";
    cin>>choose;

    if     (choose == 99){ exit(0);         }
    if     (choose == 98){ return 1;        }
    if     (choose == 97){ purchase();      }
    else if(choose == 96){ viewCart();      }
    else if(choose == 3){ others();         }
    else if(choose == 2){ ladiesClothes();  }
    else if(choose == 1){ gentsClothes();   }
    else cout<<"    \n";
    }
    
}

int main() {
    int choose;
    while (true) {
        cout << "\n";
        cout<<"\n\n\t\t\t Welcome To AL-Syed Cloth Shop \t\t\t\n\n";
        cout << " Select\n";
        cout << " 1) Shopping\n";
        cout << " 2) View Cart\n";
        cout << " 3) Purchase\n";
        cout << " 4) Exit\n";
        cin >> choose;
        if(choose == 4){ return 0;   }
        if(choose == 3){ purchase(); }
        if(choose == 2){ viewCart(); }
        if(choose == 1){ shoping();  }
         else {
            cout << " Enter 1 For Shoping\n";
        }
    }
    return 0;
}

