package main

import (
	"fmt"
	"strconv"
)

func main() {
	var n int
	fmt.Scan(&n)
	a := map[string]int{}
	for i := 1; i <= n; i++ {
		var tmp int
		fmt.Scan(&tmp)
		a[strconv.Itoa(tmp)] = i
	}

	for i := 1; i <= n; i++ {
		fmt.Print(a[strconv.Itoa(i)])
		fmt.Print(" ")
	}
	fmt.Println()
}
