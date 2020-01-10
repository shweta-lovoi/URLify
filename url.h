//pass the url string by reference and the use the find library function of string to get the position of the space.
//while the position is not npos find the position of ' ', erase the space and insert "%20" into the string. this is commented

//new approach for a detailed algorithm: Find the size of the string passed into the function as well as the number of spaces
//if space is 0 then return the word as is. Create a new char array with the size of the word + 2 time the size of space
//go over the original string char for char, if the char is a character add it to the new array, if if's a space
//add % where the space is and add '2' and '0' at the next 2 chars. There are 2 counters to keep track of both string and
//the char array. Convert the array to string and then return.
#ifndef URL_H
#define URL_H
std::string url(std::string x){
    int size = x.size();
    int space = 0;
    for(int i = 0; i < size; i++){
        if(x[i] == ' ')
            space++;
    }
    //if there are no spaces in a word return the word as is
    if(space == 0)
        return x;
    int sizeOfString = x.size() + (2 * (space)) + 1;
    char * str = new char [sizeOfString];
    str[sizeOfString] = '\0';
    //this is a separate counter for char array to keep track
    int j = 0;
    for(int i = 0; i < size;){
        //if the char is not a space add it to new char array
        if(x[i] != ' ') {
            str[j] = x[i];
            i++;
            j++;
        }
        //if the char is a space add % at  and then add 2 and 0 to i + 1 and i + 2
        else{
            str[j++] = '%';
            str[j++] = '2';
            str[j++] = '0';
            i++;
        }
    }
    std::string str1(str);
    return str1;
    /*
    int found = x.find(" ", 0);
    while(found != std::string::npos){
        x.erase(found, 1);
        x.insert(found, "%20");
        found = x.find(" ", 0);
    }
     */
}
#endif