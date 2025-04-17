package main

import (
	"fmt"
)

func main() {
	i := 1
	j := 1
	for i <= 9 {
		j = 1
		for j <= 9 {
			fmt.Printf("%d * %d = %2d; ", i, j, i*j)
			j++
		}
		fmt.Printf("\n")
		i++
	}
}
