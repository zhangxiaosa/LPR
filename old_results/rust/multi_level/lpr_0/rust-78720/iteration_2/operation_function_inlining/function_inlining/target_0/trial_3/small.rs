fn a() -> impl b {
    f { h: () }
}

struct f<c> {
    h: c,
}
