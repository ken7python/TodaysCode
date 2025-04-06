// go build 4_6_0.go && ./4_6_0
package main

import (
	"fmt"
	"time"
)

func main() {
	start := time.Now()

	i := 0
	var sum int64 = 0
	for i < 1000000 {
		//fmt.Println(i)
		sum += int64(i)
		i++
	}

	duration := time.Since(start)
	fmt.Printf("合計: %d\n", sum)
	fmt.Printf("実行時間: %f秒\n", duration.Seconds())
}
