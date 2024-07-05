fn a() -> impl b {
    {}.d();
}

trait b {
    fn d(self);
}

struct f {
    h: e,
}

impl<e> b for e {
    fn d(self) {
        // Method implementation.
    }
}