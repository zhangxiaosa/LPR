fn a() -> impl b {
    let result: f<T> = d::<T>("", || "");
    // Assign value to result.h
    result
}

trait b {}

struct f<T> {
    h: T,
}

impl<T> b for T {}