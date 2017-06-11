#include <iostream>
#include <cstring>
#include <time.h>
#include <stdlib.h>
#include <string>
#include "forum.h"


int main()
{
    string subject = "Κανόνες και χρήσιμες πληροϕορίες";
    forum f("Αντικειμενοστραϕής Προγραμματισμός");
    f.set_forum();
    cout << "Forum with title: "<<  f.get_title() << " has just been created!"<< endl;

    f.print();

    f.search(subject);

    cout << "Just exiting the main function ...." << endl << endl;
    return 0;
}
