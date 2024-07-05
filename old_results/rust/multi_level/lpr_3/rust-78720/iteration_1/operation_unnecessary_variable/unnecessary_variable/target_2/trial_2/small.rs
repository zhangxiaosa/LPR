fn a() -> impl b {
    {}.d(|| f { h })
}

trait b {
    fn d(self, e) -> f;
}

struct f {
    h: (),
}

impl b for () {}
