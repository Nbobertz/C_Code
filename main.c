#include <stdio.h>


// This file includes this below program with slight deviations in multiple languages


// Below is C
int main(){
	printf("Hi, my name is Nick. Welcome to C");
	return 0;
}

//Below is Rust
fn main(){
    let mut i = 0;
    let mut b = 10;
    
    while i < 10 {
        println!("This is Nick and the current number is {b}");
        i = i+1;
        b=b*20;
    }
}

//Below is Go
package main

import "fmt"

func main() {
	i := 0

	//create string
	var name string
	name = "nick"
	number := 0
	for i < 5 {
		number = number + 1
		message := fmt.Sprintf("My name is %s and the current number is %d", name, number)
		fmt.Println(message)
		i++
	}
}
//Below is Python
name = "Nick"
number = 10

i = 5

for x in range(0,i):
    newnum = number*10
    print("My name is {a} and the current number is {b}".format(a=name,b=newnum))
    i+=1