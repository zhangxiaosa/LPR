fn a() -> impl f<()> {
    f { h: () }
}

struct f<c> {
    h: c,
}

impl<e> f<e> {}