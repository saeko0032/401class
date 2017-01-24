// January 3rd

// for-loop
for ( initialization; condition;update)
{
   for-body;
}
// while-loop
while(condition)
{
    while-body;
}

///////when we use for-loop
// -> we need to understand how many iterate we will do
//////when we use while-loop
// -> we don't know how many times loop is going to happen

// Arrays
//   |_ Data structure
//   |_store a collection of 
//   |
//   |_variavle, with the same type
//   |_size in fined.
       
// if you want to use 5integer,
// it's better to declare arrays
// because array allocate memory continuously
 ______________________
[ 5 | 11 | 7 | 2 | 20 ]
 [0] [1]  [2] [3]  [4]
 
int rowH = number[1]*number[4];
//  220  +    11    *    20;

int result = number[5] + number[5];
             // random number
// if you didn't allocate and initialize the array index,
// we don't know the number of this index.
// and c didn't throw any errors.

// we must declare how many memory we want use in C.
int number[10]; //ID array
int number[] = {5,6,10,20,-1,6};

int char[4] = {'a','b','c','d','e','f'}
//             [0] [1] [2] [3] [4] [5] -< we will over write [5] address

