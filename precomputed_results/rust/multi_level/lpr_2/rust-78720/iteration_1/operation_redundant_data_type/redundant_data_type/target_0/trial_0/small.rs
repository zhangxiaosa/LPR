fn a() -> impl b {
    {}.d(|| "")
}

trait b {
    fn d<e>(self, e) -> c {}
}

struct c {
    h: e,
}

impl<e> b for e {}