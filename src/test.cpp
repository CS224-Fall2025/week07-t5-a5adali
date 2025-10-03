
int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isHappy(number)) {
        cout << number << " is a Happy Number." << endl;
    } else {
        cout << number << " is Not a Happy Number." << endl;
    }

    return 0;