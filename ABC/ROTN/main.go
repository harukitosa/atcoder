package main

import (
    "io"
    "os"
    "strings"
    "fmt"
)

var N int


func rot13(c byte) byte {
    // 文字を ROT13 変換する関数
    switch {
    case ('A' <= c && c <= 'Z'):
        // 13 文字分ずらす
        return (c - 'A' + byte(N)) % 26 + 'A'
    case ('a' <= c && c <= 'z'):
        // 13 文字分ずらす
        return (c - 'a' + byte(N)) % 26 + 'a'
    default:
        // 何もしない
        return c
    }
}

type rot13Reader struct {
    // io.Reader をラップする構造体
    r io.Reader
}

func (r *rot13Reader) Read(p []byte) (n int, err error) {
    // バイト列を読み込む
    n, err = r.r.Read(p)

    if err != nil {
        // 読み込みに失敗した
        return 0, err
    }

    for i := range p {
        // 各文字に ROT13 を適用する
        p[i] = rot13(p[i])
    }

    return
}


func main() {
    // 文字列から io.Reader インターフェースを実装したオブジェクトを生成する
    var str string
    
    fmt.Scan(&N, &str)
    s := strings.NewReader(str)
    // ROT13 変換するオブジェクトでラップする
    r := rot13Reader{s}
    // 標準出力に書き出す
    io.Copy(os.Stdout, &r)
    fmt.Println()
}
