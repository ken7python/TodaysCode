// 以下のコマンドをターミナルで実行
// go mod init todays
// go mod tidy
// go get -u github.com/gin-gonic/gin
// export GIN_MODE=debug
// go run 4_1_2.go
// GIN_MODEをreleaseにすると、デバッグモードがオフになる
package main

import (
	"github.com/gin-gonic/gin"
)

func main() {
	r := gin.Default()

	r.GET("/", func(c *gin.Context) {
		c.String(200, "Hello, World!")
	})

	api := r.Group("/api")
	api.GET("/hello", func(c *gin.Context) {
		c.JSON(200, gin.H{
			"message": "Hello, World!",
		})
	})
	api.GET("hello/:name", func(c *gin.Context) {
		name := c.Param("name")
		c.JSON(200, gin.H{
			"message": "Hello, " + name + "!",
			"name":    name,
		})
	})

	r.Run(":8080")
}
