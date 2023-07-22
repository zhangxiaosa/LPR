package main

const (
	ALL = -1
)

type Iter[T any] interface {
	Next(n int) []T
}

type sliceIter[T any] struct {
	s []T
}

func (i *sliceIter[T]) Next(n int) []T {
	if n == ALL || n > len(i.s) {
		n = len(i.s)
	}
	next := make([]T, n)
	copy(next, i.s[:n])
	i.s = i.s[n:]
	return next
}

func FromSlice[T any](s []T) Iter[T] {
	return &sliceIter[T]{s}
}

type mapIter[T1, T2 any] struct {
	f func(T1) T2
	i Iter[T1]
}

func (i *mapIter[T1, T2]) Next(n int) []T2 {
	vs := i.i.Next(n)
	if len(vs) == 0 {
		return nil
	}
	next := make([]T2, len(vs))
	for j := range next {
		next[j] = i.f(vs[j])
	}
	return next
}

func Map[T1, T2 any](f func(T1) T2, i Iter[T1]) Iter[T2] {
	return &mapIter[T1, T2]{f, i}
}

func ToSlice[T any](i Iter[T]) []T {
	all := i.Next(ALL)
	if all == nil {
		return []T{}
	} else {
		return all
	}
}

func typeAssert[To, From any](v From) To {
	return any(v).(To)
}

func TypeAssert[To, From any](i Iter[From]) Iter[To] {
	return Map(typeAssert[To, From], i)
}

func main() {
	_ = ToSlice(
		TypeAssert[string](
			FromSlice([]int{1})))
}

