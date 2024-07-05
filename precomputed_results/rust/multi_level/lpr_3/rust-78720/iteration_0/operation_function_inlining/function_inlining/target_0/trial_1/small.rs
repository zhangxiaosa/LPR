fn a() -> impl b {
    {
        f::<_, &str> {}
    }
}

struct f<c> {}

fn main() {
    a();
}

fn c<e>(_: e) {}
