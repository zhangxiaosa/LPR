fn a() -> impl b {
    {}.d(|| "")
}

trait b {
    fn d(self);
}

impl b for () {}
