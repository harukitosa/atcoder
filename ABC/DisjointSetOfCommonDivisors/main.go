package main

import (
	"fmt"
)

func primeFactors(n int) []int {
	factors := make([]int, 0)
	i := 2
	for i*i <= n {
		r := n % i
		if r != 0 {
			i++
		} else if r == 0 {
			n /= i
			factors = append(factors, i)
		}
	}
	if n > 1 {
		factors = append(factors, n)
	}
	return factors
}

func gcd(a, b int) int {
	if b == 0 {
		return a
	}
	return gcd(b, a%b)
}

func main() {
	var a, b int
	fmt.Scan(&a, &b)
	var num []int
	if a > b {
		for i := 1; i <= b; i++ {
			if a%i == 0 && b%i == 0 {
				num = append(num, i)
			}
		}
	} else {
		for i := 1; i <= a; i++ {
			if a%i == 0 && b%i == 0 {
				num = append(num, i)
			}
		}
	}

	result := 0
	ok := true
	for i := 0; i < len(num); i++ {
		for j := 0; j < i/2; j++ {
			if gcd(num[i], num[j]) != 1 {
				ok = false
			}
		}
		if ok {
			result++
		}
		ok = true
	}
	fmt.Println(result)
}
