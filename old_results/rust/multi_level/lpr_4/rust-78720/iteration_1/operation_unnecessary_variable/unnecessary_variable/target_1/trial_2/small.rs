fn a() -> impl b {
    {}.d(|| "")
}

trait b {
    fn d(self) -> f {}
}

struct f {
    h: (),
}

impl b for () {}
