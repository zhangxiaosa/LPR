fn a() -> f<()> {
    f { h: () }
}

struct f<c> {
    h: c,
}

impl<e> f<e> {
    fn d(self, _e: impl FnOnce() -> &str) -> f<e> {
        self
    }
}

fn c<e>(_: e) {}
