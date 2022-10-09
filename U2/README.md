 <div align= center>

 # Unit 2 "Control structures and cycles"

<div align= justify>

 ## Exercise 1: Annual tax

 ### Problem: Write a program that asks the user for their annual income and shows the corresponding tax on the screen

<div>

<div align= justify>

> ## IMPUT

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
        cout << "Invalid rent";
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











 
 
