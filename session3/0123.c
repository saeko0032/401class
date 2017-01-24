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

int numbers[5]; -> [ | | | | | ]
                   [0][1][2][3][4]

int numbers[ 3 ][ 4 ]; -> [[0][0]|[0][1]|[0][2]|[0][3]]
           row  columns   [[1][0]|[1][1]|[1][2]|[1][3]]
                          [[2][0]|[2][1]|[2][2]|[2][3]]
                        4 bytes * 12 = 48 bytes
int bumber[2][4][10] 2*4*10*4 = 320 bytes;
1 - 1,000,000
long number[10000];

int number[10];
[ 1 | 5 | 7 | 13 | 13 | 7 | 8 | 19 | 20 | 1 ]
1->2, 5->1, 7->2, 13->2, 8->1, 19->1, 20->1, 15 ->0, 17->0, 12->0
