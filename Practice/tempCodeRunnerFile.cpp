cout << "Enter the number of rows in integer only : ";
    while(!(cin >> rows)){
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Please enter a valid integer number for the rows : ";
    }