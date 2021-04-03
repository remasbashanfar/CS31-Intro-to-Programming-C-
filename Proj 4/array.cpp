#include <iostream>
#include <string>
#include <cassert>
#include <cctype>
using namespace std;

int locateMaximum( const  string  array[ ],  int  n );
int countFloatingPointValues( const string array[ ], int  n );
bool hasNoCapitals( const string array[ ], int n );
bool CountDecimals ( string s);
bool identicalValuesTogether( const string array[ ], int n);
bool hasTwoOrMoreDuplicates( const string array[ ], int  n );
int shiftLeft( string array[ ], int n, int amount, string placeholder );
int replaceFirstAndLastOccurrences( string array[ ], int n, char charToFind, char charToReplace );
bool PureInteger ( const string s);


int main() {
    string arrayA1[] = {"A","B", "C", "D", "E", "F", "G", "H"};
    string arrayA2[] = {"hello", "bye", "MAYBE", "321smth", "!gosomewhere?", ""};
    string arrayA3[] = {"12.5", "bye", "12.2", "-12.2", "!gosomewhere?", ""};
    string arrayA17[] = {"12.5", "bye", "12.2", "-12.2", "!gosomewhere?", "3"};
    string arrayA5[] = { "12"};
    string arrayA4[] = {"hello", "bye", "maybe", "321smth", "!gosomewhere?", ""};
    string arrayA6[] = {"12.5", "----12.4", "12.2", "-12.2", "12...3", "000.5"};
    string arrayA18[] = {"12.5", "----12.4", "12.2", "-12.2", "123", "000.5"};
    string arrayA7[]= { "A", "A", "B", "C"};
    string arrayA23[]= { "A", "A", "B", "C"};
    string arrayA8[]= { "A", "A", "B", "C", "A", "A"};
    string arrayA9[]= { "A", "A", "B", "C", "A", "C"};
    string arrayA10[]= { "A", "B", "C", "D"};
    string arrayA11[]= { "a", "a", "b", "a", "a" };
    string arrayA12[]= { "A", "A","A", "B", "C", "A", "C"};
    string arrayA13[]= { "A", "A", "B", "C", "A", "C"};
    string arrayA14[]= { "A", "A", "B", "C", "A", "A", "A", "A"};
    string arrayA21[]= { "A", "A", "B", "C", "A", "A", "A", "A"};
    string arrayA22[]= { "A", "A", "B", "C", "A", "A", "A", "A"};
    string arrayA15[]= {  "AAA", "ABA", "ACAAA", "BA"};
    string arrayA16[]= {  "AAA", "ABA", "ACAAA", "zzzzzA"};
    string arrayA20[]= {  "AAA", "ABA", "ACAAA", "zzzzzA"};
    string arrayA25[]= {  "AA", "BB", "aa", "bb", "cc", "dd", "ee"};



    assert( locateMaximum(arrayA1, 4)==3);
    assert( locateMaximum(arrayA1, 8)==7);
    assert( locateMaximum(arrayA2, 6)==0);
    assert( locateMaximum(arrayA2, 3)==0);
    assert( locateMaximum(arrayA2, 0)==-1);
    assert( locateMaximum(arrayA1, 0)==-1);
    assert( locateMaximum(arrayA1, 1)==0);
    
    assert(CountDecimals("000.5"));
    assert( PureInteger("12222")== true);
    assert( PureInteger("-12222")== false);
    assert( PureInteger("r12222")== false);
    
    assert( countFloatingPointValues(arrayA5, 1)== 1);
    assert( countFloatingPointValues(arrayA6, 2)== 1);
    assert( countFloatingPointValues(arrayA1, 8)== 0);
    assert( countFloatingPointValues(arrayA17, 6)== 3);
    assert( countFloatingPointValues(arrayA18, 6)== 4);//

    
    assert( hasNoCapitals(arrayA1, 3)== false);
    assert( hasNoCapitals(arrayA4, 6)== true);
    
    assert(identicalValuesTogether(arrayA7, 4)== true);
    assert(identicalValuesTogether(arrayA7, 1)== true);
    assert(identicalValuesTogether(arrayA7, 0)== false);
    assert(identicalValuesTogether(arrayA8, 6)== false);
    assert(identicalValuesTogether(arrayA9, 6)== false);
    assert(identicalValuesTogether(arrayA10, 4)== true);
    assert(identicalValuesTogether(arrayA11, 2)== true);
    assert(identicalValuesTogether(arrayA11, 5)== false);
    
    assert(hasTwoOrMoreDuplicates(arrayA11, 5)== true);
    assert(hasTwoOrMoreDuplicates(arrayA11, 3)== false);
    assert(hasTwoOrMoreDuplicates(arrayA11, 4)== true);
    assert(hasTwoOrMoreDuplicates(arrayA11, 1)== false);
    assert(hasTwoOrMoreDuplicates(arrayA8, 6)== true);
    assert(hasTwoOrMoreDuplicates(arrayA14, 8)== true);

    assert(shiftLeft(arrayA14, 8, 0, "foo")== 0);
    assert(shiftLeft(arrayA21, 8, 3, "foo")== 3);
    assert(shiftLeft(arrayA22, 8, 8, "foo")== 8);
    assert(shiftLeft(arrayA10, 4, 4, "foo")== 4);
    assert(shiftLeft(arrayA7, 4, 2, "foo")== 2);
    assert(shiftLeft(arrayA25, 5, 10, "foo")== 5);

    
    assert(replaceFirstAndLastOccurrences(arrayA23, 4, 'A', 'H')== 2);
    assert(replaceFirstAndLastOccurrences(arrayA15, 4, 'A', 'z')== 7);
    assert(replaceFirstAndLastOccurrences(arrayA16, 4, 'A', 'z')== 7);
    assert(replaceFirstAndLastOccurrences(arrayA20, 4, 'A', 'A')== 7);







    cerr<< "All GOOD!" << endl;
    return 0;
}
    

//returns index for the maximum item found
int locateMaximum( const  string  array[ ],  int  n ){
    //if it is 0 or less, return -1
    if (n <= 0){
        return -1;
    }
    
    string max = array[0];
    int maxindex = 0;
    //take the index 1 and compare it to index 0 then continue on comparing till finding the maximum index
    for (int k=1; k <n ; k++){
        if (array[k]> max){
            max= array[k];
            maxindex = k;
        }
    } return maxindex;

}


//find any integer and a float with no positive or negative signs and count them in the array
int countFloatingPointValues( const string array[ ], int  n ){
    if (n <= 0){
        return -1;
    }
    int count=0;
 //loop through arrays
 for (int k=0; k <n ; k++){
     string s= array[k];
     //loop through characters of an array
    if (CountDecimals(s) == true) { //used the helper function CountDecimals to count decimals in the string
              count++;
     }
    if ( ! CountDecimals(s) && PureInteger(s)){//if we did not find any decimals in array, find pure integers using the helper
             count++;
         }
    
             }
    return count;
}


//helper function to figure out if there is a decimal
bool CountDecimals ( const string s){
    bool hasdecimal (false);
    int countdec= 0;
    //we cannot have an empty string so countdec=2 means it will be false
    if ( s == ""){
        countdec = 2;
    }
    //loop through string
    for (int k=0; k<s.size(); k++){
        char c= s.at(k);
        //make sure the string can only be 2 things: a digit or a decimal. 48-57 indicate 0-9 in the ASCI Table
        if(((c >= 48) && (c <= 57)) || ( c== '.') ){
            
        }
        else { return false;}}
        
        //if the string has a decimal, count
        for (int k=0; k<s.size(); k++){
            char c= s.at(k);
            if ( c=='.'){
                countdec ++;
            }
                    
            }

    //having more than one decimal is invalid so if it counts more than 1 decimal then it is false
    if ( countdec == 1){
        hasdecimal= true;
    }

return hasdecimal;
}
//helper function that identifies if a string is a pure integer like 56 or 22
bool PureInteger ( const string s){
    bool pureint (true);
    int countint = 0;
    //if its empty then its invalid, 1 is invalid
    if ( s == ""){
        countint = 1;
    }
    //loop through the string and if an index is not a digit, then count
    if ( s != ""){
        for (int k=0; k<s.size(); k++){
            if ( !isdigit(s.at(k))){
                countint ++;
            }
        }
        //if the count is more than 0, which means that there is a non-digit index, then its false
        if ( countint != 0){
            pureint = false;
        }
    }

    return pureint;
    
}

//make sure that the array has no capitals
bool hasNoCapitals( const string array[ ], int n ){
    bool capital(true); //default
    
     //invalid because its empty
    if(n<=0){
        capital= true;
    }
    //loop through array
    for(int i = 0; i<n; i++) {
    string s = array[i];
    //loop through string
    for (int j = 0; j<s.size(); j++) {
    char letter = s.at(j);
    //if its a capital letter, then false
    //capital letters from A-Z found in ASCI Table
    switch(letter) {
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    capital =false;
    break;
    }
    }
    }

    return capital;
}

//if no identical then true
//if 2 identical not next to each other then false else true
bool identicalValuesTogether( const string array[ ], int n){
    if(n<=0){
        return false;
    }
    
    //loop through array
    for (int i = 0; i < n; i++) {
        bool sameasi (true);
        //loop through string
        for (int j = 1; j < n; j++) {
            //if the index j isnt the same as i, and they have the same value, then sameasi is true
            if (j != i && array[i] == array[j] && sameasi)
                continue;
            //if the index j isnt the same as i, and they dont have the same value, then sameasi is false
            else if ( j != i && array[i] != array[j])
                sameasi= false;
            //for the case where they are identical  but far apart, we use this
            else if ( j != i && array[i] == array[j] && !sameasi)
                return false;
 
                }
            }

    return true;
}


//if 2 pairs are idential OR 3 are identical then TRUE, else FALSE
bool hasTwoOrMoreDuplicates( const string array[ ], int  n ){
    if(n<=0){
        return false;
    }
    
    int count=0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            //if the value of i and j, which are different indexes, is the same, then count
            if (j != i && array[i] == array[j]){
                count ++; {
                    //if we count 2-6 times then return true
                    if ( count == 3 || count == 4 || count == 6 || count == 2){
                        return true;
                    }
                }
            }
    
        }
    }
    return false;
}


int shiftLeft( string array[ ], int n, int amount, string placeholder ){
    //if it is 0 or less, return -1
    if (n <= 0){
        return -1;
    }
    if (amount < 0){
        return -1;
    }
    if ( amount == 0){
        return 0;
    }
    //if we are asked to shift the whole array or an amount over our length (n), then replace every string and the amount returned should be the length (n)
    if ( amount > n || amount == n) {
        for ( int i=0 ; i < n; i++ ){
            array[i] = placeholder;
            amount = n;//NEW
        }
    }
    //take the array and initialize it to be that index but plus the amount we were given, then replace this new index by the placeholder
    for ( int i=0 ; i+amount < n; i++){
        array[i] = array[i+amount];
        array[i+amount] = placeholder;

        
    }
    
    //to check array
    for (int i = 0; i < n; ++i) {
        cerr << array[i] << " ";
    }
    cerr << endl;
    return amount;
}

//in each string, find the character, replace its first and last appearance by another character
int replaceFirstAndLastOccurrences( string array[ ], int n, char charToFind, char charToReplace ){
    int timesreplaced=0;
    if (n <= 0){
        timesreplaced = -1;
    }
    int integer=0;
    //loop through array
    for (int i = 0; i < n; i++) {
        //loop through string, find the first occurrence of the character, replace it with the new one, then break because we only want to replace the first
        for (int k=0; k<array[i].size(); k++){
            if ( array[i][k] == charToFind){
                array[i][k] = charToReplace;
                timesreplaced++;
                //if the character occured only once, to not confuse both loops, we initialize integer as k
                integer= k;
                break;
            }
        }
        //start looping from the end and make sure that k is greater than the integer from prior so that we do not confuse the character already counted as the first to be the last
        for ( int k= array[i].size()-1  ; k> integer; k--){
            if ( array[i][k] == charToFind){
                array[i][k] = charToReplace;
                timesreplaced++;
                break;
            }
        }
    }
    //check array
    for (int i = 0; i < n; ++i) {
        cerr << array[i] << " ";
    }
    cerr << timesreplaced;
    return timesreplaced;
}

