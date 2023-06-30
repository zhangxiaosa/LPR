package main

import (
	"reflect"
)

type Foo struct{}

func (_ Foo) Foo(
	_ Bar,
	_ Bar,
	_ Baz,
	_ Baz,
	_ Baz,
	_ Bar,
	_ Qux,
) {
}

type Bar interface{}

type Baz func()

type Qux int

func main() {
	f := reflect.ValueOf(Foo{}).MethodByName("Foo").Interface()
	reflect.ValueOf(f).Call([]reflect.Value{
		reflect.ValueOf(Bar(42)),
		reflect.ValueOf(Bar(42)),
		reflect.ValueOf(Baz(nil)),
		reflect.ValueOf(Baz(nil)),
		reflect.ValueOf(Baz(nil)),
		reflect.ValueOf(Bar(42)),
		reflect.ValueOf(Qux(0)),
	})
}
