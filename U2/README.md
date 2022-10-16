 <div align= center>

 # Unit 2 "Control structures and cycles"

<div align= justify>

 # Exercise 1: Annual tax
 ### Problem: Write a program that asks the user for their annual income and shows the corresponding tax on the screen

<div>

<div align= justify>

> ## INPUT

```c++ 
    // Request rent to the user
    cout << "Enter your annual income:" << endl;
    cin >> rent;
 ```
<div align= justify>

> ## PROCCESS

```c++ 
    // Assign with "if" the percentage of tax depending on the annual income
   if (rent >= 0 && rent < 10000)
    {
        tax = .05;
    }
    else if (rent >= 10000 && rent < 20000)
    {
        tax = .15;
    }
    else if (rent >= 20000 && rent < 35000)
    {
        tax = .20;
    }
    else if (rent >= 35000 && rent < 60000)
    {
        tax = .30;
    }
    else if (rent >= 60000)
    {
        tax = .45;
    }
    else
    {
        cout << "Invalid rent" << endl;
    }

 ```
<div align= justify>

> ## OUTPUT

```c++ 
    // "If" to determine when to display the results
    if (rent >= 0)
    {
        // Print the results
        cout << "Your tax will be a percentage of " << (tax * 100) << "%" << endl;
        cout << "Your tax will be $" << rent * tax << endl;
    }
```  

<div>

<div align= justify>

> ## Explanation 

1.	Input

    1.1. The program will ask the user how much for rent annually.

    1.2. The user will enter how much he pays rent annually.
2.	Process 

    2.1. With a series of "if's" the program will determine the percentage of rent that the user must pay if the amount of rent payment is $ 0 or more.
    
    2.3. If the amount of rent that the user enters does not enter the rengo of $ 0 or more the program through a "else" will show the message "Invalide rent".
3.	Output 
    
    3.1. By means of an "If" the program will determine if it should show the result of the total tax if the user entered a valid amount.
    
    3.2. Within the above "if" the program will calculate the final tax.
    
    3.3. The program will print the final tax.

<div>

<div align= justify>

> ## Texts 

### 1) Rent < 0

<img src="../imagens\Imagenes_Readme2\1.1.png" align = "center" height = "150" width="850"/>

### 2) Rent >= 0 && Rent < 10000

<img src="../imagens\Imagenes_Readme2\1.2.png" align = "center" height = "150" width="850"/>

### 3) Rent >= 10000 && Rent < 20000

<img src="../imagens\Imagenes_Readme2\1.3.png" align = "center" height = "150" width="850"/>

### 4) Rent >= 20000 && Rent < 35000

<img src="../imagens\Imagenes_Readme2\1.4.png" align = "center" height = "150" width="850"/>

### 5) Rent >= 35000 && Rent < 60000

<img src="../imagens\Imagenes_Readme2\1.5.png" align = "center" height = "150" width="850"/>

### 6) Rent >= 60000

<img src="../imagens\Imagenes_Readme2\1.6.png" align = "center" height = "150" width="850"/>
---------------------------------------------------------------

<div align= justify>

 # Exercise 2: Bonus
 ### Write a program that reads the user's score and indicates their performance level, as well as the amount of money the user will receive

<div>

<div align= justify>

> ## INPUT

```c++ 
    // Request a rating from the user
    cout << "Write your rating" << endl;
    cin >> qualification;
 ```
<div align= justify>

> ## PROCCESS

```c++ 
    // "If" to determine if a valid grade has been entered
    if ((qualification == 0 || qualification == 0.4 || qualification >= 0.6) && qualification <= 1)
    {
        // "If" to determine the final performance of each username
        if (qualification == 0)
        {
            performance = "unacceptable";
        }
        else if (qualification == 0.4)
        {
            performance = "acceptable";
        }
        else if (qualification >= 0.6)
        {
            performance = "commendable";
        }
        else
        {
        cout << "Rating not accepted" << endl;
        }
        
 ```
<div align= justify>

> ## OUTPUT

```c++ 
    // Print the results
        cout << "Your performance is " << performance << endl;
        cout << "Your bonus is $" << 2400 * qualification << endl;
    }

    // In case an incorrect qualification is typed, it will show you a message
    else
    {
        cout << "Rating not accepted" << endl;
    }
```

<div>

<div align= justify>

## Explanation 

1.	Input
    
    1.1. The program will ask the user their rating 
    
    1.2. The user will enter his rating.
2.	Process 
    
    2.1. With an "if" the program will determine if the grade entered is valid.
   
    2.2. With a series of "if's" the program determine the performance of the user.
3.	Output 
    
    3.1.The program will calculate the bonus that the user will receive.
    
    3.2. The program will print the bonus you will receive and the performance that the user had.
    
    3.3.If the score entered was not valid, the program never entered the first "If" and will print the message "Rating not accepted". 

<div>

<div align= justify>

> ## Texts 

### 1) Qualification < 0 && Qualification > 1

<img src="../imagens\Imagenes_Readme2\2.1.png" align = "center" height = "150" width="850"/>

### 2) Qualification == 0

<img src="../imagens\Imagenes_Readme2\2.2.png" align = "center" height = "150" width="850"/>

### 3) Qualification == 4

<img src="../imagens\Imagenes_Readme2\2.3.png" align = "center" height = "150" width="850"/>

### 4) Qualification >= 6 && Qualification <= 1

<img src="../imagens\Imagenes_Readme2\2.4.png" align = "center" height = "150" width="850"/>

---------------------------------------------------------------

<div align= justify>

 # Exercise 3: Game Room
 ### Write a program for a company that has game rooms for all ages and wants to automatically calculate the price you should charge your customers for entering.The program must ask the user for the customer's age and display the price of the ticket.

<div>

<div align= justify>

> ## INPUT

```c++ 
    // Request the age of the user
    cout << "Enter your age: " << endl;
    cin >> date;
 ```
<div align= justify>

> ## PROCCESS

```c++ 
    // Determine with an "if" the cost of the entrance
    if (date >= 0 && date < 4)
    {
        cost = 0;
    }
    else if (date >= 4 && date <= 18)
    {
        cost = 5;
    }
    else if (date > 18)
    {
        cost = 10;
    }

    // If age is not valid, you will enter the "else" and show you the following message
    else
    {
        cout << "Enter a valid age" << endl;
    }

 ```
<div align= justify>

> ## OUTPUT

```c++ 
    // "If" to show the final cost message only when a valid age has been entered
    if (date >= 0)
    {
        // Print the results
        cout << "Its entry cost $" << cost << endl;
    }
```

<div>

<div align= justify>

## Explanation 

1.	Input
    
    1.1. The program will ask the user their age.
    
    1.2.The user will enter his age.
2.	Process 
    
    2.1. With a series of "if's" the program will determine the cost of the user's entrance.
    
    2.2. If an option is entered, it invalidates the program with a "else" will display the message "Enter a valida age".
3.	Output
    
    3.1.The program will determine with an "if" if it should show the message with the price of the ticket the user.
    
    3.2. The program will print the user's entrance price. 

<div>

<div align= justify>

> ## Texts 

### 1) Date < 0

<img src="../imagens\Imagenes_Readme2\3.1.png" align = "center" height = "150" width="850"/>

### 2) Date >= 0 && Date < 4

<img src="../imagens\Imagenes_Readme2\3.2.png" align = "center" height = "150" width="850"/>

### 3) Date >= 4 && Date <= 18

<img src="../imagens\Imagenes_Readme2\3.3.png" align = "center" height = "150" width="850"/>

### 4) Date > 18

<img src="../imagens\Imagenes_Readme2\3.4.png" align = "center" height = "150" width="850"/>
 
---------------------------------------------------------------

<div align= justify>

 # Exercise 4: Pizzeria Menu
 ### Write a program that asks the user if he wants a vegetarian pizza or not, and based on your answer, show you a menu with the ingredients available for you to choose from. You can only choose one ingredient besides the mozzarella and the tomato that are in all the pizza. At the end it should be shown on the screen if the chosen pizza is vegetarian or not and all the ingredients it carries

<div>

<div align= justify>

> ## INPUT

```c++ 
    // Ask if the pizza would be vegetarian
    cout << "Would your pizza be vegetarian?" << endl;
    cout << "1.- Yes" << endl;
    cout << "2.- No" << endl;
    cin >> vegetarian;
 ```
<div align= justify>

> ## PROCCESS

```c++ 
    // "Ifs" is used to determine what type of menu to show you
    if (vegetarian == 1)
    {
        type = "is";
        cout << "Extra ingredient for your pizza" << endl;
        cout << "-----Menu-----" << endl;
        cout << "1.- Pepper" << endl;
        cout << "2.- Tofu" << endl;
        cin >> extra;

        // "Ifs" to determine what extra ingredient the pizza will have
        if (extra == 1)
        {
            bonusIngredient = "pepper";
        }
        else if (extra == 2)
        {
            bonusIngredient = "tofu";
        }
        else
        {
            cout << "Choose a valid option" << endl;
        }
    }
    else if (vegetarian == 2)
    {
        type = "is not";
        cout << "Extra ingredient for your pizza" << endl;
        cout << "-----Menu-----" << endl;
        cout << "1.- Pepperoni" << endl;
        cout << "2.- Ham" << endl;
        cout << "3.- Salmon" << endl;
        cin >> extra;

        // "Ifs" to determine what extra ingredient the pizza will have
        if (extra == 1)
        {
            bonusIngredient = "pepperoni";
        }
        else if (extra == 2)
        {
            bonusIngredient = "ham";
        }
        else if (extra == 3)
        {
            bonusIngredient = "salmon";
        }
        else
        {
            cout << "Choose a valid option" << endl;
        }
    }
    else
    {
        cout << "Choose a valid option" << endl;
    }

 ```
<div align= justify>

> ## OUTPUT

```c++ 
    // "If" to show the message of the order placed only when the pizza has been ordered successfully
    if ((vegetarian == 1 && (extra == 1 || extra == 2)) || (vegetarian == 2 && (extra == 1 || extra == 2 || extra == 3)))
    {

        // Print the results
        cout << "Your pizza " << type << " vegetarian and contains mozzarella, tomato and " << bonusIngredient << endl;
    }
```

<div>

<div align= justify>

## Explanation 

1.	Input
    
    1.1. The program will ask if your pizza will be vegetarian or not. 
    
    1.2. The user will enter his answer.
2.	Process 
    
    2.1. With a series of "if's" the program will determine which menu it will show depending on the user's response, only in case of having entered a valid option.
    
    2.2. When the user can see the menu that corresponds to him, he can choose an extra ingredient.
    
    2.3. With a series of nested "if's" the program will save the extra ingredient chosen by the user, only in case he has chosen a valid option.
3.	Output
    
    3.1. The program will determine with an "if" if it should display the message with the chosen pizza and its ingredients in case the process has been completed successfully.
    
    3.2.The program will print the user's order. 

<div>

<div align= justify>

> ## Texts 

### 1) Invalid option

<img src="../imagens\Imagenes_Readme2\4.1.png" align = "center" height = "250" width="850"/>

### 2) Vegetarian whit pepper

<img src="../imagens\Imagenes_Readme2\4.2.png" align = "center" height = "250" width="850"/>

### 3) Vegetarian whit tofu

<img src="../imagens\Imagenes_Readme2\4.3.png" align = "center" height = "250" width="850"/>

### 4) No vegetarian whit pepperoni

<img src="../imagens\Imagenes_Readme2\4.4.png" align = "center" height = "250" width="850"/>

### 5) No vegetarian whit ham

<img src="../imagens\Imagenes_Readme2\4.5.png" align = "center" height = "250" width="850"/>

### 6) No vegetarian whit salmon

<img src="../imagens\Imagenes_Readme2\4.6.png" align = "center" height = "250" width="850"/>

---------------------------------------------------------------

<div align= justify>

 # Exercise 5: Temperature
 ### Make a program in whish 6 temperatures are entered and determine the average, the lowest and the highest

<div>

<div align= justify>

> ## INPUT

```c++ 
    // Ask the user the temperature
    cout << "What is the termperature ?" << endl;
    cin >> temperature;

 ```
<div align= justify>

> ## PROCCESS

```c++ 
    // "Do While" cycle to take temperature until 6 temperatures are entered
    do
    {
        // Ask the user the temperature
        cout << "What is the termperature ?" << endl;
        cin >> temperature;

        // Mathematical operation to determine the average of the total temperatures
        temperaturesum += temperature;

        // "If" to determine the highest temperature
        if (temperature >= elderly)
        {
            elderly = temperature;
        }

        // "If" to determine the lowest temperature
        if (temperature <= minior)
        {
            minior = temperature;
        }

        counter++;

    } while (counter < 6);
 ```

<div align= justify>

> ## OUTPUT

```c++ 
    // Print the results
    cout << "The average temperature is: " << temperaturesum / 6 << " °C" << endl;
    cout << "The highest temperature is: " << elderly << " °C" << endl;
    cout << "The lowest temperature is: " << minior << " °C" << endl;
```

<div>

<div align= justify>

## Explanation 

1. Input
    
    1.1. The program will ask the user the temperature 6 times by means of a "do while"
    
    1.2. The user enters the temperature
2. Process 
    
    2.1. The program adds all the temperatures entered in the variable "temperature".
    
    2.2. The program with two "if's" compares the newly entered temperature with the current highest and lowest temperature.
3. Output
    
    3.1. The program calculates the average temperatures and prints the final result,
    
    3.2. The program prints the highest and lowest final temperature. 

<div>

<div align= justify>

> ## Texts 

### 1) 6 temperatures

<img src="../imagens\Imagenes_Readme2\5.1.png" align = "center" height = "350" width="850"/>

---------------------------------------------------------------

<div align= justify>

 # Exercise 6: Number of Products
 ### Make a program that reads indefinitely quantities of products and their price, and at the end indicates the total of the invoice. To know that the purchase has been completed, a 0 must be entered in the quantily.
 
<div>

<div align= justify>

> ## INPUT

```c++ 
        // Enter number of products to be purchased 
        cout << "Quantity of products: " << endl;
        cin >> products;

        // Enter the price of the products
            cout << "Individual product price: $" << endl;
            cin >> price;
            invoice += (products * price);

 ```
<div align= justify>

> ## PROCCESS

```c++ 
    do
    {
        // Enter number of products to be purchased
        cout << "Quantity of products: " << endl;
        cin >> products;

        // "Ifs" ​​to determine the operation to perform depending on the number of products entered
        if (products > 0)
        {
            // Enter the price of the products
            cout << "Individual product price: $" << endl;
            cin >> price;
            invoice += (products * price);
        }
        else if (products == 0)
        {
            cout << "Exit";
        }
        else
        {
            cout << "Invalid quantity of products, enter a valid quantity" << endl;
        }

    } while (products != 0);
 ```

<div align= justify>

> ## OUTPUT

```c++ 
    // Print the results
    cout << "The total to be billed si: $" << invoice << endl;
```

<div>

<div align= justify>

## Explanation 

1. Entrance
    
    1.1. The program will ask the user how many items he will buy by means of a "do while" cycle.
    
    1.2. The user enters will go the number of products he will buy 
    
    1.3. The user will enter the individual price of the product 
2. Process 
    
    2.1. The program through "If's" will determine if the user wants to continue entering products, if he wishes the program will ask the individual price of the product and multiply it by the number of products he has entered.
    
    2.2. The program will add up the total of all purchases.
    
    2.3. If the user enters a "0" in the number of products he compares, the program will exit the "do while" cycle.
    
    2.4. If the user enters a negative number in the number of products compared by the program, it will indicate that the number entered is an invalid amount. 
3. Exit 
    
    3.1. The program prints the total purchase. 

<div>

<div align= justify>

> ## Texts 

### 1) Invalid products

<img src="../imagens\Imagenes_Readme2\6.1.png" align = "center" height = "150" width="650"/>

### 1) Products

<img src="../imagens\Imagenes_Readme2\6.2.png" align = "center" height = "250" width="850"/>

---------------------------------------------------------------

<div align= justify>

 # Exercise 7: Decimal to binary
 ### Write a program that performs the conversion from decimal to binary, only for integer greater than 0. The result can be displayed as an integer variable or in a set of character.
 
<div>

<div align= justify>

> ## INPUT

```c++ 
    // Enter a decimal number
        cout << "Type a number: " << endl;
        cin >> decimal;

 ```
<div align= justify>

> ## PROCCESS

```c++ 
    / Cycle "Do While" to ask to type a decimal number while not typing a positive decimal number
    do
    {
        // Enter a decimal number
        cout << "Type a number: " << endl;
        cin >> decimal;

        // "If" to enter a while loop if a positive decimal number is entered
        if (decimal > 0)
        {
            // "While" to convert the decimal variable to a positive number as long as the number is greater than 0
            while (decimal > 0)
            {
                result = to_string(decimal % 2) + result;
                decimal /= 2;
            }
        }
        else if (decimal == 0)
        {
            result = '0';
        }
        else
        {
            cout << "Type a positive number" << endl;
        }

    } while (decimal < 0);

 ```

<div align= justify>

> ## OUTPUT

```c++ 
    // Print the results
    cout << "Decimal number converted to binary: " << result;
```

<div>

<div align= justify>

## Explanation 

1. Input
    
    1.1. The program will ask the user to enter a tenth number by cycle “do while"
    
    1.2. The user enters the decimal number. 
2. Process 
    
    2.1. The program through "If's" will determine if the user entered a positive number.
    
    2.2. If the user will enter a positive number, the program will enter a "while" cycle where it will divide the number by 2 and concatenate the residue of each division. 
    
    2.2. If the user will enter a negative number the program will ask him to enter a positive number.
3. Output
    
    3.1. The program prints the final result.

<div>

<div align= justify>

> ## Texts 

### 1) Negative number

<img src="../imagens\Imagenes_Readme2\7.1.png" align = "center" height = "200" width="850"/>

### 2) Number 0

<img src="../imagens\Imagenes_Readme2\7.2.png" align = "center" height = "150" width="1000"/>

### 2) Positive number

<img src="../imagens\Imagenes_Readme2\7.3.png" align = "center" height = "150" width="850"/>

---------------------------------------------------------------

<div align= justify>

 # Exercise 8: Multiplication table
 ### Write a program that prints the multiplication table you want up to the number you want.
 
<div>

<div align= justify>

> ## INPUT

```c++ 
    // Enter what number your multiplication table will be and what number your multiplication tabla will reach
    cout << "Enter until you want your multiplication table to arrive" << endl;
    cin >> counter;
    cout << "Enter that number will be your multiplication board" << endl;
    cin >> table;
 ```
<div align= justify>

> ## PROCCESS

```c++ 
    // "For" loopto place multiple hyphens
    for (int line = 0; line <= 48; line++)
    {
        cout << "-";
    }
    cout << endl;
    // "If" to determine if the multiplication table will be positive or negative numbers
    if (counter >= 0)
    {

        // Loop "for" to print the results of the multiplication table
        for (int estar = 1; estar <= counter; estar++)
        {
            // Print the results
            cout << "|\t" << estar << "\tx\t" << table << "\t=\t" << estar * table << "\t|" << endl;

            // "For" loopto place multiple hyphens
            for (int line = 0; line <= 48; line++)
            {
                cout << "-";
            }
            cout << endl;
        }
    }

    if (counter < 0)
    {

        // Loop "for" to print the results of the multiplication table
        for (int estar = -1; estar >= counter; estar--)
        {
            // Print the results
            cout << "|\t" << estar << "\tx\t" << table << "\t=\t" << estar * table << "\t|" << endl;

            // "For" loopto place multiple hyphens
            for (int line = 0; line <= 48; line++)
            {
                cout << "-";
            }
            cout << endl;
        }
    }
 ```

<div align= justify>

> ## OUTPUT

```c++ 
    // Print the results
    cout << "|\t" << estar << "\tx\t" << table << "\t=\t" << estar * table << "\t|" << endl;
```

<div>

<div align= justify>

## Explanation 

1. Input
    
    1.1. The program will ask the user until what number he wants his multiplication table to arrive.
    
    1.2. The user enters up to the number that his multiplication table will arrive.
    
    1.3. The program will ask the user what number his multiplication table will be. 
    
    1.4. The user enters what number will be his multiplication table.
2. Process 
    
    2.1. The program through an "If" will determine if the table multiplies negative or positive numbers.
    
    2.2. The program through a "for" will perform all the multiplications of the multiplication table.
3. Output
    
    3.1. The program through a "for" will print the multiplication table at the same time that performs each of the multiplications.

<div>

<div align= justify>

> ## Texts 

### 1) Multiplication table of positive numbers

<img src="../imagens\Imagenes_Readme2\8.1.png" align = "center" height = "400" width="850"/>

### 1) Multiplication table of negative numbers

<img src="../imagens\Imagenes_Readme2\8.2.png" align = "center" height = "350" width="850"/>

---------------------------------------------------------------
