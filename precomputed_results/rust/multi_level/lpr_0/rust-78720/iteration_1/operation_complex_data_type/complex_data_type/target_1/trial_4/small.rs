fn a() -> impl b {
    let empty_string: &str = "";
    empty_string.d()
}

trait b {
    fn d(self) -> f { }
}

struct f {
    h: e
}

impl b for &str {
    fn d(self) -> f {
        f { h: e }
    }
}