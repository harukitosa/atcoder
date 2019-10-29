package main

import (
	"fmt"
)

func main() {
	var str string
	flag := true
	_, err := fmt.Scan(&str)
    if err != nil {
        panic("ERROR")
    }
	for i := 0; i < len(str); i++ {
		if (i+1)%2 == 0 {
			if str[i] == 'R' {
				flag = false
			}
		} else {
			if str[i] == 'L' {
				flag = false
			}
		}
	}
	if flag {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
