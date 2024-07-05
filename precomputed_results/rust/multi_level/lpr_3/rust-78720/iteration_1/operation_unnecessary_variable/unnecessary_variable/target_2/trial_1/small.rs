fn a() -> impl b {
    {}.d(|| "")
}

trait b {
    fn d(self);
}

struct f {
    h: ();
}

impl b for () {}
