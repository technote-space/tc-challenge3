package main

import (
	"fmt"
)

func main() {
	for i := 1; i <= 150; i++ {
		switch {
		case i < 100 && (i%3 == 0 || i%10 == 3):
			fmt.Printf("%02d!\n", i)
		default:
			fmt.Printf("%03d\n", i)
		}
	}
}
