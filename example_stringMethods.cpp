#include <iostream>

int main(){
    std::string name;

    std::cout << "Enter you name: ";
    std::getline(std::cin, name);

    if(name.empty()){                                   //retruns a boolean
        std::cout << "You didn't enter your name!\n";
        return 0;
    }
    if(name.length() > 15){                        //length of string
        std::cout << "Your name can't be over 15 characters long.\n";
        return 0;
    }
    

    std::cout << "Welcome " << name << '\n';
    
    int index = name.find(' ');
    if(index != std::string::npos){
        name.replace(index,1, "_");
    }

    name.append("@ru.ac.bd");                           //adds to string
    std::cout << "Your username is now " << name << '\n';

    std::cout << "Your initial is " << name.at(0) << '\n'; //list the char                                                            //at given index
    
    index = name.find('@');
    name.erase(index);                          //removes from index to end

    name.insert(0, "@");                //insert(index, what to insert)
    std::cout << "Thank you " << name << '\n';


    name.clear();                                       //remove the string                                                        //from the variable
    return 0;
}

